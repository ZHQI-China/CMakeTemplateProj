# 收集当前目录下的所有 .cpp 文件
file(GLOB TEST_SOURCES "*.cpp")

# 遍历每个源文件并生成对应的可执行文件
foreach(src IN LISTS TEST_SOURCES)
    # 提取目标名称（去掉 .cpp 后缀）
    get_filename_component(target_name ${src} NAME_WE)

    # 添加可执行文件目标
    add_executable(${target_name} 
        ${src}
        ${CORE_SOURCES}
        ${CORE_HEADERS}
    )

    # 设置包含目录
    target_include_directories(${target_name} PRIVATE
        ${CMAKE_SOURCE_DIR}/${PROJECT_NAME}/src

        ${SpdlogPath}/include
    )

endforeach()
#include <iostream>
#include "utils/logger.h"

void test_logger() {

	spdlog::set_level(spdlog::level::trace);

	LogTrace("{}", "trace text");
	LogInfo("数字：{}  {}  {}  {}", true, 1, 1.2f, 2.3);

	int i = 1;
	float j = 1.2f;
	double k = 1.23;

	LogDebug("精度：--{}--{:.2f}--{:.8f}--", i, j, k);
	LogWarn("字符串：{} {}", "c_str: 中文", std::string("std::string(中文)"));
	LogError("换序：{0} {2} {1}", "step1", "step2", "step3");

	LogInfo("\n");
	LogInfo("-------------Loction test-------------");
	LogDebugL("L精度：--{}--{:.2f}--{:.8f}--", i, j, k);
	LogWarnL("L字符串：{} {}", "c_str: 中文", std::string("std::string(中文)"));
	LogErrorL("L换序：{0} {2} {1}", "step1", "step2", "step3");

}



int main(int argc, char* argv[]){
    std::cout << "Hello World!" << std::endl;

    test_logger();

    return 0;
}
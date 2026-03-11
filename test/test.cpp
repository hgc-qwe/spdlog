#include <iostream>
#include "spdlog/spdlog.h"

int main() {
    spdlog::info("Welcome to spdlog!"); //信息级别
    spdlog::error("Some error message with arg: {}", 1); //错误级别
    spdlog::warn("Easy padding in numbers like {:08d}", 12); //警告级别
    spdlog::critical("Support for int: {0:d}; hex: {0:x}; oct: {0:o}", 42); // 致命错误级别
    spdlog::debug("This message might not be shown"); // 调试级别

    return 0;
}
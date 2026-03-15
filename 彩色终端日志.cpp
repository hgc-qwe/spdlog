#include <iostream>
#include "spdlog/spdlog.h"
#include <spdlog/sinks/stdout_color_sinks.h>

int main() {
    auto logger = spdlog::stdout_color_mt("console");

    logger->info("Hello");
    logger->warn("Warning!");
    logger->error("Error!");
}

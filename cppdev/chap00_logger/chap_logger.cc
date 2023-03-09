/***********************************************************************
 * @file: chap_logger.cc
 * @brief: header file
 * @history:   
 * @date:2023-02-28
 * @version: v1.1 
 * @author:  pyang
 * @contact: yeangPan@outlook.com
 * @license: Apache License Version 2.0, 2023 yangp
 * @description:    
 * @Copyright:  (C)  2023  .pyang. all right reserved
***********************************************************************/



#include <spdlog/spdlog.h>
#include <spdlog/sinks/rotating_file_sink.h>

constexpr auto LOGGER_NAME = "cpptemplate";
constexpr auto LOGGER_FILE = "logs/cpp.log";

int main(int argc, char const *argv[])
{
    auto logger = spdlog::rotating_logger_mt(LOGGER_NAME,LOGGER_FILE, 1048576 * 5, 3);
    logger->set_pattern("%Y-%m-%d %H:%M:%S.%e - %n - %l - tid:%t - %v");
    logger->debug("info");
    logger->info("info");
    logger->warn("info");
    logger->error("info");
    return 0;
}

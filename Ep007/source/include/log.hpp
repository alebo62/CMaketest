#pragma once

enum class LogType{
    MESSAGE,
    WARNING,
    FATAL_ERR
};

void log_data(const char* msg, LogType type);
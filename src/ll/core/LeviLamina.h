#pragma once

#include "ll/api/Logger.h"
namespace ll {
extern Logger logger;
extern std::chrono::steady_clock::time_point SeverStartBeginTime;
extern std::chrono::steady_clock::time_point SeverStartEndTime;
} // namespace ll

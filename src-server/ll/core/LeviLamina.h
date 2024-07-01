#pragma once

#include "ll/api/Logger.h"
namespace ll {
extern Logger logger;
#ifdef LL_PLAT_SERVER
extern std::chrono::steady_clock::time_point severStartBeginTime;
extern std::chrono::steady_clock::time_point severStartEndTime;
#endif
} // namespace ll

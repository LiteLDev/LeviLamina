#pragma once

#include "ll/api/Logger.h"

namespace ll {
using namespace ll::i18n_literals;

extern Logger logger;
extern std::chrono::steady_clock::time_point severStartBeginTime;
extern std::chrono::steady_clock::time_point severStartEndTime;
} // namespace ll

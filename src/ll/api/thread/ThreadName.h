#pragma once

#include <string>
#include <string_view>
#include <thread>

#include "ll/api/base/Macro.h"

namespace ll::thread {
LLNDAPI std::optional<std::string> getThreadName(std::thread::id id = std::this_thread::get_id());
LLAPI bool setThreadName(std::string_view name, std::thread::id id = std::this_thread::get_id());
} // namespace ll::thread

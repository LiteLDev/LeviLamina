#pragma once

#include <atomic>

namespace ll {
LLAPI bool setServerMotd(std::string const& serverName, bool shouldAnnounce = true);
} // namespace ll

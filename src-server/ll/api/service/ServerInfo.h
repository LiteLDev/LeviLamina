#pragma once

#include <atomic>

namespace ll {
LLNDAPI bool setServerMotd(std::string const& serverName, bool shouldAnnounce = true);
} // namespace ll

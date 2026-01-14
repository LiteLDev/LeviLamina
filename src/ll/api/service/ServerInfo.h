#pragma once

#include <atomic>
#include <filesystem>

namespace ll {
LLAPI bool setServerMotd(std::string const& serverName, bool shouldAnnounce = true);
LLNDAPI std::optional<std::filesystem::path> getWorldPath();
LLNDAPI std::optional<std::filesystem::path> getWorldDataRoot();
LLNDAPI std::optional<std::filesystem::path> getWorldConfigRoot();
} // namespace ll

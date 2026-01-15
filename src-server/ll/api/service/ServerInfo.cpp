#include "ll/api/service/ServerInfo.h"

#include <filesystem>

namespace ll {
namespace fs = std::filesystem;
namespace worldStoragePath {
extern std::string_view dataPath;
extern std::string_view configPath;
} // namespace worldStoragePath

std::optional<fs::path> createAndReturnPath(fs::path const& base, std::string_view subPath) {
    auto path = base / subPath;
    if (!fs::exists(path)) {
        fs::create_directories(path);
    }
    return path;
}

std::optional<fs::path> getWorldDataRoot() {
    if (auto worldPath = getWorldPath()) {
        return createAndReturnPath(worldPath.value(), worldStoragePath::dataPath);
    }
    return std::nullopt;
}

std::optional<fs::path> getWorldConfigRoot() {
    if (auto worldPath = getWorldPath()) {
        return createAndReturnPath(worldPath.value(), worldStoragePath::configPath);
    }
    return std::nullopt;
}
} // namespace ll

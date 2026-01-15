#include "ll/api/service/ServerInfo.h"
#include "ll/api/service/Bedrock.h"

#include "mc/client/game/ClientInstance.h"
#include "mc/network/GameConnectionInfo.h"
#include "mc/world/Minecraft.h"

#include <filesystem>

namespace ll {
namespace fs = std::filesystem;
namespace worldStoragePath {
extern std::string_view dataPath;
extern std::string_view configPath;
} // namespace worldStoragePath

std::optional<fs::path> createAndReturnPath(fs::path const& base, std::string_view subPath) {
    fs::path path = base / subPath;
    if (!fs::exists(path)) fs::create_directories(path);
    return path;
}

std::optional<fs::path> getWorldDataRoot() {
    if (auto client = service::getClientInstance()) {
        if (auto info = client->getGameConnectionInfo(); info && info->mType != Social::ConnectionType::Local) {
            return createAndReturnPath(
                worldStoragePath::dataPath,
                info->mHostIpAddress.get() + "_" + std::to_string(info->mPort)
            );
        }
    }
    if (auto worldPath = getWorldPath()) {
        return createAndReturnPath(*worldPath, worldStoragePath::dataPath);
    }
    return std::nullopt;
}

std::optional<fs::path> getWorldConfigRoot() {
    if (auto client = service::getClientInstance()) {
        if (auto info = client->getGameConnectionInfo(); info && info->mType != Social::ConnectionType::Local) {
            return createAndReturnPath(
                worldStoragePath::configPath,
                info->mHostIpAddress.get() + "_" + std::to_string(info->mPort)
            );
        }
    }
    if (auto worldPath = getWorldPath()) {
        return createAndReturnPath(*worldPath, worldStoragePath::configPath);
    }
    return std::nullopt;
}
} // namespace ll

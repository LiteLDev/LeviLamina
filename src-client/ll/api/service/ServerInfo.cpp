#include "ll/api/service/ServerInfo.h"
#include "ll/api/service/Bedrock.h"

#include "mc/client/game/ClientInstance.h"
#include "mc/network/GameConnectionInfo.h"
#include "mc/world/Minecraft.h"

#include <filesystem>

namespace ll {
namespace fs = std::filesystem;
namespace worldStoragePath {
extern std::string_view const dataPath;
extern std::string_view const configPath;
} // namespace worldStoragePath

std::optional<fs::path> createAndReturnPath(fs::path const& base, std::string_view const& subPath) {
    auto path = base / subPath;
    if (!fs::exists(path)) {
        fs::create_directories(path);
    }
    return path;
}

std::optional<fs::path> getWorldDataRoot() {
    auto client = service::getClientInstance();
    if (client) {
        auto info = client->getGameConnectionInfo();
        if (info && info->mType != Social::ConnectionType::Local) {
            return createAndReturnPath(worldStoragePath::dataPath, info->mUnresolvedUrl.get());
        }
    }
    if (auto worldPath = getWorldPath()) {
        return createAndReturnPath(*worldPath, worldStoragePath::dataPath);
    }
    return std::nullopt;
}

std::optional<fs::path> getWorldConfigRoot() {
    auto client = service::getClientInstance();
    if (client) {
        auto info = client->getGameConnectionInfo();
        if (info && info->mType != Social::ConnectionType::Local) {
            return createAndReturnPath(worldStoragePath::configPath, info->mUnresolvedUrl.get());
        }
    }
    if (auto worldPath = getWorldPath()) {
        return createAndReturnPath(*worldPath, worldStoragePath::configPath);
    }
    return std::nullopt;
}
} // namespace ll

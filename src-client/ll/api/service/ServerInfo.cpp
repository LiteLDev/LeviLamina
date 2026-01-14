#include "ll/api/service/ServerInfo.h"
#include "ll/api/service/Bedrock.h"

#include "mc/client/game/ClientInstance.h"
#include "mc/network/GameConnectionInfo.h"
#include "mc/world/Minecraft.h"

#include <filesystem>

namespace ll {
namespace fs = std::filesystem;

std::optional<fs::path> createAndReturnPath(const fs::path& base, const std::string& subPath) {
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
            return createAndReturnPath("data", info->mUnresolvedUrl.get());
        }
    }
    if (auto worldPath = getWorldPath()) {
        return createAndReturnPath(*worldPath, "data");
    }
    return std::nullopt;
}

std::optional<fs::path> getWorldConfigRoot() {
    auto client = service::getClientInstance();
    if (client) {
        auto info = client->getGameConnectionInfo();
        if (info && info->mType != Social::ConnectionType::Local) {
            return createAndReturnPath("config", info->mUnresolvedUrl.get());
        }
    }
    if (auto worldPath = getWorldPath()) {
        return createAndReturnPath(*worldPath, "config");
    }
    return std::nullopt;
}
} // namespace ll

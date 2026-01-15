#include "ll/api/service/ServerInfo.h"
#include "ll/api/service/Bedrock.h"
#include "ll/api/utils/StringUtils.h"

#include "mc/network/ServerNetworkHandler.h"
#include "mc/world/Minecraft.h"
#include "mc/world/level/storage/DBStorage.h"

namespace ll {
namespace fs = std::filesystem;
namespace worldStoragePath {
std::string_view dataPath   = "ll_data";
std::string_view configPath = "ll_config";
} // namespace worldStoragePath

bool setServerMotd(std::string const& serverName, bool shouldAnnounce) {
    if (!service::getServerNetworkHandler()) return false;
    service::getServerNetworkHandler()->allowIncomingConnections(serverName, shouldAnnounce);
    return true;
}

std::optional<fs::path> getWorldPath() {
    auto db = service::getDBStorage();
    if (!db) return std::nullopt;
    return fs::path(string_utils::str2u8str(db->getFullPath().value));
}
} // namespace ll

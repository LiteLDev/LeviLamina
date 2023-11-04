#include "ll/api/plugin/Plugin.h"

#include <filesystem>
#include <utility>

namespace fs = std::filesystem;
using namespace ll::utils;

namespace ll::plugin {

fs::path Plugin::getDefaultDataPath() const {
    std::string dataPath = "plugins\\" + mManifest.name;
    if (!fs::exists(string_utils::sv2u8sv(dataPath))) {
        std::error_code ec;
        fs::create_directories(string_utils::sv2u8sv(dataPath), ec);
    }
    return dataPath;
}

Plugin::Plugin(Manifest manifest, Handle handle) : mManifest(std::move(manifest)), mHandle(handle) {}

const Manifest& Plugin::getManifest() const { return mManifest; }

std::unordered_map<std::string, std::any>& Plugin::getSharedData() { return mSharedData; }

} // namespace ll::plugin

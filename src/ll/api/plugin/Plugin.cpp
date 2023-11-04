#include "ll/api/plugin/Plugin.h"

#include <filesystem>
#include <utility>

namespace fs = std::filesystem;
using namespace ll::utils;

namespace ll::plugin {

fs::path Plugin::getDefaultDataPath() const {
    static auto path = [&] {
        fs::path dataPath = string_utils::str2u8str("plugins\\" + mManifest.name);
        if (!fs::exists(dataPath)) {
            std::error_code ec;
            fs::create_directories(dataPath, ec);
        }
        return dataPath;
    }();
    return path;
}

Plugin::Plugin(Manifest manifest) : mManifest(std::move(manifest)) {}

const Manifest& Plugin::getManifest() const { return mManifest; }

std::unordered_map<std::string, std::any>& Plugin::getSharedData() const { return mSharedData; }

} // namespace ll::plugin

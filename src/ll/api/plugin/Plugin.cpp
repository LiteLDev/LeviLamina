#include "ll/api/plugin/Plugin.h"

#include <filesystem>
#include <utility>

namespace fs = std::filesystem;
using namespace ll::utils;

namespace ll::plugin {

struct Plugin::Impl {
    Manifest                                          manifest;
    Handle                                            handle{};
    mutable std::unordered_map<std::string, std::any> sharedData;
};

fs::path Plugin::getDefaultDataPath() const {
    static auto path = [&] {
        fs::path dataPath = string_utils::str2u8str("plugins\\" + mImpl->manifest.name);
        if (!fs::exists(dataPath)) {
            std::error_code ec;
            fs::create_directories(dataPath, ec);
        }
        return dataPath;
    }();
    return path;
}

Plugin::Plugin(Manifest manifest, Handle handle) {
    mImpl           = std::make_unique<Impl>();
    mImpl->manifest = std::move(manifest);
    mImpl->handle   = handle;
}

const Manifest& Plugin::getManifest() const { return mImpl->manifest; }

Plugin::Handle Plugin::getHandle() const { return mImpl->handle; }

std::unordered_map<std::string, std::any>& Plugin::getSharedData() const { return mImpl->sharedData; }

std::shared_ptr<Plugin> Plugin::create(Manifest manifest, Plugin::Handle handle) {
    return std::shared_ptr<Plugin>(new Plugin(std::move(manifest), handle));
}

Plugin::~Plugin() {}

} // namespace ll::plugin

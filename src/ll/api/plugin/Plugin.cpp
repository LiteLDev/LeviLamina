#include "ll/api/plugin/Plugin.h"
#include "ll/api/utils/FileUtils.h"
#include <filesystem>
#include <utility>

namespace fs = std::filesystem;
using namespace ll::utils;

namespace ll::plugin {

struct Plugin::Impl {
    Manifest   manifest;
    Handle     handle{};
    SharedData sharedData;
    Callback   onLoad;
    Callback   onUnload;
    Callback   onEnable;
    Callback   onDisable;
};

Plugin::Plugin(Manifest manifest, Handle handle) {
    mImpl           = std::make_unique<Impl>();
    mImpl->manifest = std::move(manifest);
    mImpl->handle   = handle;
}

Plugin::~Plugin() = default;

const Manifest& Plugin::getManifest() const { return mImpl->manifest; }

Plugin::Handle Plugin::getHandle() const { return mImpl->handle; }

Plugin::SharedData const& Plugin::getSharedData() const { return mImpl->sharedData; }
Plugin::SharedData&       Plugin::getSharedData() { return mImpl->sharedData; }

std::shared_ptr<Plugin> Plugin::create(Manifest manifest, Plugin::Handle handle) {
    return std::shared_ptr<Plugin>(new Plugin(std::move(manifest), handle));
}

fs::path Plugin::getPluginDir() const {
    static auto path = [&] {
        auto dataPath = file_utils::u8path("plugins/" + mImpl->manifest.name);
        if (!fs::exists(dataPath)) {
            std::error_code ec;
            fs::create_directories(dataPath, ec);
        }
        return dataPath;
    }();
    return path;
}

fs::path Plugin::getDataDir() const {
    static auto path = getPluginDir() / "data";
    return path;
}

fs::path Plugin::getConfigDir() const {
    static auto path = getPluginDir() / "config";
    return path;
}

bool Plugin::onLoad() { return !mImpl->onLoad || mImpl->onLoad(); }

bool Plugin::onUnload() { return !mImpl->onUnload || mImpl->onUnload(); }

bool Plugin::onEnable() { return !mImpl->onEnable || mImpl->onEnable(); }

bool Plugin::onDisable() { return !mImpl->onDisable || mImpl->onDisable(); }

void Plugin::onLoad(Callback const& func) { mImpl->onLoad = func; }

void Plugin::onUnload(Callback const& func) { mImpl->onUnload = func; }

void Plugin::onEnable(Callback const& func) { mImpl->onEnable = func; }

void Plugin::onDisable(Callback const& func) { mImpl->onDisable = func; }

} // namespace ll::plugin

#include "ll/api/plugin/Plugin.h"
#include "ll/api/io/FileUtils.h"
#include <filesystem>
#include <utility>

namespace fs = std::filesystem;
using namespace ll::utils;

namespace ll::plugin {

struct Plugin::Impl {
    PluginState state = PluginState::Disabled;
    Manifest    manifest;
    Handle      handle{};
    SharedData  sharedData;
    Callback    onLoad;
    Callback    onUnload;
    Callback    onEnable;
    Callback    onDisable;
};

Plugin::Plugin(Manifest manifest, Handle handle) {
    mImpl           = std::make_unique<Impl>();
    mImpl->manifest = std::move(manifest);
    mImpl->handle   = handle;
}

Plugin::~Plugin() = default;

Manifest const& Plugin::getManifest() const { return mImpl->manifest; }

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

bool Plugin::onLoad() const { return !mImpl->onLoad || mImpl->onLoad(); }

bool Plugin::onUnload() const { return !mImpl->onUnload || mImpl->onUnload(); }

bool Plugin::onEnable() const { return !mImpl->onEnable || mImpl->onEnable(); }

bool Plugin::onDisable() const { return !mImpl->onDisable || mImpl->onDisable(); }

void Plugin::onLoad(Callback func) { mImpl->onLoad = std::move(func); }

void Plugin::onUnload(Callback func) { mImpl->onUnload = std::move(func); }

void Plugin::onEnable(Callback func) { mImpl->onEnable = std::move(func); }

void Plugin::onDisable(Callback func) { mImpl->onDisable = std::move(func); }

void Plugin::setState(PluginState state) const { mImpl->state = state; }

PluginState Plugin::getState() const { return mImpl->state; }

} // namespace ll::plugin

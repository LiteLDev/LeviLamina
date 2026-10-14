#include "ll/api/mod/ModManager.h"
#include "ll/api/i18n/I18n.h"

#include <utility>

namespace ll::mod {
struct ModManager::Impl {
    std::string                     type;
    std::filesystem::path           loadDirectory;
    std::recursive_mutex            mutex;
    StringMap<std::shared_ptr<Mod>> mods;
    explicit Impl(std::string type, std::filesystem::path loadDirectory)
    : type(std::move(type)),
      loadDirectory(loadDirectory.empty() ? getModsRoot() : std::move(loadDirectory)) {}
};

ModManager::ModManager(std::string_view type, std::filesystem::path loadDirectory)
: impl(std::make_unique<Impl>(std::string{type}, std::move(loadDirectory))) {}

ModManager::~ModManager() = default;

std::lock_guard<std::recursive_mutex> ModManager::lock() const { return std::lock_guard(impl->mutex); }

void ModManager::addMod(std::string_view name, std::shared_ptr<Mod> const& mod) {
    auto l(lock());
    impl->mods.try_emplace(std::string{name}, mod);
}

void ModManager::eraseMod(std::string_view name) {
    auto l(lock());
    if (auto i = impl->mods.find(name); i != impl->mods.end()) {
        impl->mods.erase(i);
    }
}

Expected<> ModManager::enable(std::string_view name) {
    auto l(lock());
    return getMod(name)->onEnable();
}

Expected<> ModManager::disable(std::string_view name) {
    auto l(lock());
    return getMod(name)->onDisable();
}

std::string const& ModManager::getType() const { return impl->type; }

std::filesystem::path const& ModManager::getLoadDirectory() const { return impl->loadDirectory; }

bool ModManager::hasMod(std::string_view name) const {
    auto l(lock());
    return impl->mods.contains(name);
}

std::shared_ptr<Mod> ModManager::getMod(std::string_view name) const {
    auto l(lock());
    if (auto i = impl->mods.find(name); i != impl->mods.end()) {
        return i->second;
    }
    return {};
}

size_t ModManager::getModCount() const {
    auto l(lock());
    return impl->mods.size();
}

coro::Generator<Mod&> ModManager::mods() const {
    auto l(lock());
    for (auto& p : impl->mods) {
        co_yield *p.second;
    }
}
} // namespace ll::mod

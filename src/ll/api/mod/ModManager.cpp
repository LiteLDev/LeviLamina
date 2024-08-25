#include "ll/api/mod/ModManager.h"
#include "ll/api/i18n/I18n.h"

namespace ll::mod {
struct ModManager::Impl {
    std::string                     type;
    std::recursive_mutex            mutex;
    StringMap<std::shared_ptr<Mod>> mods;
    explicit Impl(std::string type) : type(std::move(type)) {}
};

ModManager::ModManager(std::string_view type) : impl(std::make_unique<Impl>(std::string{type})) {}

ModManager::~ModManager() = default;

std::lock_guard<std::recursive_mutex> ModManager::lock() { return std::lock_guard(impl->mutex); }

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

[[nodiscard]] std::string const& ModManager::getType() const { return impl->type; }

[[nodiscard]] bool ModManager::hasMod(std::string_view name) {
    auto l(lock());
    return impl->mods.contains(name);
}

[[nodiscard]] std::shared_ptr<Mod> ModManager::getMod(std::string_view name) {
    auto l(lock());
    if (auto i = impl->mods.find(name); i != impl->mods.end()) {
        return i->second;
    }
    return {};
}

[[nodiscard]] size_t ModManager::getModCount() {
    auto l(lock());
    return impl->mods.size();
}

void ModManager::forEachMod(std::function<bool(std::string_view name, Mod&)> const& fn) {
    auto l(lock());
    for (auto& [name, mod] : impl->mods) {
        if (!fn(name, *mod)) {
            return;
        }
    }
}

} // namespace ll::mod

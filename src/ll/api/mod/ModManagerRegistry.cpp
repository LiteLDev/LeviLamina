#include "ll/api/mod/ModManagerRegistry.h"
#include "ll/api/i18n/I18n.h"

#include "ll/core/LeviLamina.h"

namespace ll::mod {
struct ModManagerRegistry::Impl {
    std::recursive_mutex                   modMtx;
    StringMap<std::shared_ptr<ModManager>> managers;
    StringMap<std::string>                 loadedMods; // k, v: name, type

    std::recursive_mutex                               fnMtx;
    std::vector<std::function<void(std::string_view)>> onModLoad;
    std::vector<std::function<void(std::string_view)>> onModUnload;
    std::vector<std::function<void(std::string_view)>> onModEnable;
    std::vector<std::function<void(std::string_view)>> onModDisable;
};

ModManagerRegistry::ModManagerRegistry() : impl(std::make_unique<Impl>()) {}

ModManagerRegistry::~ModManagerRegistry() = default;

ModManagerRegistry& ModManagerRegistry::getInstance() {
    static ModManagerRegistry instance;
    return instance;
}

Expected<> ModManagerRegistry::releaseManagers() noexcept try {
    std::lock_guard lock(impl->modMtx);
    impl->loadedMods.clear();
    impl->managers.clear();
    return {};
} catch (...) {
    return makeExceptionError();
}

Expected<> ModManagerRegistry::loadMod(Manifest manifest) noexcept try {
    std::lock_guard lock(impl->modMtx);
    if (hasManager(manifest.type)) {
        if (hasMod(manifest.name)) {
            return makeStringError("Mod {0} already loaded"_tr(manifest.name));
        }
        std::string name = manifest.name;
        std::string type = manifest.type;
        return getManager(type)->load(std::move(manifest)).transform([&, this] {
            impl->loadedMods.insert_or_assign(std::move(name), std::move(type)).first;
        });
    } else {
        return makeStringError("Unrecognized mod type: {0}"_tr(manifest.type));
    }
} catch (...) {
    return makeExceptionError();
}

Expected<> ModManagerRegistry::unloadMod(std::string_view name) noexcept try {
    std::lock_guard lock(impl->modMtx);
    if (!hasMod(name)) {
        return makeStringError("Mod {0} not found"_tr(name));
    }
    return getManagerForMod(name)->unload(name).transform([&, this] { impl->loadedMods.erase(std::string{name}); });
} catch (...) {
    return makeExceptionError();
}

Expected<> ModManagerRegistry::enableMod(std::string_view name) const noexcept try {
    std::lock_guard lock(impl->modMtx);
    if (!hasMod(name)) {
        return makeStringError("Mod {0} not found"_tr(name));
    }
    if (getMod(name)->isEnabled()) {
        return makeStringError("Mod {0} already enabled"_tr(name));
    }
    return getManagerForMod(name)->enable(name);
} catch (...) {
    return makeExceptionError();
}

Expected<> ModManagerRegistry::disableMod(std::string_view name) const noexcept try {
    std::lock_guard lock(impl->modMtx);
    if (!hasMod(name)) {
        return makeStringError("Mod {0} not found"_tr(name));
    }
    if (getMod(name)->isDisabled()) {
        return makeStringError("Mod {0} already disabled"_tr(name));
    }
    return getManagerForMod(name)->disable(name);
} catch (...) {
    return makeExceptionError();
}

bool ModManagerRegistry::addManager(std::shared_ptr<ModManager> const& manager) {
    std::lock_guard lock(impl->modMtx);
    if (!manager) {
        return false;
    }
    return impl->managers.emplace(manager->getType(), manager).second;
}

bool ModManagerRegistry::hasManager(std::string_view type) const {
    std::lock_guard lock(impl->modMtx);
    return impl->managers.contains(type);
}

std::shared_ptr<ModManager> ModManagerRegistry::getManager(std::string_view type) const {
    std::lock_guard lock(impl->modMtx);
    if (hasManager(type)) {
        return impl->managers.find(type)->second;
    }
    return {};
}

std::shared_ptr<ModManager> ModManagerRegistry::getManagerForMod(std::string_view name) const {
    std::lock_guard lock(impl->modMtx);
    if (hasMod(name)) {
        return getManager(impl->loadedMods.find(name)->second);
    }
    return {};
}

bool ModManagerRegistry::eraseManager(std::string_view type) {
    std::lock_guard lock(impl->modMtx);
    if (auto i = impl->managers.find(type); i != impl->managers.end()) {
        erase_if(impl->loadedMods, [type](auto& item) { return item.second == type; });
        impl->managers.erase(i);
        return true;
    }
    return false;
}

coro::Generator<ModManager&> ModManagerRegistry::managers() const {
    std::lock_guard lock(impl->modMtx);
    for (auto& p : impl->managers) {
        co_yield *p.second;
    }
}

coro::Generator<Mod&> ModManagerRegistry::mods() const {
    std::lock_guard lock(impl->modMtx);
    for (auto& manager : managers()) {
        for (auto& mod : manager.mods()) {
            co_yield mod;
        }
    }
}

bool ModManagerRegistry::hasMod(std::string_view name) const {
    std::lock_guard lock(impl->modMtx);
    return impl->loadedMods.contains(name) && hasManager(impl->loadedMods.find(name)->second);
}

std::string ModManagerRegistry::getModType(std::string_view name) const {
    std::lock_guard lock(impl->modMtx);
    if (hasMod(name)) {
        return impl->loadedMods.find(name)->second;
    }
    return {};
}

std::shared_ptr<Mod> ModManagerRegistry::getMod(std::string_view name) const {
    std::lock_guard lock(impl->modMtx);
    if (!hasMod(name)) {
        return {};
    }
    return getManagerForMod(name)->getMod(name);
}

void ModManagerRegistry::executeOnModLoad(std::function<void(std::string_view name)>&& fn) noexcept {
    std::lock_guard lock(impl->fnMtx);
    impl->onModLoad.push_back(std::move(fn));
}
void ModManagerRegistry::executeOnModUnload(std::function<void(std::string_view name)>&& fn) noexcept {
    std::lock_guard lock(impl->fnMtx);
    impl->onModUnload.push_back(std::move(fn));
}
void ModManagerRegistry::executeOnModEnable(std::function<void(std::string_view name)>&& fn) noexcept {
    std::lock_guard lock(impl->fnMtx);
    impl->onModEnable.push_back(std::move(fn));
}
void ModManagerRegistry::executeOnModDisable(std::function<void(std::string_view name)>&& fn) noexcept {
    std::lock_guard lock(impl->fnMtx);
    impl->onModDisable.push_back(std::move(fn));
}


Expected<> ModManagerRegistry::onModLoad(std::string_view name) const noexcept try {
    std::lock_guard lock(impl->fnMtx);
    for (auto& fn : impl->onModLoad) {
        fn(name);
    }
    return {};
} catch (...) {
    return makeExceptionError();
}

Expected<> ModManagerRegistry::onModUnload(std::string_view name) const noexcept try {
    std::lock_guard lock(impl->fnMtx);
    for (auto& fn : impl->onModUnload) {
        fn(name);
    }
    return {};
} catch (...) {
    return makeExceptionError();
}

Expected<> ModManagerRegistry::onModEnable(std::string_view name) const noexcept try {
    std::lock_guard lock(impl->fnMtx);
    for (auto& fn : impl->onModEnable) {
        fn(name);
    }
    return {};
} catch (...) {
    return makeExceptionError();
}

Expected<> ModManagerRegistry::onModDisable(std::string_view name) const noexcept try {
    std::lock_guard lock(impl->fnMtx);
    for (auto& fn : impl->onModDisable) {
        fn(name);
    }
    return {};
} catch (...) {
    return makeExceptionError();
}

} // namespace ll::mod

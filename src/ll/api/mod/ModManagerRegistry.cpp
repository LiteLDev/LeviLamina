#include "ll/api/mod/ModManagerRegistry.h"
#include "ll/api/i18n/I18n.h"

#include "ll/core/LeviLamina.h"

namespace ll::mod {
using namespace i18n_literals;

struct ModManagerRegistry::Impl {
    std::recursive_mutex                               mutex;
    UnorderedStringMap<std::shared_ptr<ModManager>>    managers;
    UnorderedStringMap<std::string>                    loadedMods; // k, v: name, type
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

Expected<> ModManagerRegistry::loadMod(Manifest manifest) noexcept {
    try {
        std::lock_guard lock(impl->mutex);
        if (hasManager(manifest.type)) {
            if (hasMod(manifest.name)) {
                return makeStringError("Mod {0} already loaded"_tr(manifest.name));
            }
            std::string name = manifest.name;
            std::string type = manifest.type;
            return getManager(type)->load(std::move(manifest)).transform([&, this] {
                auto iter = impl->loadedMods.insert_or_assign(std::move(name), std::move(type)).first;
                for (auto& fn : impl->onModLoad) {
                    fn(iter->first);
                }
            });
        } else {
            return makeStringError("Unrecognized mod type: {0}"_tr(manifest.type));
        }
    } catch (...) {
        return makeExceptionError();
    }
}

Expected<> ModManagerRegistry::unloadMod(std::string_view name) noexcept {
    try {
        std::lock_guard lock(impl->mutex);
        if (!hasMod(name)) {
            return makeStringError("Mod {0} not found"_tr(name));
        }
        return getManagerForMod(name)->unload(name).transform([&, this] {
            impl->loadedMods.erase(std::string{name});
            for (auto& fn : impl->onModUnload) {
                fn(name);
            }
        });
    } catch (...) {
        return makeExceptionError();
    }
}

Expected<> ModManagerRegistry::enableMod(std::string_view name) const noexcept {
    try {
        std::lock_guard lock(impl->mutex);
        if (!hasMod(name)) {
            return makeStringError("Mod {0} not found"_tr(name));
        }
        return getManagerForMod(name)->enable(name).transform([&, this] {
            for (auto& fn : impl->onModEnable) {
                fn(name);
            }
        });
    } catch (...) {
        return makeExceptionError();
    }
}

Expected<> ModManagerRegistry::disableMod(std::string_view name) const noexcept {
    try {
        std::lock_guard lock(impl->mutex);
        if (!hasMod(name)) {
            return makeStringError("Mod {0} not found"_tr(name));
        }
        return getManagerForMod(name)->disable(name).transform([&, this] {
            for (auto& fn : impl->onModDisable) {
                fn(name);
            }
        });
    } catch (...) {
        return makeExceptionError();
    }
}

bool ModManagerRegistry::addManager(std::shared_ptr<ModManager> const& manager) {
    std::lock_guard lock(impl->mutex);
    if (!manager) {
        return false;
    }
    return impl->managers.emplace(manager->getType(), manager).second;
}

bool ModManagerRegistry::hasManager(std::string_view type) const {
    std::lock_guard lock(impl->mutex);
    return impl->managers.contains(type);
}

std::shared_ptr<ModManager> ModManagerRegistry::getManager(std::string_view type) const {
    std::lock_guard lock(impl->mutex);
    if (hasManager(type)) {
        return impl->managers.find(type)->second;
    }
    return {};
}

std::shared_ptr<ModManager> ModManagerRegistry::getManagerForMod(std::string_view name) const {
    std::lock_guard lock(impl->mutex);
    if (hasMod(name)) {
        return getManager(impl->loadedMods.find(name)->second);
    }
    return {};
}

bool ModManagerRegistry::eraseManager(std::string_view type) {
    std::lock_guard lock(impl->mutex);
    if (auto i = impl->managers.find(type); i != impl->managers.end()) {
        std::erase_if(impl->loadedMods, [type](auto& item) { return item.second == type; });
        impl->managers.erase(i);
        return true;
    }
    return false;
}

void ModManagerRegistry::forEachManager(std::function<bool(std::string_view type, ModManager&)> const& fn) const {
    std::lock_guard lock(impl->mutex);
    for (auto& [type, manager] : impl->managers) {
        if (!fn(type, *manager)) {
            return;
        }
    }
}

void ModManagerRegistry::forEachModWithType(
    std::function<bool(std::string_view type, std::string_view name, Mod&)> const& fn
) const {
    std::lock_guard lock(impl->mutex);
    bool            interrupted = false;
    forEachManager([&](std::string_view type, ModManager& manager) {
        manager.forEachMod([&](std::string_view name, Mod& mod) {
            if (!fn(type, name, mod)) {
                interrupted = true;
            }
            return !interrupted;
        });
        return !interrupted;
    });
}

bool ModManagerRegistry::hasMod(std::string_view name) const {
    std::lock_guard lock(impl->mutex);
    return impl->loadedMods.contains(name) && hasManager(impl->loadedMods.find(name)->second);
}

std::string ModManagerRegistry::getModType(std::string_view name) const {
    std::lock_guard lock(impl->mutex);
    if (hasMod(name)) {
        return impl->loadedMods.find(name)->second;
    }
    return {};
}

std::shared_ptr<Mod> ModManagerRegistry::getMod(std::string_view name) const {
    std::lock_guard lock(impl->mutex);
    if (!hasMod(name)) {
        return {};
    }
    return getManagerForMod(name)->getMod(name);
}

void ModManagerRegistry::executeOnModLoad(std::function<void(std::string_view name)>&& fn) {
    std::lock_guard lock(impl->mutex);
    impl->onModLoad.push_back(std::move(fn));
}
void ModManagerRegistry::executeOnModUnload(std::function<void(std::string_view name)>&& fn) {
    std::lock_guard lock(impl->mutex);
    impl->onModUnload.push_back(std::move(fn));
}
void ModManagerRegistry::executeOnModEnable(std::function<void(std::string_view name)>&& fn) {
    std::lock_guard lock(impl->mutex);
    impl->onModEnable.push_back(std::move(fn));
}
void ModManagerRegistry::executeOnModDisable(std::function<void(std::string_view name)>&& fn) {
    std::lock_guard lock(impl->mutex);
    impl->onModDisable.push_back(std::move(fn));
}

} // namespace ll::mod

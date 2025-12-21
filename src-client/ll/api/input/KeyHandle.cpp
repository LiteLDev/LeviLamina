#include "ll/api/input/KeyHandle.h"
#include "ll/api/input/KeyRegistrar.h"

#include "ll/api/mod/ModManagerRegistry.h"

namespace ll::input {

struct KeyHandle::Impl {
    KeyRegistrar&           registrar;
    std::string             name;
    std::string             modName;
    std::vector<int>        keyCodes;
    bool                    allowRemap;
    std::weak_ptr<mod::Mod> mod;
    bool                    valid;

    std::vector<std::pair<KeyHandle::ButtonDownHandler, bool>> buttonDownHandlers;
    std::vector<std::pair<KeyHandle::ButtonUpHandler, bool>>   buttonUpHandlers;

    Impl(
        KeyRegistrar&           registrar,
        std::string const&      name,
        std::vector<int>        keyCodes,
        bool                    allowRemap,
        std::weak_ptr<mod::Mod> mod
    )
    : registrar(registrar),
      name(name),
      modName(mod.lock() ? mod.lock()->getName() : ""),
      keyCodes(keyCodes),
      allowRemap(allowRemap),
      mod(mod),
      valid(true) {}
};

KeyHandle::KeyHandle(
    KeyRegistrar&           registrar,
    std::string const&      name,
    std::vector<int> const& keyCodes,
    bool                    allowRemap,
    std::weak_ptr<mod::Mod> mod
)
: impl(std::make_unique<Impl>(registrar, name, keyCodes, allowRemap, mod)) {}

KeyHandle::~KeyHandle() = default;

std::string const& KeyHandle::getName() const { return impl->name; }

std::string const& KeyHandle::getModName() const { return impl->modName; }

std::string KeyHandle::getFullName() const {
    if (impl->modName.empty()) {
        return impl->name;
    }
    return impl->modName + "." + impl->name;
}

std::vector<int> KeyHandle::getKeyCodes() const { return impl->keyCodes; }

bool KeyHandle::isAllowRemap() const { return impl->allowRemap; }

void KeyHandle::setAllowRemap(bool allowRemap) { impl->allowRemap = allowRemap; }

bool KeyHandle::isValid() const { return impl->valid; }

void KeyHandle::registerButtonDownHandler(ButtonDownHandler handler, bool suspendable) {
    if (handler) {
        impl->buttonDownHandlers.emplace_back(handler, suspendable);
    }
}

void KeyHandle::registerButtonUpHandler(ButtonUpHandler handler, bool suspendable) {
    if (handler) {
        impl->buttonUpHandlers.emplace_back(handler, suspendable);
    }
}

void KeyHandle::disableModOverloads(std::string_view modName) {
    if (auto mod = impl->mod.lock()) {
        if (mod->getName() == modName) {
            impl->valid = false;
            impl->buttonDownHandlers.clear();
            impl->buttonUpHandlers.clear();
        }
    }
}

void KeyHandle::triggerButtonDownHandlers(::FocusImpact focusImpact, ::IClientInstance& client) {
    if (!impl->valid) return;

    for (auto& [handler, suspendable] : impl->buttonDownHandlers) {
        if (handler) {
            try {
                handler(focusImpact, client);
            } catch (...) {}
        }
    }
}

void KeyHandle::triggerButtonUpHandlers(::FocusImpact focusImpact, ::IClientInstance& client) {
    if (!impl->valid) return;

    for (auto& [handler, suspendable] : impl->buttonUpHandlers) {
        if (handler) {
            try {
                handler(focusImpact, client);
            } catch (...) {}
        }
    }
}

} // namespace ll::input
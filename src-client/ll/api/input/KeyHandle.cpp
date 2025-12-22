#include "ll/api/input/KeyHandle.h"
#include "ll/api/input/KeyRegistry.h"

#include "ll/api/mod/ModManagerRegistry.h"

namespace ll::input {

struct KeyHandle::Impl {
    KeyRegistry&             registrar;
    std::string              name;
    std::vector<int>         keyCodes;
    bool                     allowRemap;
    std::weak_ptr<mod::Mod>  mod;
    std::vector<std::string> inputMappingStack{"screen", "gamePlayNormal"};
    bool                     valid;

    std::vector<std::pair<KeyHandle::ButtonDownHandler, bool>> buttonDownHandlers;
    std::vector<std::pair<KeyHandle::ButtonUpHandler, bool>>   buttonUpHandlers;

    Impl(
        KeyRegistry&            registrar,
        std::string_view        name,
        std::vector<int>        keyCodes,
        bool                    allowRemap,
        std::weak_ptr<mod::Mod> mod
    )
    : registrar(registrar),
      name(name),
      keyCodes(keyCodes),
      allowRemap(allowRemap),
      mod(std::move(mod)),
      valid(true) {}
};

KeyHandle::KeyHandle(
    KeyRegistry&            registrar,
    std::string_view        name,
    std::vector<int> const& keyCodes,
    bool                    allowRemap,
    std::weak_ptr<mod::Mod> mod
)
: impl(std::make_unique<Impl>(registrar, name, keyCodes, allowRemap, std::move(mod))) {}

KeyHandle::~KeyHandle() = default;

KeyHandle::KeyHandle(KeyHandle&&) noexcept            = default;
KeyHandle& KeyHandle::operator=(KeyHandle&&) noexcept = default;

std::string const& KeyHandle::getName() const { return impl->name; }

std::shared_ptr<mod::Mod> KeyHandle::getMod() const { return impl->mod.lock(); }

std::string KeyHandle::getFullName() const {
    if (auto mod = getMod()) {
        return mod->getName() + "." + getName();
    } else {
        return getName();
    }
}

std::vector<int> const& KeyHandle::getKeyCodes() const { return impl->keyCodes; }

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
    if (auto mod = getMod()) {
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

void KeyHandle::setInputMappingStack(std::vector<std::string> stacks) { impl->inputMappingStack = std::move(stacks); }

bool KeyHandle::containsInputMappingStack(std::string_view stack) const {
    return std::find(impl->inputMappingStack.begin(), impl->inputMappingStack.end(), stack)
        != impl->inputMappingStack.end();
}

} // namespace ll::input

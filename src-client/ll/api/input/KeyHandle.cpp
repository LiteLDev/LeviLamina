#include "ll/api/input/KeyHandle.h"
#include "ll/api/input/HandleBase.h"
#include "ll/api/input/InputUtils.h"
#include "ll/api/input/KeyRegistry.h"


#include "ll/api/utils/ErrorUtils.h"
#include "ll/core/LeviLamina.h"
#include "mc/client/input/KeyboardRemappingLayout.h"
#include "mc/client/input/Keymapping.h"
#include "mc/deps/input/InputMapping.h"
#include "mc/deps/input/KeyboardKeyBinding.h"
#include "mc/deps/input/MouseButtonBinding.h"


namespace ll::input {

struct KeyHandle::Impl {
    std::vector<int> keyCodes;
    bool             allowRemap;
    FocusImpact      focusImpact;

    std::pair<ButtonUpHandler, bool>   buttonUpHandler;
    std::pair<ButtonDownHandler, bool> buttonDownHandler;

    Impl(std::vector<int> keyCodes, bool allowRemap, FocusImpact focusImpact)
    : keyCodes(std::move(keyCodes)),
      allowRemap(allowRemap),
      focusImpact(focusImpact) {}
};

KeyHandle::KeyHandle(
    KeyRegistry&                          registrar,
    std::string_view                      name,
    std::vector<int>                      keyCodes,
    bool                                  allowRemap,
    std::function<bool(std::string_view)> mappingSwitchProvider,
    FocusImpact                           focusImpact,
    std::weak_ptr<mod::Mod>               mod
)
: HandleBase(registrar, name, std::move(mappingSwitchProvider), std::move(mod)),
  impl(std::make_unique<Impl>(std::move(keyCodes), allowRemap, focusImpact)) {}

void KeyHandle::disableModOverloads(std::string_view modName) {
    if (auto mod = getMod(); mod && mod->getName() == modName) {
        impl->buttonDownHandler = {};
        impl->buttonUpHandler   = {};
        setMenuButtonEnabled(false);
        disable();
    }
}

void KeyHandle::registerMappingBinding(ClientInputMappingFactory& factory) const {
    std::string fullName   = getFullName();
    std::string buttonName = "button." + fullName;

    auto layout = factory.mKeyboardRemappingLayout.lock();

    std::vector<int> keys;

    if (layout) {
        bool inKeymappings = false;
        for (Keymapping& keymapping : layout->mKeymappings.get()) {
            if (keymapping.mAction.get() == fullName) {
                inKeymappings = true;
                keys          = keymapping.mKeys;
                break;
            }
        }
        if (!inKeymappings) {
            keys = getKeyCodes();
            if (isAllowRemap()) layout->setMapping(fullName, getKeyCodes());
            else layout->mKeymappings->emplace_back(fullName, getKeyCodes(), false, false);
        }
        bool inDefaults = false;
        for (Keymapping& keymapping : layout->mDefaultMappings.get()) {
            if (keymapping.mAction.get() == fullName) {
                inDefaults = true;
                break;
            }
        }
        if (!inDefaults) layout->mDefaultMappings->emplace_back(fullName, getKeyCodes(), isAllowRemap(), false);
        else {
            for (auto& defaultKey : *layout->mDefaultMappings) {
                if (*defaultKey.mAction == fullName) {
                    defaultKey.mKeys       = getKeyCodes();
                    defaultKey.mAllowRemap = isAllowRemap();
                    break;
                }
            }
        }
    }

    if (!keys.empty() && keys.front() != 0) {
        for (auto& mapping : *factory.mActiveInputMappings) {
            if (!containsInputMappingStack(mapping.first)) continue;

            for (int key : keys) {
                if (key < 0) {
                    mapping.second.mouseMapping->buttonBindings->emplace_back(buttonName, key + 100);
                } else {
                    mapping.second.keyboardMapping->keyBindings->emplace_back(buttonName, key, getFocusImpact());
                }
            }
        }
    }
}

void KeyHandle::unregisterMappingBinding() const {
    std::string buttonName = "button." + getFullName();

    auto* factory = getReadyMappingFactory();
    if (!factory) return;
    for (auto& mapping : *factory->mActiveInputMappings) {
        std::erase_if(*mapping.second.keyboardMapping->keyBindings, [&](KeyboardKeyBinding const& binding) {
            return *binding.buttonName == buttonName;
        });
        std::erase_if(*mapping.second.mouseMapping->buttonBindings, [&](MouseButtonBinding const& binding) {
            return *binding.buttonName == buttonName;
        });
    }
}

void KeyHandle::triggerButtonDownHandler(::FocusImpact focusImpact, ::IClientInstance& client, bool suspendable) {
    auto lock = getRegistry().lock();

    if (!isValid()) return;

    if (impl->buttonDownHandler.first && suspendable == impl->buttonDownHandler.second) {
        try {
            impl->buttonDownHandler.first(focusImpact, client);
        } catch (...) {
            try {
                getLogger().error("Error in KeyHandle<{}>:", getFullName());
            } catch (...) {}
            error_utils::printCurrentException(getLogger());
        }
    }

    handleMenuButton(focusImpact, client, true, suspendable);
}

void KeyHandle::triggerButtonUpHandler(::FocusImpact focusImpact, ::IClientInstance& client, bool suspendable) {
    auto lock = getRegistry().lock();

    if (!isValid()) return;

    handleMenuButton(focusImpact, client, false, suspendable);

    if (impl->buttonUpHandler.first && suspendable == impl->buttonUpHandler.second) {
        try {
            impl->buttonUpHandler.first(focusImpact, client);
        } catch (...) {
            try {
                getLogger().error("Error in KeyHandle<{}>:", getFullName());
            } catch (...) {}
            error_utils::printCurrentException(getLogger());
        }
    }
}

void KeyHandle::onRemappingLayoutDataChanged() const {
    auto  lock    = getRegistry().lock();
    auto* factory = getReadyMappingFactory();
    if (!factory) return;
    auto layout = factory->mKeyboardRemappingLayout.lock();
    if (!layout) return;

    auto fullName = getFullName();
    for (Keymapping& mapping : layout->mKeymappings.get()) {
        if (mapping.mAction.get() == fullName) {
            mapping.mKeys       = getKeyCodes();
            mapping.mAllowRemap = isAllowRemap();
            return;
        }
    }
}

void KeyHandle::onFocusImpactChanged() const {
    auto  lock    = getRegistry().lock();
    auto* factory = getReadyMappingFactory();
    if (!factory) return;

    std::string buttonName = "button." + getFullName();

    for (auto& mapping : *factory->mActiveInputMappings) {
        auto& keyboardMapping = mapping.second.keyboardMapping;
        for (auto& keyboardKeyBinding : *keyboardMapping->keyBindings) {
            if (*keyboardKeyBinding.buttonName == buttonName) {
                keyboardKeyBinding.focusImpact = getFocusImpact();
            }
        }
    }
}

KeyHandle::~KeyHandle() = default;

KeyHandle::KeyHandle(KeyHandle&&) noexcept            = default;
KeyHandle& KeyHandle::operator=(KeyHandle&&) noexcept = default;

std::string KeyHandle::getFullName() const {
    if (auto mod = getMod()) {
        return mod->getName() + ".key." + getName();
    } else {
        return getName();
    }
}

std::vector<int> KeyHandle::getKeyCodes() const {
    auto lock = getRegistry().lock();
    return impl->keyCodes;
}

void KeyHandle::setKeyCodes(std::vector<int> keyCodes) {
    auto lock      = getRegistry().lock();
    impl->keyCodes = std::move(keyCodes);
    if (isValid()) onRemappingLayoutDataChanged();
}

void KeyHandle::remapKeyCodes(std::vector<int> const& keyCodes) {
    auto lock = getRegistry().lock();

    if (!isValid()) return;

    auto* factory = getReadyMappingFactory();
    if (!factory) return;
    auto layout = factory->mKeyboardRemappingLayout.lock();
    if (!layout) return;

    layout->setMapping(getFullName(), keyCodes);
}

void KeyHandle::resetKeyCodes() {
    auto lock = getRegistry().lock();

    if (!isValid() || !isAllowRemap()) return;

    auto* factory = getReadyMappingFactory();
    if (!factory) return;
    auto layout = factory->mKeyboardRemappingLayout.lock();
    if (!layout) return;

    uint64 index    = 0;
    auto   fullName = getFullName();
    for (Keymapping& keymapping : layout->mKeymappings.get()) {
        if (!keymapping.mAllowRemap) continue;
        if (keymapping.mAction.get() == fullName) {
            layout->defaultKeyAtIndex(index);
            return;
        }
        ++index;
    }
}

bool KeyHandle::isAllowRemap() const {
    auto lock = getRegistry().lock();
    return impl->allowRemap;
}

void KeyHandle::setAllowRemap(bool allowRemap) {
    auto lock        = getRegistry().lock();
    impl->allowRemap = allowRemap;
    if (isValid()) onRemappingLayoutDataChanged();
}

void KeyHandle::setInputMappingStack(std::function<bool(std::string_view)> mappingSwitchProvider) {
    auto lock = getRegistry().lock();
    if (isValid()) {
        if (auto* factory = getReadyMappingFactory()) {

            std::string buttonName = "button." + getFullName();

            std::vector<int> keys;
            auto             fullName = getFullName();
            if (auto layout = factory->mKeyboardRemappingLayout.lock()) {
                for (Keymapping& keymapping : layout->mKeymappings.get()) {
                    if (keymapping.mAction.get() == fullName) {
                        keys = keymapping.mKeys.get();
                        break;
                    }
                }
            }

            for (auto& mapping : *factory->mActiveInputMappings) {
                bool contains = containsInputMappingStack(mapping.first);
                try {
                    if (contains == mappingSwitchProvider(mapping.first)) continue;
                } catch (...) {
                    try {
                        getLogger().error("Error in KeyHandle<{}>:", fullName);
                    } catch (...) {}
                    error_utils::printCurrentException(getLogger());
                    return;
                }

                auto& keyBindings    = *mapping.second.keyboardMapping->keyBindings;
                auto& buttonBindings = *mapping.second.mouseMapping->buttonBindings;

                if (contains) {

                    std::erase_if(keyBindings, [&](KeyboardKeyBinding const& binding) {
                        return *binding.buttonName == buttonName;
                    });
                    std::erase_if(buttonBindings, [&](MouseButtonBinding const& binding) {
                        return *binding.buttonName == buttonName;
                    });
                } else if (!keys.empty() && keys.front() != 0) {
                    for (int key : keys) {
                        if (key < 0) {
                            buttonBindings.emplace_back(buttonName, key + 100);
                        } else {
                            keyBindings.emplace_back(buttonName, key, getFocusImpact());
                        }
                    }
                }
            }
        }
    }
    HandleBase::setInputMappingStack(std::move(mappingSwitchProvider));
}

FocusImpact KeyHandle::getFocusImpact() const {
    auto lock = getRegistry().lock();
    return impl->focusImpact;
}

void KeyHandle::setFocusImpact(::FocusImpact focusImpact) {
    auto lock = getRegistry().lock();
    if (isValid() && focusImpact != impl->focusImpact) {
        impl->focusImpact = focusImpact;
        onFocusImpactChanged();
    }
}

void KeyHandle::setButtonDownHandler(ButtonDownHandler handler, bool suspendable) {
    auto lock               = getRegistry().lock();
    impl->buttonDownHandler = std::make_pair(std::move(handler), suspendable);
}

void KeyHandle::removeButtonDownHandler() {
    auto lock                     = getRegistry().lock();
    impl->buttonDownHandler.first = {};
}

bool KeyHandle::getButtonDownHandlerSuspendable() const {
    auto lock = getRegistry().lock();
    return impl->buttonDownHandler.second;
}

void KeyHandle::setButtonDownHandlerSuspendable(bool suspendable) {
    auto lock                      = getRegistry().lock();
    impl->buttonDownHandler.second = suspendable;
}

void KeyHandle::setButtonUpHandler(ButtonUpHandler handler, bool suspendable) {
    auto lock             = getRegistry().lock();
    impl->buttonUpHandler = std::make_pair(std::move(handler), suspendable);
}

void KeyHandle::removeButtonUpHandler() {
    auto lock                   = getRegistry().lock();
    impl->buttonUpHandler.first = {};
}

bool KeyHandle::getButtonUpHandlerSuspendable() const {
    auto lock = getRegistry().lock();
    return impl->buttonUpHandler.second;
}

void KeyHandle::setButtonUpHandlerSuspendable(bool suspendable) {
    auto lock                    = getRegistry().lock();
    impl->buttonUpHandler.second = suspendable;
}

} // namespace ll::input

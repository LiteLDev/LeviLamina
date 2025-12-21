#include "ll/api/input/KeyRegistrar.h"
#include "ll/api/input/KeyHandle.h"

#include "ll/api/mod/ModManagerRegistry.h"
#include "ll/api/service/Bedrock.h"
#include "mc/client/game/ClientInstance.h"
#include "mc/client/input/KeyboardRemappingLayout.h"
#include "mc/client/input/MinecraftInputHandler.h"
#include "mc/client/input/VanillaClientInputMappingFactory.h"
#include "mc/client/options/Options.h"
#include "mc/deps/input/InputHandler.h"
#include "mc/deps/input/KeyboardInputMapping.h"
#include "mc/deps/input/KeyboardKeyBinding.h"
#include "mc/deps/input/MouseButtonBinding.h"
#include "mc/deps/input/MouseInputMapping.h"
#include <memory>

namespace ll::input {

struct KeyRegistrar::Impl {
    std::unordered_map<std::string, std::unique_ptr<KeyHandle>> keys;
    std::unordered_map<int, std::string>                        keyCodeToName;
    std::unordered_map<std::string, std::vector<int>>           nameToKeyCodes;

    struct PendingKeyMapping {
        std::string      name;
        std::vector<int> keyCodes;
        bool             allowRemap;
    };

    std::vector<PendingKeyMapping> pendingKeyMappings;

    std::recursive_mutex mutex;
};

KeyRegistrar::KeyRegistrar() : impl(std::make_unique<Impl>()) {
    auto& reg = mod::ModManagerRegistry::getInstance();
    reg.executeOnModDisable([this](std::string_view name) { disableModKeys(name); });
}

KeyRegistrar& KeyRegistrar::getInstance() {
    static KeyRegistrar instance;
    return instance;
}

void KeyRegistrar::clear() {
    std::lock_guard lock{impl->mutex};
    impl->keys.clear();
    impl->keyCodeToName.clear();
    impl->nameToKeyCodes.clear();
}

KeyHandle& KeyRegistrar::getOrCreateKey(
    std::string const&      name,
    std::vector<int>        defaultKeyCodes,
    bool                    allowRemap,
    std::weak_ptr<mod::Mod> mod
) {
    std::lock_guard lock{impl->mutex};

    std::string fullName = name;
    if (auto modPtr = mod.lock()) {
        fullName = modPtr->getName() + "." + name;
    }

    if (impl->keys.contains(fullName)) {
        return *impl->keys.at(fullName);
    }

    auto handle = std::make_unique<KeyHandle>(*this, name, defaultKeyCodes, allowRemap, mod);

    auto& ref = *handle;

    impl->keys[fullName] = std::move(handle);

    for (int keyCode : defaultKeyCodes) {
        impl->keyCodeToName[keyCode] = fullName;
    }

    impl->nameToKeyCodes[fullName] = defaultKeyCodes;

    impl->pendingKeyMappings.push_back({fullName, defaultKeyCodes, allowRemap});

    return ref;
}

bool KeyRegistrar::hasKey(std::string const& name) {
    std::lock_guard lock{impl->mutex};

    if (impl->keys.contains(name)) {
        return true;
    }

    for (const auto& [fullName, handle] : impl->keys) {
        size_t dotPos = fullName.find_last_of('.');
        if (dotPos != std::string::npos) {
            std::string baseName = fullName.substr(dotPos + 1);
            if (baseName == name) {
                return true;
            }
        }
    }

    return false;
}

std::vector<std::string> KeyRegistrar::getRegisteredKeys() const {
    std::lock_guard          lock{impl->mutex};
    std::vector<std::string> keys;
    keys.reserve(impl->keys.size());

    for (const auto& pair : impl->keys) {
        keys.push_back(pair.first);
    }

    return keys;
}

void KeyRegistrar::triggerKeyDownCallback(int keyCode, ::FocusImpact focusImpact, ::IClientInstance& client) {
    std::lock_guard lock{impl->mutex};
    auto            it = impl->keyCodeToName.find(keyCode);
    if (it != impl->keyCodeToName.end()) {
        auto keyIt = impl->keys.find(it->second);
        if (keyIt != impl->keys.end() && keyIt->second->isValid()) {
            keyIt->second->triggerButtonDownHandlers(focusImpact, client);
        }
    }
}

void KeyRegistrar::triggerKeyUpCallback(int keyCode, ::FocusImpact focusImpact, ::IClientInstance& client) {
    std::lock_guard lock{impl->mutex};
    auto            it = impl->keyCodeToName.find(keyCode);
    if (it != impl->keyCodeToName.end()) {
        auto keyIt = impl->keys.find(it->second);
        if (keyIt != impl->keys.end() && keyIt->second->isValid()) {
            keyIt->second->triggerButtonUpHandlers(focusImpact, client);
        }
    }
}

void KeyRegistrar::disableModKeys(std::string_view modName) {
    std::lock_guard lock{impl->mutex};
    for (auto& [name, handle] : impl->keys) {
        handle->disableModOverloads(modName);
    }
}

void KeyRegistrar::registerAllKeysToInputHandler(MinecraftInputHandler& inputHandler) {
    std::lock_guard lock{impl->mutex};

    for (auto& [name, handle] : impl->keys) {
        auto keyCodes = handle->getKeyCodes();
        for (int keyCode : keyCodes) {
            inputHandler.mInputHandler->registerButtonDownHandler(
                "button." + name,
                [this, keyCode](::FocusImpact focusImpact, ::IClientInstance& client) {
                    triggerKeyDownCallback(keyCode, focusImpact, client);
                },
                false
            );

            inputHandler.mInputHandler->registerButtonUpHandler(
                "button." + name,
                [this, keyCode](::FocusImpact focusImpact, ::IClientInstance& client) {
                    triggerKeyUpCallback(keyCode, focusImpact, client);
                },
                false
            );
        }
    }
}

void KeyRegistrar::registerKeyboardInputs(
    VanillaClientInputMappingFactory& inputs,
    KeyboardInputMapping&             keyboardMapping,
    MouseInputMapping&                mouseMapping,
    FocusImpact                       focusImpact
) {
    std::lock_guard lock{impl->mutex};

    for (auto& [name, handle] : impl->keys) {
        if (!handle->isValid()) continue;

        std::string buttonName = "button." + name;
        std::string keyName    = "key." + name;
        auto        keyMapping = inputs.mKeyboardRemappingLayout.lock()->getKeymappingByAction(keyName);

        for (int key : *keyMapping.mKeys) {
            if (!keyMapping.isAssigned()) continue;
            if (keyMapping.isAltKey()) {
                mouseMapping.buttonBindings->emplace_back(buttonName, key);
            } else {
                keyboardMapping.keyBindings->emplace_back(buttonName, key, focusImpact);
            }
        }
    }
}

void KeyRegistrar::processPendingKeyMappings(std::vector<::Keymapping>& newDefaultMapping) {
    std::lock_guard lock{impl->mutex};
    for (const auto& pending : impl->pendingKeyMappings) {
        Keymapping map("key." + pending.name, pending.keyCodes);
        map.mAllowRemap = pending.allowRemap;
        newDefaultMapping.emplace_back(map);
    }
}

} // namespace ll::input
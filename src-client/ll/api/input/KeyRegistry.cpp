#include "ll/api/input/KeyRegistry.h"

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
#include <string_view>

namespace ll::input {

struct KeyRegistry::Impl {
    SmallDenseNodeMap<std::string, KeyHandle> keys;
    SmallDenseMap<int, std::string>           keyCodeToName;

    struct PendingKeyMapping {
        std::string      name;
        std::vector<int> keyCodes;
        bool             allowRemap;
    };

    std::vector<PendingKeyMapping> pendingKeyMappings;

    std::recursive_mutex mutex;
};

KeyRegistry::KeyRegistry() : impl(std::make_unique<Impl>()) {
    auto& reg = mod::ModManagerRegistry::getInstance();
    reg.executeOnModDisable([this](std::string_view name) { disableModKeys(name); });
}

KeyRegistry& KeyRegistry::getInstance() {
    static KeyRegistry instance;
    return instance;
}

void KeyRegistry::clear() {
    std::lock_guard lock{impl->mutex};
    impl->keys.clear();
    impl->keyCodeToName.clear();
}

KeyHandle& KeyRegistry::getOrCreateKey(
    std::string_view        name,
    std::vector<int> const& defaultKeyCodes,
    bool                    allowRemap,
    std::weak_ptr<mod::Mod> mod
) {
    std::lock_guard lock{impl->mutex};

    std::string fullName;
    if (auto modPtr = mod.lock()) {
        fullName  = modPtr->getName();
        fullName += '.';
    }
    fullName += name;

    if (impl->keys.contains(fullName)) {
        return impl->keys.at(fullName);
    }

    auto handle = KeyHandle{*this, name, defaultKeyCodes, allowRemap, mod};

    auto& ref = impl->keys.insert_or_assign(fullName, std::move(handle)).first->second;

    for (int keyCode : defaultKeyCodes) {
        impl->keyCodeToName[keyCode] = fullName;
    }

    impl->pendingKeyMappings.push_back({fullName, defaultKeyCodes, allowRemap});

    return ref;
}

bool KeyRegistry::hasKey(std::string_view name) {
    std::lock_guard lock{impl->mutex};

    if (impl->keys.find(name) != impl->keys.end()) {
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

std::vector<std::string> KeyRegistry::getRegisteredKeys() const {
    std::lock_guard          lock{impl->mutex};
    std::vector<std::string> keys;
    keys.reserve(impl->keys.size());

    for (const auto& pair : impl->keys) {
        keys.push_back(pair.first);
    }

    return keys;
}

void KeyRegistry::triggerKeyDownCallback(int keyCode, ::FocusImpact focusImpact, ::IClientInstance& client) {
    std::lock_guard lock{impl->mutex};
    auto            it = impl->keyCodeToName.find(keyCode);
    if (it != impl->keyCodeToName.end()) {
        auto keyIt = impl->keys.find(it->second);
        if (keyIt != impl->keys.end() && keyIt->second.isValid()) {
            keyIt->second.triggerButtonDownHandlers(focusImpact, client);
        }
    }
}

void KeyRegistry::triggerKeyUpCallback(int keyCode, ::FocusImpact focusImpact, ::IClientInstance& client) {
    std::lock_guard lock{impl->mutex};
    auto            it = impl->keyCodeToName.find(keyCode);
    if (it != impl->keyCodeToName.end()) {
        auto keyIt = impl->keys.find(it->second);
        if (keyIt != impl->keys.end() && keyIt->second.isValid()) {
            keyIt->second.triggerButtonUpHandlers(focusImpact, client);
        }
    }
}

void KeyRegistry::disableModKeys(std::string_view modName) {
    std::lock_guard lock{impl->mutex};
    for (auto& [name, handle] : impl->keys) {
        handle.disableModOverloads(modName);
    }
}

void KeyRegistry::registerAllKeysToInputHandler(MinecraftInputHandler& inputHandler) {
    std::lock_guard lock{impl->mutex};

    for (auto& [name, handle] : impl->keys) {
        auto keyCodes = handle.getKeyCodes();
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

void KeyRegistry::registerKeyboardInputs(
    VanillaClientInputMappingFactory& inputs,
    std::string_view                  mappingName,
    KeyboardInputMapping&             keyboardMapping,
    MouseInputMapping&                mouseMapping,
    FocusImpact                       focusImpact
) {
    std::lock_guard lock{impl->mutex};

    for (auto& [name, handle] : impl->keys) {
        if (!handle.isValid()) continue;

        if (!handle.containsInputMappingStack(mappingName)) continue;

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

void KeyRegistry::processPendingKeyMappings(std::vector<::Keymapping>& newDefaultMapping) {
    std::lock_guard lock{impl->mutex};
    for (const auto& pending : impl->pendingKeyMappings) {
        Keymapping map("key." + pending.name, pending.keyCodes);
        map.mAllowRemap = pending.allowRemap;
        newDefaultMapping.emplace_back(map);
    }
}

} // namespace ll::input

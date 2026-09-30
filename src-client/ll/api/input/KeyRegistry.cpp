#include "ll/api/input/KeyRegistry.h"

#include "ll/api/mod/ModManagerRegistry.h"
#include "ll/api/service/TargetedBedrock.h"
#include "mc/client/game/ClientInstance.h"
#include "mc/client/input/ClientInputHandler.h"
#include "mc/client/input/KeyboardRemappingLayout.h"
#include "mc/client/input/MinecraftInputHandler.h"
#include "mc/client/input/VanillaClientInputMappingFactory.h"
#include "mc/deps/input/InputHandler.h"
#include "mc/deps/input/InputMapping.h"
#include "mc/deps/input/KeyboardInputMapping.h"
#include "mc/deps/input/KeyboardKeyBinding.h"
#include "mc/deps/input/MouseButtonBinding.h"
#include "mc/deps/input/MouseInputMapping.h"

#include <memory>
#include <string_view>
#include <unordered_set>
#include <windows.h>

namespace ll::input {

struct KeyRegistry::Impl {
    SmallStringNodeMap<KeyHandle>   keys;
    SmallDenseMap<int, std::string> keyCodeToName;

    struct PendingKeyMapping {
        std::string      name;
        std::vector<int> keyCodes;
        bool             allowRemap;
    };

    // Buttons registered through registerGameplayKeyboardButton /
    // registerInputMappingsKeyboardButton: appended to the matching input mappings on
    // every mapping rebuild, with the handler registered directly with the
    // InputHandler (MinecraftInputHandler::_registerInputHandlers runs before mods
    // enable, so late-registered keys never reach the InputHandler through that path).
    struct MappingButton {
        std::string              name;
        int                      keyCode;
        ::FocusImpact            focusImpact;
        ButtonDownHandler        handler;
        std::vector<std::string> mappingNames; // empty = all "gamePlay*" mappings
    };

    std::vector<PendingKeyMapping>  pendingKeyMappings;
    std::vector<MappingButton>      mappingButtons;
    std::unordered_set<std::string> inputHandlerRegisteredNames;

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

    for (auto const& [fullName, handle] : impl->keys) {
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

    for (auto const& pair : impl->keys) {
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
    for (auto const& pending : impl->pendingKeyMappings) {
        Keymapping map("key." + pending.name, pending.keyCodes, pending.allowRemap, false);
        newDefaultMapping.emplace_back(map);
    }
}

bool KeyRegistry::registerGameplayKeyboardButton(
    std::string       buttonName,
    int               keyCode,
    ButtonDownHandler handler,
    ::FocusImpact     focusImpact
) {
    return registerInputMappingsKeyboardButton(std::move(buttonName), keyCode, {}, std::move(handler), focusImpact);
}

bool KeyRegistry::registerInputMappingsKeyboardButton(
    std::string              buttonName,
    int                      keyCode,
    std::vector<std::string> mappingNames,
    ButtonDownHandler        handler,
    ::FocusImpact            focusImpact
) {
    if (buttonName.empty() || !handler) {
        return false;
    }
    std::lock_guard lock{impl->mutex};
    for (auto const& button : impl->mappingButtons) {
        if (button.name == buttonName) {
            return false;
        }
    }
    impl->mappingButtons.push_back(
        Impl::MappingButton{std::move(buttonName), keyCode, focusImpact, std::move(handler), std::move(mappingNames)}
    );
    return true;
}

bool KeyRegistry::unregisterMappingKeyboardButton(std::string_view buttonName) {
    std::lock_guard lock{impl->mutex};
    return std::erase_if(
               impl->mappingButtons,
               [&](Impl::MappingButton const& button) { return button.name == buttonName; }
           )
         > 0;
}

void KeyRegistry::processMappingButtons(::VanillaClientInputMappingFactory& factory) {
    std::lock_guard lock{impl->mutex};
    if (impl->mappingButtons.empty()) {
        return;
    }

    // 1) Append the key bindings to the matching input mappings (re-applied on every
    //    vanilla template rebuild, since origin() resets the mapping content).
    for (auto& [name, mapping] : *factory.mActiveInputMappings) {
        for (auto const& button : impl->mappingButtons) {
            bool const match = button.mappingNames.empty()
                                 ? name.rfind("gamePlay", 0) == 0
                                 : std::find(button.mappingNames.begin(), button.mappingNames.end(), name)
                                       != button.mappingNames.end();
            if (match) {
                mapping.keyboardMapping->keyBindings->emplace_back(button.name, button.keyCode, button.focusImpact);
            }
        }
    }

    // 2) Register the handlers with the InputHandler so the button events are
    //    dispatched at all (unregistered button ids are silently dropped before
    //    dispatch). ClientInputHandler::mInputHandler is at +0x18.
    auto client = service::getClientInstance();
    if (!client) {
        return;
    }
    auto* clientInput = client->getInput();
    if (!clientInput) {
        return;
    }
    auto* inputHandler = *reinterpret_cast<::InputHandler**>(reinterpret_cast<char*>(clientInput) + 0x18);
    if (!inputHandler) {
        return;
    }
    for (auto const& button : impl->mappingButtons) {
        if (impl->inputHandlerRegisteredNames.insert(button.name).second) {
            inputHandler->registerButtonDownHandler(button.name, button.handler, false);
        }
    }
}

} // namespace ll::input

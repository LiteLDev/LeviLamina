#pragma once

#include <functional>
#include <memory>
#include <string>
#include <string_view>
#include <vector>

#include "ll/api/base/Macro.h"
#include "ll/api/input/KeyHandle.h"
#include "ll/api/mod/NativeMod.h"
#include "mc/client/game/IClientInstance.h"
#include "mc/client/input/Keymapping.h"
#include "mc/client/input/MinecraftInputHandler.h"
#include "mc/client/input/VanillaClientInputMappingFactory.h"
#include "mc/deps/input/enums/FocusImpact.h"

namespace ll::input {

class KeyRegistry {
    friend KeyHandle;
    struct Impl;
    struct Hooks;
    std::unique_ptr<Impl> impl;

    KeyRegistry();

    void disableModKeys(std::string_view modName);

    void triggerKeyDownCallback(int keyCode, ::FocusImpact focusImpact, ::IClientInstance& client);
    void triggerKeyUpCallback(int keyCode, ::FocusImpact focusImpact, ::IClientInstance& client);

    LLAPI void registerAllKeysToInputHandler(class MinecraftInputHandler& inputHandler);

    void registerKeyboardInputs(
        VanillaClientInputMappingFactory& inputs,
        KeyboardInputMapping&             keyboardMapping,
        MouseInputMapping&                mouseMapping,
        FocusImpact                       focusImpact
    );

    void processPendingKeyMappings(std::vector<::Keymapping>& newDefaultMapping);

public:
    using ButtonDownHandler = KeyHandle::ButtonDownHandler;
    using ButtonUpHandler   = KeyHandle::ButtonUpHandler;

    LLNDAPI static KeyRegistry& getInstance();

    void clear();

    LLAPI KeyHandle& getOrCreateKey(
        std::string_view        name,
        std::vector<int> const& defaultKeyCodes,
        bool                    allowRemap = true,
        std::weak_ptr<mod::Mod> mod        = mod::NativeMod::current()
    );

    LLNDAPI bool hasKey(std::string_view name);

    LLNDAPI std::vector<std::string> getRegisteredKeys() const;
};

} // namespace ll::input

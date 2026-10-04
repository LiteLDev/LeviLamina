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

class InputHandler;

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

    void registerKeyHandlers(::InputHandler& inputHandler);

    void registerKeyboardInputs(
        VanillaClientInputMappingFactory& inputs,
        std::string_view                  mappingName,
        KeyboardInputMapping&             keyboardMapping,
        MouseInputMapping&                mouseMapping,
        FocusImpact                       focusImpact
    );

    void processPendingKeyMappings(std::vector<::Keymapping>& newDefaultMapping);

    void clear();

public:
    using ButtonDownHandler = KeyHandle::ButtonDownHandler;
    using ButtonUpHandler   = KeyHandle::ButtonUpHandler;

    LLNDAPI static KeyRegistry& getInstance();

    LLAPI KeyHandle& getOrCreateKey(
        std::string_view        name,
        std::vector<int> const& defaultKeyCodes,
        bool                    allowRemap = true,
        std::weak_ptr<mod::Mod> mod        = mod::NativeMod::current()
    );

    LLNDAPI bool hasKey(std::string_view name);

    LLNDAPI std::vector<std::string> getRegisteredKeys() const;

    /// Registers a keyboard button into all gameplay input mappings (`gamePlay*`).
    /// `keyCode` is a virtual-key code; negative values denote mouse buttons as stored by
    /// the remapping layout (raw mouse button - 100, e.g. -99 for the left button) and are
    /// routed into the mouse input mapping.
    LLAPI bool registerGameplayKeyboardButton(
        std::string       buttonName,
        int               keyCode,
        ButtonDownHandler handler,
        ::FocusImpact     focusImpact = ::FocusImpact::Neutral
    );

    /// Same as registerGameplayKeyboardButton, but binds into an explicit list of input
    /// mapping stacks (empty = all `gamePlay*` mappings).
    LLAPI bool registerInputMappingsKeyboardButton(
        std::string              buttonName,
        int                      keyCode,
        std::vector<std::string> mappingNames,
        ButtonDownHandler        handler,
        ::FocusImpact            focusImpact = ::FocusImpact::Neutral
    );

    LLAPI bool unregisterMappingKeyboardButton(std::string_view buttonName);

private:
    void processMappingButtons(::VanillaClientInputMappingFactory& factory);
};

} // namespace ll::input

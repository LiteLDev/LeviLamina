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

    /// Registers an abstract button produced by a keyboard key in every gameplay input
    /// mapping (all "gamePlay*" stacks: normal, creative flight, swimming, boating,
    /// spectator, ...). The button event fires in any gameplay state but goes inert
    /// while a menu screen is active (the gameplay mappings are not on the input
    /// stack then) — the same gating vanilla gameplay keybindings get.
    /// The handler is registered with the InputHandler directly and is invoked on
    /// button down. Use this for gameplay actions like "open my screen".
    /// @param buttonName  Abstract button name; use a mod-prefixed name.
    /// @param keyCode     Keyboard key code (Windows virtual key code).
    /// @param handler     Called on button down in gameplay.
    /// @param focusImpact Focus action on press. Default: FocusImpact::Neutral.
    /// @return false if the name is empty, the handler is empty, or the name is taken.
    LLAPI bool registerGameplayKeyboardButton(
        std::string       buttonName,
        int               keyCode,
        ButtonDownHandler handler,
        ::FocusImpact     focusImpact = ::FocusImpact::Neutral
    );

    /// Registers an abstract button produced by a keyboard key in the given input
    /// mappings only (e.g. {"gamePlayFlying"}, {"screen"}, {"gamePlayNormal",
    /// "gamePlayFlying"}). Semantics are identical to registerGameplayKeyboardButton
    /// but scoped to the named mappings instead of all gameplay mappings.
    /// @param mappingNames Input mapping stack names (see docs/design/input_mappings.md).
    /// @return false if the name is empty, the handler is empty, mappingNames is empty,
    ///         or the name is taken.
    LLAPI bool registerInputMappingsKeyboardButton(
        std::string              buttonName,
        int                      keyCode,
        std::vector<std::string> mappingNames,
        ButtonDownHandler        handler,
        ::FocusImpact            focusImpact = ::FocusImpact::Neutral
    );

    /// Removes a button registered with registerGameplayKeyboardButton() or
    /// registerInputMappingsKeyboardButton(). Takes effect on the next input mapping
    /// rebuild.
    /// @return true if the button existed and was removed.
    LLAPI bool unregisterMappingKeyboardButton(std::string_view buttonName);

private:
    void processMappingButtons(::VanillaClientInputMappingFactory& factory);
};

} // namespace ll::input

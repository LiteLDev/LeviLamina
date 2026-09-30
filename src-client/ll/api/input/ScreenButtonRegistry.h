#pragma once

#include "ll/api/base/Macro.h"

#include <memory>
#include <string>
#include <string_view>

#include "mc/deps/input/enums/FocusImpact.h"

#include <functional>

class IClientInstance;

class VanillaClientInputMappingFactory;
class MinecraftInputHandler;

namespace ll::input {

/// Registry for custom abstract UI buttons produced by physical inputs while a UI
/// screen is active, making them usable as "from_button_id" in JSON UI button_mappings.
/// Vanilla screen buttons ("button.menu_ok", "button.inventory_left" (wheel up), ...)
/// are registered the same way, inside VanillaClientInputMappingFactory's screen
/// mapping builders; this registry appends custom bindings through the same path.
///
/// Bindings are re-applied automatically whenever the game rebuilds the screen input
/// mappings (on every screen push), and — like vanilla screen buttons — the button
/// events fire in every screen. For gameplay-context buttons with a direct callback,
/// use `ll::input::KeyRegistry::registerGameplayKeyboardButton`.
class ScreenButtonRegistry {
    struct Impl;
    std::unique_ptr<Impl> impl;

    ScreenButtonRegistry();

public:
    ScreenButtonRegistry(ScreenButtonRegistry const&)            = delete;
    ScreenButtonRegistry& operator=(ScreenButtonRegistry const&) = delete;
    LLAPI ~ScreenButtonRegistry();

    LLNDAPI static ScreenButtonRegistry& getInstance();

    /// Internal: hook bodies (installed lazily on first registration) call these to
    /// append the registered bindings to the live "screen" input mapping after vanilla
    /// rebuilds the mapping templates, and to register the button names with the
    /// InputHandler so their events are dispatched to screens at all.
    void appendToScreenMapping(::VanillaClientInputMappingFactory& factory);
    void registerMenuButtons();

    /// Registers an abstract UI button produced by a keyboard key.
    /// @param buttonName  Abstract button name; use a mod-prefixed name to avoid
    ///                    colliding with vanilla buttons ("button.menu_*", ...).
    /// @param keyCode     Keyboard key code (Windows virtual key code, e.g. 'G' = 0x47).
    /// @param focusImpact Focus action on press. Default: FocusImpact::Neutral.
    /// @return false if the name is empty or already registered.
    LLAPI bool
    registerKeyboardButton(std::string buttonName, int keyCode, ::FocusImpact focusImpact = ::FocusImpact::Neutral);

    /// Removes a keyboard button previously registered with registerKeyboardButton().
    /// Takes effect on the next screen input mapping rebuild.
    /// @return true if the button existed and was removed.
    LLAPI bool unregisterKeyboardButton(std::string_view buttonName);

    /// Registers abstract UI buttons produced by the mouse wheel (vanilla registers
    /// "button.inventory_left"/"button.inventory_right" for the wheel the same way).
    /// @param wheelUpButtonName   Abstract button fired on wheel-up.
    /// @param wheelDownButtonName Abstract button fired on wheel-down.
    /// @return false if either name is empty or already registered.
    LLAPI bool registerMouseWheelButton(std::string wheelUpButtonName, std::string wheelDownButtonName);

    /// Removes wheel buttons previously registered with registerMouseWheelButton().
    /// Takes effect on the next screen input mapping rebuild.
    /// @return true if both buttons existed and were removed.
    LLAPI bool unregisterMouseWheelButton(std::string_view wheelUpButtonName, std::string_view wheelDownButtonName);
};

} // namespace ll::input

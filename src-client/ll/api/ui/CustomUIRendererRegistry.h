#pragma once

#include "ll/api/Expected.h"
#include "ll/api/base/Macro.h"

#include <functional>
#include <memory>
#include <string>
#include <string_view>

class UICustomRenderer;

namespace ll::ui {

/// Registry for custom JSON UI renderers.
///
/// Vanilla JSON UI controls of "type": "custom" select their C++ renderer through the
/// "renderer" property, but the set of recognized names is hardcoded in the game. This
/// registry patches in additional names after control creation, allowing mods to bind
/// their own UICustomRenderer implementations to custom controls in any JSON UI scene
/// (HUD, inventory, crafting, etc.).
///
/// Renderer instances are held per control (same semantics as the vanilla clone()
/// pattern): each control that uses a registered name obtains its own instance through
/// the registered factory.
class CustomUIRendererRegistry {
public:
    /// Factory producing a new renderer instance per custom control.
    /// Returning nullptr aborts the injection for that control.
    using Factory = std::function<std::shared_ptr<UICustomRenderer>()>;

    CustomUIRendererRegistry() = delete;

    /// Registers a renderer name (the JSON UI "renderer" property value).
    /// @param name    Renderer name, e.g. "coral_minimap_renderer". Use a mod-prefixed
    ///                name; names colliding with vanilla renderers ("heart_renderer",
    ///                etc.) are rejected to keep vanilla behavior intact.
    /// @param factory Factory creating renderer instances; must not be empty.
    /// @return Error if the name is empty, the factory is empty, the name collides with
    ///         a vanilla renderer, or the name is already registered.
    /// @note Thread-safe. The internal hook is installed lazily on first registration.
    /// @note Already-created controls are unaffected; injection applies to controls
    ///       (re)created afterwards (scene reloads re-create control trees and are
    ///       therefore re-injected automatically).
    LLNDAPI static Expected<> registerRenderer(std::string name, Factory factory);

    /// Registers a prototype renderer, equivalent to
    /// registerRenderer(name, [p = std::move(prototype)] { return p->clone(); }).
    LLNDAPI static Expected<> registerRenderer(std::string name, std::shared_ptr<UICustomRenderer> prototype);

    /// Unregisters a renderer name. Renderer instances already attached to controls
    /// are unaffected.
    /// @return true if the name existed and was removed.
    LLAPI static bool unregisterRenderer(std::string_view name);

    /// @return true if the name is currently registered.
    LLNDAPI static bool isRegistered(std::string_view name);
};

} // namespace ll::ui

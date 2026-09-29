#pragma once

#include "ll/api/base/Macro.h"

#include <memory>
#include <string>
#include <vector>

class UIScene;
class UIPropertyBag;

namespace ll::ui {

/// Base class for modal screens: owns the hosting lifecycle of a screen (creating the
/// scene and pushing it onto the scene stack). It contains no rendering code and
/// creates no controls — the screen's content is entirely defined by the subclass's
/// published JSON UI definition (which may freely include custom controls with
/// renderers registered through CustomUIRendererRegistry, e.g. an ImGui bridge).
///
/// Once pushed, input routing (top-of-stack capture), the focus system, the gamepad
/// virtual cursor and mouse release all take effect automatically, driven by the scene
/// stack and the JSON screen properties (is_showing_menu, should_steal_mouse,
/// absorbs_input, button_mappings, ...).
///
/// The standard exit path needs no code: map "button.menu_cancel" to "button.menu_exit"
/// (global) in the screen's JSON button_mappings and the framework pops the screen.
class ModalScreen {
public:
    LLAPI ModalScreen();
    ModalScreen(ModalScreen const&)            = delete;
    ModalScreen& operator=(ModalScreen const&) = delete;
    LLAPI virtual ~ModalScreen();

    /// Namespaced JSON UI screen definition name (e.g. "coral_map.world_map"), published
    /// by the subclass as a resource pack.
    virtual std::string getScreenName() const = 0;

    /// Button names the subclass wants to receive through onButtonEvent() (the JSON
    /// "to_button_id" names, e.g. "button.world_map_zoom_in"). Default: none.
    LLAPI virtual std::vector<std::string> getHandledButtonIds() const;

    /// Called after the screen is opened (ScreenController::onOpen). Default: no-op.
    LLAPI virtual void onOpen();
    /// Called when the screen is closed by any path (Esc, close(), scene destruction).
    /// Default: no-op.
    LLAPI virtual void onClose();
    /// Called every tick while the screen is open. Default: no-op.
    LLAPI virtual void onTick();
    /// Called for buttons declared in getHandledButtonIds().
    /// @return true to consume the event, false to let the framework continue.
    LLAPI virtual bool onButtonEvent(std::string const& buttonId, UIPropertyBag* propertyBag);

    /// Opens the screen (creates the scene and pushes it onto the scene stack).
    /// No-op when already open. Must be called on the client thread
    /// (ll::thread::ClientThreadExecutor can be used to switch).
    LLAPI void open();
    /// Closes the screen (pops its scene). No-op when not open.
    LLAPI void close();
    /// @return true while the screen's scene is alive on the stack.
    LLNDAPI bool isOpen() const;
    /// @return The screen's scene, or nullptr when not open.
    LLNDAPI UIScene* scene() const;

private:
    class Controller;
    std::shared_ptr<Controller> mController;
    std::weak_ptr<UIScene>      mScene;
    std::shared_ptr<bool>       mAliveToken;
};

} // namespace ll::ui

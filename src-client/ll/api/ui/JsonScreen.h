#pragma once

#include "ll/api/base/Macro.h"

#include <memory>
#include <string>
#include <vector>

class UIScene;
class UIPropertyBag;

namespace ll::ui {

/// Base class for screens defined by JSON UI: owns the hosting lifecycle of a screen
/// (creating the scene and pushing it onto the scene stack). It contains no rendering
/// code and creates no controls — the screen's content is entirely defined by the
/// subclass's published JSON UI definition (which may freely include custom controls
/// with renderers registered through CustomUIRendererRegistry, e.g. an ImGui bridge).
///
/// The class itself is modality-agnostic: behavior is selected by the subclass's JSON
/// screen properties. A modal container-style screen uses is_modal/is_showing_menu/
/// absorbs_input; a chat-like non-modal screen drops them; a HUD-like passive scene
/// additionally sets render_game_behind. Once pushed, input routing (top-of-stack
/// capture), the focus system, the gamepad virtual cursor and mouse grab/release all
/// take effect automatically, driven by the scene stack and those JSON properties
/// (is_showing_menu, should_steal_mouse, absorbs_input, button_mappings, ...).
///
/// Exit path: the controller overrides ScreenController::tryExit() — the virtual the
/// framework routes button.menu_exit into — popping exactly this scene and consuming the
/// event. The vanilla menu_cancel -> button.menu_exit JSON mapping therefore works
/// unchanged. (The base-class tryExit would also pop, but without consuming the event the
/// default back navigation fires too and pops a second scene.) button.menu_cancel mapped
/// to itself is likewise handled by a default handler. To take over Esc entirely, list
/// "button.menu_cancel" in getHandledButtonIds() and handle it in onButtonEvent().
class JsonScreen {
public:
    LLAPI JsonScreen();
    JsonScreen(JsonScreen const&)            = delete;
    JsonScreen& operator=(JsonScreen const&) = delete;
    LLAPI virtual ~JsonScreen();

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
    bool                        mCloseRequested = false;
};

} // namespace ll::ui

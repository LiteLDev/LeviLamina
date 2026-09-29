#pragma once

#include "ll/api/base/Macro.h"

#include <memory>
#include <string>
#include <string_view>

class MinecraftUICustomRenderer;
class UIControl;
class UIScene;

namespace ll::ui {

/// Base class for non-modal overlay elements: attaches a custom control to the control
/// tree of an existing scene (the HUD by default), following the host scene's
/// visibility/alpha propagation and rebuild lifecycle.
///
/// The base class contains no rendering code and creates no preset controls: layout is
/// defined by the subclass's JSON UI definition, rendering by the subclass's
/// MinecraftUICustomRenderer implementation (e.g. an ImGui bridge).
///
/// Lifecycle is automatic: when the host scene is (re)created the control is
/// (re)injected; when the host's control tree is rebuilt the registry re-attaches the
/// renderer; HUD hide (F1) / HUD opacity propagate through mPropagatedAlpha.
class OverlayElement {
public:
    LLAPI OverlayElement();
    OverlayElement(OverlayElement const&)            = delete;
    OverlayElement& operator=(OverlayElement const&) = delete;
    LLAPI virtual ~OverlayElement();

    /// Renderer name (the JSON "renderer" property value, e.g. "coral_minimap_renderer").
    virtual std::string getRendererName() const = 0;
    /// Namespaced control definition to inject (from the subclass's resource pack, e.g.
    /// "coral_map.minimap"); the definition references getRendererName().
    virtual std::string getControlDefName() const = 0;
    /// Creates the renderer instance. Each host control receives its own instance.
    virtual std::shared_ptr<MinecraftUICustomRenderer> createRenderer() = 0;

    /// Host scene name. Default: "hud.hud_screen".
    LLAPI virtual std::string_view getTargetSceneName() const;
    /// Name of the parent control inside the host scene (e.g. "not_centered_gui_elements").
    virtual std::string_view getTargetParentControlName() const = 0;

    /// Called when the control is attached to / detached from the control tree
    /// (attachment re-happens on host scene rebuilds). Default: no-op.
    LLAPI virtual void onAttach(UIControl& control);
    LLAPI virtual void onDetach();

    /// Enables the element: registers the renderer, watches for host scene creation and
    /// injects the control. Idempotent. Must be called on the client UI thread.
    LLAPI void enable();
    /// Disables the element: detaches the control and unregisters the renderer.
    /// Idempotent.
    LLAPI void disable();
    /// @return true while the control is attached to a live control tree.
    LLNDAPI bool isAttached() const;

private:
    struct Impl;
    std::unique_ptr<Impl> mImpl;

    void attach(UIScene& scene);
    void tryAttachFrame(UIScene& scene);

    friend struct UISceneFrameUpdateHook;
};

} // namespace ll::ui

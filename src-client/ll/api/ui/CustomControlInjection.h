#pragma once

#include "ll/api/Expected.h"
#include "ll/api/base/Macro.h"

#include <memory>
#include <string>
#include <string_view>

class UIControl;
class UIScene;

namespace ll::ui {

/// Instantiates the JSON UI definition defName as a control tree and attaches it below
/// the control named parentControlName inside scene's control tree.
///
/// defName must come from the caller's own resource pack (namespaced, e.g.
/// "coral_map.minimap"); no vanilla JSON is modified. Combined with
/// CustomUIRendererRegistry this enables fully custom HUD/panel elements whose layout
/// (position, size, anchors, visibility bindings) is declared in JSON.
/// @param scene             Target scene (e.g. from UISceneCreatedEvent::scene()).
/// @param parentControlName Name of the parent control; the first match in a
///                          depth-first search from the root control is used.
/// @param defName           Namespaced UI definition to instantiate.
/// @return The newly created root control, or an error if the scene has no visual
///         tree, the parent control does not exist, or creation failed.
/// @note Must be called on the client UI thread.
[[nodiscard]] LLAPI Expected<std::shared_ptr<UIControl>>
                    attachCustomControl(UIScene& scene, std::string_view parentControlName, std::string const& defName);

} // namespace ll::ui

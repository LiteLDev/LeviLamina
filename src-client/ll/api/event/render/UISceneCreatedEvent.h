#pragma once

#include "ll/api/event/render/RenderEvent.h"

#include <memory>
#include <string>

class UIScene;

namespace ll::event::inline render {

/// Published after any JSON UI scene has been created (internally hooks
/// SceneFactory::createUIScene, so every scene — HUD, inventory, crafting, etc. —
/// passes through). Scenes served from the cache are not re-published, but scene
/// rebuilds (resource pack reload, resolution change) create the scene again and
/// therefore re-publish.
///
/// Typical use: filter by getScreenName() (e.g. "hud.hud_screen") and inject custom
/// controls into the scene's control tree.
class UISceneCreatedEvent final : public RenderEvent {
    std::shared_ptr<UIScene> mScene;
    std::string              mScreenName;

public:
    explicit UISceneCreatedEvent(std::shared_ptr<UIScene> scene, std::string screenName);

    LLAPI void serialize(CompoundTag&) const override;

    /// Screen name (the namespaced JSON UI name, e.g. "hud.hud_screen").
    LLNDAPI std::string const& getScreenName() const;

    /// The newly created scene.
    LLNDAPI std::shared_ptr<UIScene> const& scene() const;

    /// The newly created scene (kept for symmetry with filtered iteration helpers).
    LLNDAPI UIScene* tryGetUIScene() const;
};

} // namespace ll::event::inline render

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"

// auto generated forward declare list
// clang-format off
class AABB;
class ActorRenderData;
class ActorRenderDispatcher;
class HashedString;
class MatrixStack;
class MinecraftGameplayGraphicsResources;
struct OffscreenCaptureDescription;
// clang-format on

class IPaperDollRenderContext {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IPaperDollRenderContext() = default;

    virtual float getDebugSkinSpeedMultiplier() = 0;

    virtual bool shouldDisableRenderMainMenuPaperDollAnimation() = 0;

    virtual ::MatrixStack& getWorldMatrixStack() = 0;

    virtual float getLegacyGuiOffsetY(float screenScale) = 0;

    virtual void renderGui(
        ::HashedString const&                rendererName,
        ::ActorRenderData&                   data,
        ::OffscreenCaptureDescription const* capture
    ) = 0;

    virtual ::std::optional<::std::string> getCoCoEntityIdentifier(::std::string const& pieceId) = 0;

    virtual ::ActorRenderDispatcher* getActorRenderDispatcher() = 0;

    virtual ::MinecraftGameplayGraphicsResources& getGameplayGraphicsResources() = 0;

    virtual float getLastTimestamp() = 0;

    virtual ::glm::vec2 getMouseMove(::glm::vec2 const& ownerPos) = 0;

    virtual ::SubClientId getClientSubId() = 0;

    virtual ::std::optional<::AABB> getDefaultPoseBounds(::HashedString const& rendererName) = 0;
    // NOLINTEND
};

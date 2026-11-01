#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/controls/renderers/IPaperDollRenderContext.h"
#include "mc/common/SubClientId.h"

// auto generated forward declare list
// clang-format off
class AABB;
class ActorRenderData;
class ActorRenderDispatcher;
class BaseActorRenderContext;
class HashedString;
class MatrixStack;
class MinecraftGameplayGraphicsResources;
struct OffscreenCaptureDescription;
// clang-format on

class PaperDollBaseActorRenderContext : public ::IPaperDollRenderContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::BaseActorRenderContext&> mContext;
    // NOLINTEND

public:
    // prevent constructor by default
    PaperDollBaseActorRenderContext& operator=(PaperDollBaseActorRenderContext const&);
    PaperDollBaseActorRenderContext(PaperDollBaseActorRenderContext const&);
    PaperDollBaseActorRenderContext();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual float getDebugSkinSpeedMultiplier() /*override*/;

    virtual bool shouldDisableRenderMainMenuPaperDollAnimation() /*override*/;

    virtual ::MatrixStack& getWorldMatrixStack() /*override*/;

    virtual float getLegacyGuiOffsetY(float screenScale) /*override*/;

    virtual void renderGui(
        ::HashedString const&                rendererName,
        ::ActorRenderData&                   data,
        ::OffscreenCaptureDescription const* capture
    ) /*override*/;

    virtual ::std::optional<::std::string> getCoCoEntityIdentifier(::std::string const& pieceId) /*override*/;

    virtual ::ActorRenderDispatcher* getActorRenderDispatcher() /*override*/;

    virtual ::MinecraftGameplayGraphicsResources& getGameplayGraphicsResources() /*override*/;

    virtual float getLastTimestamp() /*override*/;

    virtual ::glm::vec2 getMouseMove(::glm::vec2 const& ownerPos) /*override*/;

    virtual ::SubClientId getClientSubId() /*override*/;

    virtual ::std::optional<::AABB> getDefaultPoseBounds(::HashedString const& rendererName) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI float $getDebugSkinSpeedMultiplier();

    MCNAPI bool $shouldDisableRenderMainMenuPaperDollAnimation();

    MCNAPI ::MatrixStack& $getWorldMatrixStack();

    MCNAPI float $getLegacyGuiOffsetY(float screenScale);

    MCNAPI void $renderGui(
        ::HashedString const&                rendererName,
        ::ActorRenderData&                   data,
        ::OffscreenCaptureDescription const* capture
    );

    MCNAPI ::std::optional<::std::string> $getCoCoEntityIdentifier(::std::string const& pieceId);

    MCNAPI ::ActorRenderDispatcher* $getActorRenderDispatcher();

    MCNAPI ::MinecraftGameplayGraphicsResources& $getGameplayGraphicsResources();

    MCNAPI float $getLastTimestamp();

    MCNAPI ::glm::vec2 $getMouseMove(::glm::vec2 const& ownerPos);

    MCNAPI ::SubClientId $getClientSubId();

    MCNAPI ::std::optional<::AABB> $getDefaultPoseBounds(::HashedString const& rendererName);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

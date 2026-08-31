#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/controls/renderers/IPaperDollRenderContext.h"
#include "mc/common/SubClientId.h"

// auto generated forward declare list
// clang-format off
class ActorRenderData;
class BaseActorRenderContext;
class HashedString;
class MatrixStack;
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

    virtual float getInvGuiScale() /*override*/;

    virtual void renderGui(
        ::HashedString const&                rendererName,
        ::ActorRenderData&                   data,
        ::OffscreenCaptureDescription const* capture
    ) /*override*/;

    virtual float getLastTimestamp() /*override*/;

    virtual ::glm::vec2 getMouseMove(::glm::vec2 const& ownerPos) /*override*/;

    virtual ::SubClientId getClientSubId() /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI float $getDebugSkinSpeedMultiplier();

    MCFOLD bool $shouldDisableRenderMainMenuPaperDollAnimation();

    MCAPI ::MatrixStack& $getWorldMatrixStack();

    MCAPI float $getInvGuiScale();

    MCAPI void $renderGui(
        ::HashedString const&                rendererName,
        ::ActorRenderData&                   data,
        ::OffscreenCaptureDescription const* capture
    );

    MCAPI float $getLastTimestamp();

    MCAPI ::glm::vec2 $getMouseMove(::glm::vec2 const& ownerPos);

    MCAPI ::SubClientId $getClientSubId();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

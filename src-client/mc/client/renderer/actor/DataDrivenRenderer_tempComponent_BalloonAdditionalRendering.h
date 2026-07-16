#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/actor/DataDrivenRenderer_tempComponent.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class ActorRenderData;
class BaseActorRenderContext;
class RenderParams;
// clang-format on

class DataDrivenRenderer_tempComponent_BalloonAdditionalRendering : public ::DataDrivenRenderer_tempComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk912e19;
    ::ll::UntypedStorage<8, 16> mUnk13eb80;
    ::ll::UntypedStorage<8, 32> mUnkb2b3ff;
    // NOLINTEND

public:
    // prevent constructor by default
    DataDrivenRenderer_tempComponent_BalloonAdditionalRendering&
    operator=(DataDrivenRenderer_tempComponent_BalloonAdditionalRendering const&);
    DataDrivenRenderer_tempComponent_BalloonAdditionalRendering(
        DataDrivenRenderer_tempComponent_BalloonAdditionalRendering const&
    );
    DataDrivenRenderer_tempComponent_BalloonAdditionalRendering();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void render(::BaseActorRenderContext&, ::ActorRenderData&, ::RenderParams&) /*override*/;

    virtual void renderEffects(::BaseActorRenderContext&, ::ActorRenderData&, ::RenderParams&) /*override*/;

    virtual ::AABB getRenderBounds(::Actor const&) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

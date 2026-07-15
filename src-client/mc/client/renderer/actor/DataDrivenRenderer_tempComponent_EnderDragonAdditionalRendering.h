#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/actor/DataDrivenRenderer_tempComponent.h"

// auto generated forward declare list
// clang-format off
class ActorRenderData;
class BaseActorRenderContext;
class RenderParams;
// clang-format on

class DataDrivenRenderer_tempComponent_EnderDragonAdditionalRendering : public ::DataDrivenRenderer_tempComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk25a25b;
    ::ll::UntypedStorage<4, 4>  mUnk92e31d;
    ::ll::UntypedStorage<8, 16> mUnk6b8680;
    ::ll::UntypedStorage<8, 32> mUnkb7f72d;
    ::ll::UntypedStorage<8, 16> mUnk4234a6;
    ::ll::UntypedStorage<8, 16> mUnka54d27;
    // NOLINTEND

public:
    // prevent constructor by default
    DataDrivenRenderer_tempComponent_EnderDragonAdditionalRendering&
    operator=(DataDrivenRenderer_tempComponent_EnderDragonAdditionalRendering const&);
    DataDrivenRenderer_tempComponent_EnderDragonAdditionalRendering(
        DataDrivenRenderer_tempComponent_EnderDragonAdditionalRendering const&
    );
    DataDrivenRenderer_tempComponent_EnderDragonAdditionalRendering();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void preRender(::BaseActorRenderContext&, ::ActorRenderData&, ::RenderParams&) /*override*/;

    virtual void render(::BaseActorRenderContext&, ::ActorRenderData&, ::RenderParams&) /*override*/;

    virtual void renderEffects(::BaseActorRenderContext&, ::ActorRenderData&, ::RenderParams&) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

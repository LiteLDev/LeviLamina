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

class DataDrivenRenderer_tempComponent_MinecartAdditionalRendering : public ::DataDrivenRenderer_tempComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnka8184d;
    ::ll::UntypedStorage<8, 8>  mUnkdc2c00;
    ::ll::UntypedStorage<8, 16> mUnke4299a;
    ::ll::UntypedStorage<8, 32> mUnkc1daf7;
    // NOLINTEND

public:
    // prevent constructor by default
    DataDrivenRenderer_tempComponent_MinecartAdditionalRendering&
    operator=(DataDrivenRenderer_tempComponent_MinecartAdditionalRendering const&);
    DataDrivenRenderer_tempComponent_MinecartAdditionalRendering(
        DataDrivenRenderer_tempComponent_MinecartAdditionalRendering const&
    );
    DataDrivenRenderer_tempComponent_MinecartAdditionalRendering();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void preRender(::BaseActorRenderContext&, ::ActorRenderData&, ::RenderParams&) /*override*/;

    virtual void render(::BaseActorRenderContext&, ::ActorRenderData&, ::RenderParams&) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

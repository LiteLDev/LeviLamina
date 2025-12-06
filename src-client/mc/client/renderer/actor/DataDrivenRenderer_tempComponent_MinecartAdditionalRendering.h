#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/actor/DataDrivenRenderer_tempComponent.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BaseActorRenderContext;
class Block;
class RenderParams;
struct ActorRenderData;
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
    // vIndex: 1
    virtual void preRender(
        ::BaseActorRenderContext& renderContext,
        ::ActorRenderData&        actorRenderData,
        ::RenderParams&           renderParams
    ) /*override*/;

    // vIndex: 2
    virtual void render(
        ::BaseActorRenderContext& renderContext,
        ::ActorRenderData&        actorRenderData,
        ::RenderParams&           renderParams
    ) /*override*/;

    // vIndex: 0
    virtual ~DataDrivenRenderer_tempComponent_MinecartAdditionalRendering() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void renderMinecartContents(
        ::BaseActorRenderContext& renderContext,
        ::Actor&                  cart,
        float                     actorFrameAlpha,
        ::Block const&            block
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $preRender(
        ::BaseActorRenderContext& renderContext,
        ::ActorRenderData&        actorRenderData,
        ::RenderParams&           renderParams
    );

    MCNAPI void
    $render(::BaseActorRenderContext& renderContext, ::ActorRenderData& actorRenderData, ::RenderParams& renderParams);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

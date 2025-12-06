#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/actor/DataDrivenRenderer_tempComponent.h"

// auto generated forward declare list
// clang-format off
class BaseActorRenderContext;
class DataDrivenRenderer;
class RenderParams;
struct ActorRenderData;
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
    // vIndex: 1
    virtual void preRender(
        ::BaseActorRenderContext& renderContext,
        ::ActorRenderData&        actorRenderData,
        ::RenderParams&           renderParams
    ) /*override*/;

    // vIndex: 2
    virtual void render(::BaseActorRenderContext&, ::ActorRenderData&, ::RenderParams&) /*override*/;

    // vIndex: 3
    virtual void renderEffects(
        ::BaseActorRenderContext& renderContext,
        ::ActorRenderData&        actorRenderData,
        ::RenderParams&           renderParams
    ) /*override*/;

    // vIndex: 0
    virtual ~DataDrivenRenderer_tempComponent_EnderDragonAdditionalRendering() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit DataDrivenRenderer_tempComponent_EnderDragonAdditionalRendering(
        ::std::shared_ptr<::DataDrivenRenderer> renderer
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::shared_ptr<::DataDrivenRenderer> renderer);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $preRender(
        ::BaseActorRenderContext& renderContext,
        ::ActorRenderData&        actorRenderData,
        ::RenderParams&           renderParams
    );

    MCNAPI void $render(::BaseActorRenderContext&, ::ActorRenderData&, ::RenderParams&);

    MCNAPI void $renderEffects(
        ::BaseActorRenderContext& renderContext,
        ::ActorRenderData&        actorRenderData,
        ::RenderParams&           renderParams
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

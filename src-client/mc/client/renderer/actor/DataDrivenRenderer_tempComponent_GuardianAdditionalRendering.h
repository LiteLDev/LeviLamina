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

class DataDrivenRenderer_tempComponent_GuardianAdditionalRendering : public ::DataDrivenRenderer_tempComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk5801c0;
    ::ll::UntypedStorage<1, 1>  mUnk69ac9d;
    ::ll::UntypedStorage<8, 8>  mUnk2dda28;
    ::ll::UntypedStorage<8, 8>  mUnk113049;
    ::ll::UntypedStorage<8, 32> mUnk57b43a;
    ::ll::UntypedStorage<8, 32> mUnk1e9457;
    ::ll::UntypedStorage<8, 16> mUnk6fa7d7;
    // NOLINTEND

public:
    // prevent constructor by default
    DataDrivenRenderer_tempComponent_GuardianAdditionalRendering&
    operator=(DataDrivenRenderer_tempComponent_GuardianAdditionalRendering const&);
    DataDrivenRenderer_tempComponent_GuardianAdditionalRendering(
        DataDrivenRenderer_tempComponent_GuardianAdditionalRendering const&
    );
    DataDrivenRenderer_tempComponent_GuardianAdditionalRendering();

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

    // vIndex: 0
    virtual ~DataDrivenRenderer_tempComponent_GuardianAdditionalRendering() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit DataDrivenRenderer_tempComponent_GuardianAdditionalRendering(
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
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

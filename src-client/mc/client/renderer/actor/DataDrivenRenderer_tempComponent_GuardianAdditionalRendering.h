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

class DataDrivenRenderer_tempComponent_GuardianAdditionalRendering : public ::DataDrivenRenderer_tempComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk5801c0;
    ::ll::UntypedStorage<1, 1>  mUnk69ac9d;
    ::ll::UntypedStorage<8, 8>  mUnkbe28c9;
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
    virtual void preRender(::BaseActorRenderContext&, ::ActorRenderData&, ::RenderParams&) /*override*/;

    virtual void render(::BaseActorRenderContext&, ::ActorRenderData&, ::RenderParams&) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

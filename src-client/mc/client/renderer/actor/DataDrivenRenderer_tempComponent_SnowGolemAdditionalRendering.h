#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/actor/DataDrivenRenderer_tempComponent.h"
#include "mc/client/renderer/actor/V2TempComponentRequirements.h"

// auto generated forward declare list
// clang-format off
class BaseActorRenderContext;
class RenderParams;
struct ActorRenderData;
// clang-format on

class DataDrivenRenderer_tempComponent_SnowGolemAdditionalRendering : public ::DataDrivenRenderer_tempComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16>  mUnk761f9d;
    ::ll::UntypedStorage<8, 528> mUnkbe2fcc;
    ::ll::UntypedStorage<8, 8>   mUnkda6eb3;
    ::ll::UntypedStorage<4, 64>  mUnkd5039e;
    // NOLINTEND

public:
    // prevent constructor by default
    DataDrivenRenderer_tempComponent_SnowGolemAdditionalRendering&
    operator=(DataDrivenRenderer_tempComponent_SnowGolemAdditionalRendering const&);
    DataDrivenRenderer_tempComponent_SnowGolemAdditionalRendering(
        DataDrivenRenderer_tempComponent_SnowGolemAdditionalRendering const&
    );
    DataDrivenRenderer_tempComponent_SnowGolemAdditionalRendering();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 5
    virtual ::V2TempComponentRequirements getV2Requirements() const /*override*/;

    // vIndex: 2
    virtual void
    render(::BaseActorRenderContext& renderContext, ::ActorRenderData& actorRenderData, ::RenderParams&) /*override*/;

    // vIndex: 0
    virtual ~DataDrivenRenderer_tempComponent_SnowGolemAdditionalRendering() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::V2TempComponentRequirements $getV2Requirements() const;

    MCNAPI void $render(::BaseActorRenderContext& renderContext, ::ActorRenderData& actorRenderData, ::RenderParams&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

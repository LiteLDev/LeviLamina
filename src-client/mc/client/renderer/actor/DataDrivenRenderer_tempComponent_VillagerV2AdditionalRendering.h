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

class DataDrivenRenderer_tempComponent_VillagerV2AdditionalRendering : public ::DataDrivenRenderer_tempComponent {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 5
    virtual ::V2TempComponentRequirements getV2Requirements() const /*override*/;

    // vIndex: 2
    virtual void render(
        ::BaseActorRenderContext& renderContext,
        ::ActorRenderData&        actorRenderData,
        ::RenderParams&           renderParams
    ) /*override*/;

    // vIndex: 0
    virtual ~DataDrivenRenderer_tempComponent_VillagerV2AdditionalRendering() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::V2TempComponentRequirements $getV2Requirements() const;

    MCNAPI void
    $render(::BaseActorRenderContext& renderContext, ::ActorRenderData& actorRenderData, ::RenderParams& renderParams);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

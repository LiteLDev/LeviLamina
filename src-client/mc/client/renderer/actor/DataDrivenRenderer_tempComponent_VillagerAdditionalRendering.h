#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/actor/DataDrivenRenderer_tempComponent.h"
#include "mc/client/renderer/actor/V2TempComponentRequirements.h"

// auto generated forward declare list
// clang-format off
class ActorRenderData;
class BaseActorRenderContext;
class RenderParams;
// clang-format on

class DataDrivenRenderer_tempComponent_VillagerAdditionalRendering : public ::DataDrivenRenderer_tempComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnka5cae0;
    // NOLINTEND

public:
    // prevent constructor by default
    DataDrivenRenderer_tempComponent_VillagerAdditionalRendering&
    operator=(DataDrivenRenderer_tempComponent_VillagerAdditionalRendering const&);
    DataDrivenRenderer_tempComponent_VillagerAdditionalRendering(
        DataDrivenRenderer_tempComponent_VillagerAdditionalRendering const&
    );
    DataDrivenRenderer_tempComponent_VillagerAdditionalRendering();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::V2TempComponentRequirements getV2Requirements() const /*override*/;

    virtual void
    render(::BaseActorRenderContext& renderContext, ::ActorRenderData& actorRenderData, ::RenderParams&) /*override*/;

    virtual ~DataDrivenRenderer_tempComponent_VillagerAdditionalRendering() /*override*/ = default;
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

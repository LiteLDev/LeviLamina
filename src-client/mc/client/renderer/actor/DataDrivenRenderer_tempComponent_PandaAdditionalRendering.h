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

class DataDrivenRenderer_tempComponent_PandaAdditionalRendering : public ::DataDrivenRenderer_tempComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk30d611;
    // NOLINTEND

public:
    // prevent constructor by default
    DataDrivenRenderer_tempComponent_PandaAdditionalRendering&
    operator=(DataDrivenRenderer_tempComponent_PandaAdditionalRendering const&);
    DataDrivenRenderer_tempComponent_PandaAdditionalRendering(
        DataDrivenRenderer_tempComponent_PandaAdditionalRendering const&
    );
    DataDrivenRenderer_tempComponent_PandaAdditionalRendering();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::V2TempComponentRequirements getV2Requirements() const /*override*/;

    virtual void
    render(::BaseActorRenderContext& renderContext, ::ActorRenderData& actorRenderData, ::RenderParams&) /*override*/;

    virtual ~DataDrivenRenderer_tempComponent_PandaAdditionalRendering() /*override*/ = default;
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

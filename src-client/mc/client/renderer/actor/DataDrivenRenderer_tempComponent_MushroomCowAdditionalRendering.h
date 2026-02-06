#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/actor/DataDrivenRenderer_tempComponent.h"
#include "mc/client/renderer/actor/V2TempComponentRequirements.h"

// auto generated forward declare list
// clang-format off
class ActorRenderData;
class BaseActorRenderContext;
class BlockTessellator;
class DataDrivenRenderer;
class RenderParams;
// clang-format on

class DataDrivenRenderer_tempComponent_MushroomCowAdditionalRendering : public ::DataDrivenRenderer_tempComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk86e940;
    ::ll::UntypedStorage<8, 8>  mUnk8933fb;
    ::ll::UntypedStorage<8, 32> mUnka24f36;
    ::ll::UntypedStorage<8, 8>  mUnkcb7b8f;
    ::ll::UntypedStorage<8, 8>  mUnkc73a5d;
    // NOLINTEND

public:
    // prevent constructor by default
    DataDrivenRenderer_tempComponent_MushroomCowAdditionalRendering&
    operator=(DataDrivenRenderer_tempComponent_MushroomCowAdditionalRendering const&);
    DataDrivenRenderer_tempComponent_MushroomCowAdditionalRendering(
        DataDrivenRenderer_tempComponent_MushroomCowAdditionalRendering const&
    );
    DataDrivenRenderer_tempComponent_MushroomCowAdditionalRendering();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::V2TempComponentRequirements getV2Requirements() const /*override*/;

    virtual void render(
        ::BaseActorRenderContext& renderContext,
        ::ActorRenderData&        actorRenderData,
        ::RenderParams&           renderParams
    ) /*override*/;

    virtual ~DataDrivenRenderer_tempComponent_MushroomCowAdditionalRendering() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DataDrivenRenderer_tempComponent_MushroomCowAdditionalRendering(
        ::std::shared_ptr<::DataDrivenRenderer> renderer,
        ::BlockTessellator&                     commonBlockRenderer
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::shared_ptr<::DataDrivenRenderer> renderer, ::BlockTessellator& commonBlockRenderer);
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

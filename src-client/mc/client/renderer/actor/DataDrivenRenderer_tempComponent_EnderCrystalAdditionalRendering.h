#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/actor/DataDrivenRenderer_tempComponent.h"

// auto generated forward declare list
// clang-format off
class BaseActorRenderContext;
class DataDrivenRenderer;
class RenderParams;
class Tessellator;
class Vec3;
struct ActorRenderData;
// clang-format on

class DataDrivenRenderer_tempComponent_EnderCrystalAdditionalRendering : public ::DataDrivenRenderer_tempComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkf7b8cc;
    ::ll::UntypedStorage<8, 16> mUnk13ff6d;
    ::ll::UntypedStorage<8, 32> mUnkede15b;
    // NOLINTEND

public:
    // prevent constructor by default
    DataDrivenRenderer_tempComponent_EnderCrystalAdditionalRendering&
    operator=(DataDrivenRenderer_tempComponent_EnderCrystalAdditionalRendering const&);
    DataDrivenRenderer_tempComponent_EnderCrystalAdditionalRendering(
        DataDrivenRenderer_tempComponent_EnderCrystalAdditionalRendering const&
    );
    DataDrivenRenderer_tempComponent_EnderCrystalAdditionalRendering();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual void render(::BaseActorRenderContext&, ::ActorRenderData&, ::RenderParams&) /*override*/;

    // vIndex: 3
    virtual void renderEffects(
        ::BaseActorRenderContext& renderContext,
        ::ActorRenderData&        actorRenderData,
        ::RenderParams&           renderParams
    ) /*override*/;

    // vIndex: 0
    virtual ~DataDrivenRenderer_tempComponent_EnderCrystalAdditionalRendering() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit DataDrivenRenderer_tempComponent_EnderCrystalAdditionalRendering(
        ::std::shared_ptr<::DataDrivenRenderer> renderer
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void
    tessellateCrystalBeam(::Tessellator& tessellator, ::Vec3 const& beamStart, ::Vec3 const& beamEnd);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::shared_ptr<::DataDrivenRenderer> renderer);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
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

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/actor/DataDrivenRenderer_tempComponent.h"
#include "mc/deps/minecraft_renderer/renderer/MaterialPtr.h"
#include "mc/deps/minecraft_renderer/renderer/TexturePtr.h"

// auto generated forward declare list
// clang-format off
class ActorRenderData;
class BaseActorRenderContext;
class DataDrivenRenderer;
class RenderParams;
class Tessellator;
class Vec3;
// clang-format on

class DataDrivenRenderer_tempComponent_EnderCrystalAdditionalRendering : public ::DataDrivenRenderer_tempComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::DataDrivenRenderer>> mRenderer;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>                    mBeamMaterial;
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr>                     mBeamTexture;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void render(::BaseActorRenderContext&, ::ActorRenderData&, ::RenderParams&) /*override*/;

    virtual void renderEffects(
        ::BaseActorRenderContext& renderContext,
        ::ActorRenderData&        actorRenderData,
        ::RenderParams&           renderParams
    ) /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void tessellateCrystalBeam(::Tessellator& tessellator, ::Vec3 const& beamStart, ::Vec3 const& beamEnd);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $render(::BaseActorRenderContext&, ::ActorRenderData&, ::RenderParams&);

    MCAPI void $renderEffects(
        ::BaseActorRenderContext& renderContext,
        ::ActorRenderData&        actorRenderData,
        ::RenderParams&           renderParams
    );
    // NOLINTEND
};

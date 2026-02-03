#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/actor/DataDrivenRenderer_tempComponent.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class ActorRenderData;
class BaseActorRenderContext;
class DataDrivenRenderer;
class RenderParams;
class Tessellator;
class Vec3;
namespace mce { class Mesh; }
// clang-format on

class DataDrivenRenderer_tempComponent_BalloonAdditionalRendering : public ::DataDrivenRenderer_tempComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk912e19;
    ::ll::UntypedStorage<8, 16> mUnk13eb80;
    ::ll::UntypedStorage<8, 32> mUnkb2b3ff;
    // NOLINTEND

public:
    // prevent constructor by default
    DataDrivenRenderer_tempComponent_BalloonAdditionalRendering&
    operator=(DataDrivenRenderer_tempComponent_BalloonAdditionalRendering const&);
    DataDrivenRenderer_tempComponent_BalloonAdditionalRendering(
        DataDrivenRenderer_tempComponent_BalloonAdditionalRendering const&
    );
    DataDrivenRenderer_tempComponent_BalloonAdditionalRendering();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void render(::BaseActorRenderContext&, ::ActorRenderData&, ::RenderParams&) /*override*/;

    virtual void renderEffects(
        ::BaseActorRenderContext& renderContext,
        ::ActorRenderData&        actorRenderData,
        ::RenderParams&           renderParams
    ) /*override*/;

    virtual ::AABB getRenderBounds(::Actor const& entity) const /*override*/;

    virtual ~DataDrivenRenderer_tempComponent_BalloonAdditionalRendering() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit DataDrivenRenderer_tempComponent_BalloonAdditionalRendering(
        ::std::shared_ptr<::DataDrivenRenderer> renderer
    );

    MCNAPI ::mce::Mesh _extractRopeMesh(
        ::Tessellator&     t,
        ::glm::vec3 const& ropeStart,
        ::glm::vec3 const& ropeEnd,
        int                sideIndex,
        int                sideCount
    ) const;

    MCNAPI ::Vec3 _getBalloonAnchor(
        ::Actor*                  attached,
        ::Actor&                  balloon,
        ::BaseActorRenderContext& renderContext,
        float                     actorFrameAlpha
    ) const;
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

    MCNAPI ::AABB $getRenderBounds(::Actor const& entity) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

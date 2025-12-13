#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/actor/V2TempComponentRequirements.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class BaseActorRenderContext;
class BoneOrientation;
class HashedString;
class RenderParams;
struct ActorRenderData;
// clang-format on

class DataDrivenRenderer_tempComponent {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DataDrivenRenderer_tempComponent() = default;

    virtual void preRender(
        ::BaseActorRenderContext& renderContext,
        ::ActorRenderData&        actorRenderData,
        ::RenderParams&           renderParams
    );

    virtual void render(::BaseActorRenderContext&, ::ActorRenderData&, ::RenderParams&) = 0;

    virtual void renderEffects(
        ::BaseActorRenderContext& renderContext,
        ::ActorRenderData&        actorRenderData,
        ::RenderParams&           renderParams
    );

    virtual ::AABB getRenderBounds(::Actor const& entity) const;

    virtual ::V2TempComponentRequirements getV2Requirements() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::BoneOrientation const&
    findBoneOrientation(::std::vector<::BoneOrientation> const& boneOrientations, ::HashedString const& boneName);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $preRender(
        ::BaseActorRenderContext& renderContext,
        ::ActorRenderData&        actorRenderData,
        ::RenderParams&           renderParams
    );

    MCNAPI void $renderEffects(
        ::BaseActorRenderContext& renderContext,
        ::ActorRenderData&        actorRenderData,
        ::RenderParams&           renderParams
    );

    MCNAPI ::AABB $getRenderBounds(::Actor const& entity) const;

    MCNAPI ::V2TempComponentRequirements $getV2Requirements() const;
    // NOLINTEND
};

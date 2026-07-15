#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/actor/V2TempComponentRequirements.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class ActorRenderData;
class BaseActorRenderContext;
class RenderParams;
// clang-format on

class DataDrivenRenderer_tempComponent {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DataDrivenRenderer_tempComponent() = default;

    virtual void preRender(::BaseActorRenderContext&, ::ActorRenderData&, ::RenderParams&);

    virtual void render(::BaseActorRenderContext&, ::ActorRenderData&, ::RenderParams&) = 0;

    virtual void renderEffects(::BaseActorRenderContext&, ::ActorRenderData&, ::RenderParams&);

    virtual ::AABB getRenderBounds(::Actor const&) const;

    virtual ::V2TempComponentRequirements getV2Requirements() const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

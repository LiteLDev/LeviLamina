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
class BlockTessellator;
class DataDrivenRenderer;
class RenderParams;
// clang-format on

class DataDrivenRenderer_tempComponent_MinecartAdditionalRendering : public ::DataDrivenRenderer_tempComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::DataDrivenRenderer>> mRenderer;
    ::ll::TypedStorage<8, 8, ::BlockTessellator&>                    mBlockTessellator;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>                    mBeamMaterial;
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr>                     mBeamTexture;
    // NOLINTEND

public:
    // prevent constructor by default
    DataDrivenRenderer_tempComponent_MinecartAdditionalRendering&
    operator=(DataDrivenRenderer_tempComponent_MinecartAdditionalRendering const&);
    DataDrivenRenderer_tempComponent_MinecartAdditionalRendering(
        DataDrivenRenderer_tempComponent_MinecartAdditionalRendering const&
    );
    DataDrivenRenderer_tempComponent_MinecartAdditionalRendering();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void preRender(
        ::BaseActorRenderContext& renderContext,
        ::ActorRenderData&        actorRenderData,
        ::RenderParams&           renderParams
    ) /*override*/;

    virtual void render(
        ::BaseActorRenderContext& renderContext,
        ::ActorRenderData&        actorRenderData,
        ::RenderParams&           renderParams
    ) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $preRender(
        ::BaseActorRenderContext& renderContext,
        ::ActorRenderData&        actorRenderData,
        ::RenderParams&           renderParams
    );

    MCAPI void
    $render(::BaseActorRenderContext& renderContext, ::ActorRenderData& actorRenderData, ::RenderParams& renderParams);
    // NOLINTEND
};

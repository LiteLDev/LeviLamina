#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/blockactor/BlockActorRenderer.h"

// auto generated forward declare list
// clang-format off
class BaseActorRenderContext;
class BlockPos;
class BlockSource;
class BlockType;
class ItemStack;
class SerializedActorBlockActor;
class SerializedActorModel;
struct ActorTextureInfo;
struct BlockActorRenderData;
struct Brightness;
namespace dragon { struct RenderMetadata; }
// clang-format on

class SerializedActorRenderer : public ::BlockActorRenderer {
public:
    // SerializedActorRenderer inner types declare
    // clang-format off
    struct RenderData;
    // clang-format on

    // SerializedActorRenderer inner types define
    enum class RenderType : uchar {
        World     = 0,
        ItemFrame = 1,
        Hand      = 2,
        Gui       = 3,
    };

    struct RenderData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::ActorTextureInfo const&> mTexture;
        ::ll::TypedStorage<8, 8, ::SerializedActorModel&>   mModel;
        ::ll::TypedStorage<4, 4, float>                     yOffset;
        // NOLINTEND

    public:
        // prevent constructor by default
        RenderData& operator=(RenderData const&);
        RenderData(RenderData const&);
        RenderData();
    };

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void render(::BaseActorRenderContext&, ::BlockActorRenderData&) /*override*/;

    virtual ::SerializedActorRenderer::RenderData getRenderData(
        ::SerializedActorRenderer::RenderType,
        ::BlockType const&,
        ::SerializedActorBlockActor const*,
        ::ItemStack const*
    ) = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void renderInGui(
        ::BaseActorRenderContext&       renderContext,
        ::dragon::RenderMetadata const& renderMetadata,
        ::ItemStack const&              item,
        float                           x,
        float                           y,
        float                           scale,
        float                           lightMultiplier
    );

    MCAPI void renderInHand(
        ::BaseActorRenderContext&     renderContext,
        ::BlockActorRenderData const& blockEntityRenderData,
        ::ItemStack const&            item,
        bool                          isFirstPerson,
        bool                          isInHandItem
    );

    MCAPI void renderInItemFrame(
        ::BaseActorRenderContext&       renderContext,
        ::dragon::RenderMetadata const& renderMetadata,
        ::ItemStack const&              item,
        ::BlockSource&                  region,
        ::BlockPos const&               pos,
        bool                            ignoreLighting,
        ::Brightness                    lightEmission
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

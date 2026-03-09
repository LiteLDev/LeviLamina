#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/model/models/ChestModel.h"
#include "mc/client/renderer/actor/ActorTextureInfo.h"
#include "mc/client/renderer/blockactor/BlockActorRenderer.h"
#include "mc/deps/core/container/DenseEnumMap.h"
#include "mc/world/level/block/CopperType.h"

// auto generated forward declare list
// clang-format off
class BaseActorRenderContext;
class Block;
class BlockPos;
class BlockSource;
class ChestBlockActor;
struct BlockActorRenderData;
struct BrightnessPair;
namespace mce { class TextureGroup; }
// clang-format on

class ChestRenderer : public ::BlockActorRenderer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 320, ::ActorTextureInfo>                                            largeTex;
    ::ll::TypedStorage<8, 320, ::ActorTextureInfo>                                            normalTex;
    ::ll::TypedStorage<8, 320, ::ActorTextureInfo>                                            trappedLargeTex;
    ::ll::TypedStorage<8, 320, ::ActorTextureInfo>                                            trappedTex;
    ::ll::TypedStorage<8, 320, ::ActorTextureInfo>                                            enderTex;
    ::ll::TypedStorage<8, 1280, ::Bedrock::DenseEnumMap<::CopperType, ::ActorTextureInfo, 4>> mCopperTextures;
    ::ll::TypedStorage<8, 1280, ::Bedrock::DenseEnumMap<::CopperType, ::ActorTextureInfo, 4>> mLargeCopperTextures;
    ::ll::TypedStorage<8, 2072, ::ChestModel>                                                 mChestModel;
    ::ll::TypedStorage<8, 2072, ::ChestModel>                                                 mLargeChestModel;
    // NOLINTEND

public:
    // prevent constructor by default
    ChestRenderer();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void
    render(::BaseActorRenderContext& renderContext, ::BlockActorRenderData& blockEntityRenderData) /*override*/;

    virtual ~ChestRenderer() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ChestRenderer(::std::shared_ptr<::mce::TextureGroup> textureGroup);

    MCAPI ::BrightnessPair getBrightness(
        ::ChestBlockActor const& actor,
        ::Block const&           block,
        ::BlockSource&           renderSource,
        ::BlockPos const&        pos
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::mce::TextureGroup> textureGroup);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $render(::BaseActorRenderContext& renderContext, ::BlockActorRenderData& blockEntityRenderData);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/blockactor/SerializedActorRenderer.h"
#include "mc/deps/core/container/DenseEnumMap.h"
#include "mc/world/level/block/CopperType.h"

// auto generated forward declare list
// clang-format off
class ActorResourceDefinitionGroup;
class BlockType;
class ItemStack;
class SerializedActorBlockActor;
class SerializedActorModel;
struct ActorTextureInfo;
// clang-format on

class CopperGolemStatueRenderer : public ::SerializedActorRenderer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::SerializedActorModel>>                          mModels;
    ::ll::TypedStorage<8, 1280, ::Bedrock::DenseEnumMap<::CopperType, ::ActorTextureInfo, 4>> mTextures;
    // NOLINTEND

public:
    // prevent constructor by default
    CopperGolemStatueRenderer();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::SerializedActorRenderer::RenderData getRenderData(
        ::SerializedActorRenderer::RenderType type,
        ::BlockType const&                    block,
        ::SerializedActorBlockActor const*    entity,
        ::ItemStack const*                    item
    ) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit CopperGolemStatueRenderer(::ActorResourceDefinitionGroup const& resourceGroup);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ActorResourceDefinitionGroup const& resourceGroup);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::SerializedActorRenderer::RenderData $getRenderData(
        ::SerializedActorRenderer::RenderType type,
        ::BlockType const&                    block,
        ::SerializedActorBlockActor const*    entity,
        ::ItemStack const*                    item
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/blockactor/SerializedActorRenderer.h"
#include "mc/deps/core/container/DenseEnumMap.h"
#include "mc/world/level/block/CopperType.h"

// auto generated forward declare list
// clang-format off
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
    // virtual functions
    // NOLINTBEGIN
    virtual ::SerializedActorRenderer::RenderData getRenderData(
        ::SerializedActorRenderer::RenderType,
        ::BlockType const&,
        ::SerializedActorBlockActor const*,
        ::ItemStack const*
    ) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

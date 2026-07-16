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
struct BlockActorRenderData;
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
    // virtual functions
    // NOLINTBEGIN
    virtual void render(::BaseActorRenderContext&, ::BlockActorRenderData&) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

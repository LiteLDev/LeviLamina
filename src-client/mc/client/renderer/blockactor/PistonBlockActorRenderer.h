#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/model/models/PistonArmModel.h"
#include "mc/client/renderer/actor/ActorTextureInfo.h"
#include "mc/client/renderer/blockactor/BlockActorRenderer.h"

// auto generated forward declare list
// clang-format off
class BaseActorRenderContext;
struct BlockActorRenderData;
// clang-format on

class PistonBlockActorRenderer : public ::BlockActorRenderer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 320, ::ActorTextureInfo> mPistonArmTex;
    ::ll::TypedStorage<8, 320, ::ActorTextureInfo> mPistonArmStickyTex;
    ::ll::TypedStorage<8, 2064, ::PistonArmModel>  mPistonArm;
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

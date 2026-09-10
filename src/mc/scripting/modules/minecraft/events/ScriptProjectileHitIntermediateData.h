#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/scripting/modules/minecraft/actor/ScriptActorData.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class Dimension;
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptProjectileHitIntermediateData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 96, ::ScriptModuleMinecraft::ScriptActorData>                   mProjectile;
    ::ll::TypedStorage<8, 104, ::std::optional<::ScriptModuleMinecraft::ScriptActorData>> mOwner;
    ::ll::TypedStorage<8, 8, ::Dimension&>                                                mDimension;
    ::ll::TypedStorage<1, 1, uchar const>                                                 mHitFacing;
    ::ll::TypedStorage<4, 12, ::Vec3 const>                                               mHitPos;
    ::ll::TypedStorage<4, 12, ::BlockPos const>                                           mHitBlock;
    ::ll::TypedStorage<4, 12, ::Vec3 const>                                               mHitRayDir;
    ::ll::TypedStorage<8, 104, ::std::optional<::ScriptModuleMinecraft::ScriptActorData>> mHitEntity;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptProjectileHitIntermediateData& operator=(ScriptProjectileHitIntermediateData const&);
    ScriptProjectileHitIntermediateData(ScriptProjectileHitIntermediateData const&);
    ScriptProjectileHitIntermediateData();
};

} // namespace ScriptModuleMinecraft

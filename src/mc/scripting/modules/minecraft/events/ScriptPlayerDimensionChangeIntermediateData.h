#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/scripting/modules/minecraft/actor/ScriptActorData.h"
#include "mc/world/level/dimension/DimensionType.h"

// auto generated forward declare list
// clang-format off
class Level;
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptPlayerDimensionChangeIntermediateData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 96, ::ScriptModuleMinecraft::ScriptActorData> mPlayer;
    ::ll::TypedStorage<4, 4, ::DimensionType>                           mFromDimension;
    ::ll::TypedStorage<4, 12, ::Vec3>                                   mFromLocation;
    ::ll::TypedStorage<4, 4, ::DimensionType>                           mToDimension;
    ::ll::TypedStorage<4, 12, ::Vec3>                                   mToLocation;
    ::ll::TypedStorage<8, 8, ::Level&>                                  mLevel;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPlayerDimensionChangeIntermediateData& operator=(ScriptPlayerDimensionChangeIntermediateData const&);
    ScriptPlayerDimensionChangeIntermediateData(ScriptPlayerDimensionChangeIntermediateData const&);
    ScriptPlayerDimensionChangeIntermediateData();
};

} // namespace ScriptModuleMinecraft

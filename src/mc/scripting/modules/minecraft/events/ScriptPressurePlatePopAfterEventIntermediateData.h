#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class Dimension;
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptPressurePlatePopAfterEventIntermediateData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Dimension&>      mDimension;
    ::ll::TypedStorage<4, 12, ::BlockPos const> mPos;
    ::ll::TypedStorage<4, 4, int>               mPreviousRedstonePower;
    ::ll::TypedStorage<4, 4, int>               mRedstonePower;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPressurePlatePopAfterEventIntermediateData&
    operator=(ScriptPressurePlatePopAfterEventIntermediateData const&);
    ScriptPressurePlatePopAfterEventIntermediateData(ScriptPressurePlatePopAfterEventIntermediateData const&);
    ScriptPressurePlatePopAfterEventIntermediateData();
};

} // namespace ScriptModuleMinecraft

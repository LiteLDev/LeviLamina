#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class Dimension;
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptPistonActionAfterEventIntermediateData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Dimension&> mDimension;
    ::ll::TypedStorage<4, 12, ::BlockPos>  mBlockPos;
    ::ll::TypedStorage<1, 1, bool>         mIsExpanding;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPistonActionAfterEventIntermediateData& operator=(ScriptPistonActionAfterEventIntermediateData const&);
    ScriptPistonActionAfterEventIntermediateData(ScriptPistonActionAfterEventIntermediateData const&);
    ScriptPistonActionAfterEventIntermediateData();
};

} // namespace ScriptModuleMinecraft

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/versionless/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockSource;
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptBlockCustomComponentAfterEventIntermediateStorage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Block const&> mBlock;
    ::ll::TypedStorage<4, 12, ::BlockPos const> mPos;
    ::ll::TypedStorage<8, 8, ::BlockSource const&> mRegion;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBlockCustomComponentAfterEventIntermediateStorage& operator=(ScriptBlockCustomComponentAfterEventIntermediateStorage const&);
    ScriptBlockCustomComponentAfterEventIntermediateStorage(ScriptBlockCustomComponentAfterEventIntermediateStorage const&);
    ScriptBlockCustomComponentAfterEventIntermediateStorage();

};

}

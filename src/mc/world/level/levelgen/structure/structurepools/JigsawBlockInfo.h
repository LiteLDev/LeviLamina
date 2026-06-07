#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/levelgen/structure/JigsawEditorData.h"

// auto generated forward declare list
// clang-format off
class Block;
// clang-format on

class JigsawBlockInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::BlockPos>          mPos;
    ::ll::TypedStorage<8, 8, ::Block const*>       mBlock;
    ::ll::TypedStorage<8, 8, ::Block const*>       mFinalBlock;
    ::ll::TypedStorage<8, 144, ::JigsawEditorData> mEditorData;
    // NOLINTEND
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/levelgen/structure/StructureEditorData.h"

struct StructureBlockUpdatePacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::BlockPos>             mBlockPos;
    ::ll::TypedStorage<8, 216, ::StructureEditorData> mData;
    ::ll::TypedStorage<1, 1, bool>                    mTrigger;
    ::ll::TypedStorage<1, 1, bool>                    mIsWaterlogged;
    // NOLINTEND
};

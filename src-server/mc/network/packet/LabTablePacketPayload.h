#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/versionless/world/level/BlockPos.h"
#include "mc/world/level/block/actor/LabTableReactionType.h"

struct LabTablePacketPayload {
public:
    // LabTablePacketPayload inner types define
    enum class Type : uchar {
        StartCombine = 0,
        StartReaction = 1,
        Reset = 2,
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::LabTablePacketPayload::Type> mType;
    ::ll::TypedStorage<4, 12, ::BlockPos> mPos;
    ::ll::TypedStorage<1, 1, ::LabTableReactionType> mReaction;
    // NOLINTEND

};

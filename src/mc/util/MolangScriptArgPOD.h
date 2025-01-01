#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ItemStackBase;
struct MolangLoopBreak;
struct MolangLoopContinue;
// clang-format on

union MolangScriptArgPOD {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, float>                mFloat;
    ::ll::TypedStorage<8, 8, uint64>               mHashType64;
    ::ll::TypedStorage<1, 8, ::MolangLoopBreak>    mLoopBreak;
    ::ll::TypedStorage<1, 8, ::MolangLoopContinue> mLoopContinue;
    ::ll::TypedStorage<8, 8, ::Actor*>             mActorPtr;
    ::ll::TypedStorage<8, 8, int64>                mActorId;
    ::ll::TypedStorage<8, 8, ::ItemStackBase*>     mItemStackBasePtr;
    ::ll::TypedStorage<8, 8, uint64>               _mData;
    // NOLINTEND
};
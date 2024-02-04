#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/util/molang/MolangLoopBreak.h"
#include "mc/util/molang/MolangLoopContinue.h"
#include "mc/world/actor/Actor.h"


union MolangScriptArgPOD {
    float              mFloat;
    uint64             mHashType64;
    MolangLoopBreak    mLoopBreak;
    MolangLoopContinue mLoopContinue;
    Actor*             mActorPtr;
    int64              mActorId;
    ItemStackBase*     mItemStackBasePtr;
    uint64             _mData;
    MolangScriptArgPOD() : _mData(0){};
    bool operator==(MolangScriptArgPOD const& rhs) const { return _mData == rhs._mData; };
    bool operator!=(MolangScriptArgPOD const& rhs) const { return !(*this == rhs); };
    void clear() { _mData = 0; };
};

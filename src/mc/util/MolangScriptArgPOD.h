#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/util/molang/MolangLoopBreak.h"
#include "mc/util/molang/MolangLoopContinue.h"
#include "mc/world/ActorUniqueID.h"
#include "mc/world/actor/Actor.h"
#include "mc/world/item/ItemStackBase.h"

union MolangScriptArgPOD {
    float              mFloat;
    uint64             mHashType64;
    MolangLoopBreak    mLoopBreak;
    MolangLoopContinue mLoopContinue;
    Actor*             mActorPtr;
    ActorUniqueID      mActorId;
    ItemStackBase*     mItemStackBasePtr;
    uint64             _mData;
    constexpr MolangScriptArgPOD() : _mData(0){};
    constexpr MolangScriptArgPOD(float val) : mFloat(val){};
    constexpr MolangScriptArgPOD(uint64 val) : mHashType64(val){};
    constexpr MolangScriptArgPOD(MolangLoopBreak val) : mLoopBreak(val){};
    constexpr MolangScriptArgPOD(MolangLoopContinue val) : mLoopContinue(val){};
    constexpr MolangScriptArgPOD(Actor const* val) : mActorPtr(const_cast<Actor*>(val)){};
    constexpr MolangScriptArgPOD(ActorUniqueID val) : mActorId(val){};
    constexpr MolangScriptArgPOD(ItemStackBase const* val) : mItemStackBasePtr(const_cast<ItemStackBase*>(val)){};
    constexpr bool operator==(MolangScriptArgPOD const& rhs) const { return _mData == rhs._mData; };
    void           clear() { _mData = 0; };
};

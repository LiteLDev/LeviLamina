#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/common/ActorUniqueID.h"
#include "mc/util/MolangLoopBreak.h"
#include "mc/util/MolangLoopContinue.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ItemStackBase;
struct MolangLoopBreak;
struct MolangLoopContinue;
// clang-format on

union MolangScriptArgPOD {
public:
    constexpr ~MolangScriptArgPOD() {}
    constexpr MolangScriptArgPOD() : _mData(0) {}
    constexpr MolangScriptArgPOD(float val) : mFloat(val) {}
    constexpr MolangScriptArgPOD(uint64 val) : mHashType64(val) {}
    constexpr MolangScriptArgPOD(MolangLoopBreak val) : mLoopBreak(val) {}
    constexpr MolangScriptArgPOD(MolangLoopContinue val) : mLoopContinue(val) {}
    constexpr MolangScriptArgPOD(Actor const* val) : mActorPtr(const_cast<Actor*>(val)) {}
    constexpr MolangScriptArgPOD(ActorUniqueID val) : mActorId(val.rawID) {}
    constexpr MolangScriptArgPOD(ItemStackBase const* val) : mItemStackBasePtr(const_cast<ItemStackBase*>(val)) {}
    constexpr bool operator==(MolangScriptArgPOD const& rhs) const { return _mData == rhs._mData; }
    void           clear() { _mData = 0; }

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

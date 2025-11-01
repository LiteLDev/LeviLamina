#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class Mob;
class Player;
// clang-format on

struct VariantParameterList {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Actor*> mSelf;
    ::ll::TypedStorage<8, 8, ::Actor*> mOther;
    ::ll::TypedStorage<8, 8, ::Player*> mPlayer;
    ::ll::TypedStorage<8, 8, ::Actor*> mTarget;
    ::ll::TypedStorage<8, 8, ::Actor*> mParent;
    ::ll::TypedStorage<8, 8, ::Mob*> mBaby;
    ::ll::TypedStorage<8, 8, ::BlockPos const*> mBlock;
    ::ll::TypedStorage<8, 8, ::Actor*> mDamager;
    ::ll::TypedStorage<8, 8, ::Actor*> mHolder;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI VariantParameterList();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor();
    // NOLINTEND

};

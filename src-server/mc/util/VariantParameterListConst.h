#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class Mob;
class Player;
// clang-format on

struct VariantParameterListConst {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Actor const*> mSelf;
    ::ll::TypedStorage<8, 8, ::Actor const*> mOther;
    ::ll::TypedStorage<8, 8, ::Player const*> mPlayer;
    ::ll::TypedStorage<8, 8, ::Actor const*> mTarget;
    ::ll::TypedStorage<8, 8, ::Actor const*> mParent;
    ::ll::TypedStorage<8, 8, ::Mob const*> mBaby;
    ::ll::TypedStorage<8, 8, ::BlockPos const*> mBlock;
    ::ll::TypedStorage<8, 8, ::Actor const*> mDamager;
    ::ll::TypedStorage<8, 8, ::Actor const*> mHolder;
    // NOLINTEND

};

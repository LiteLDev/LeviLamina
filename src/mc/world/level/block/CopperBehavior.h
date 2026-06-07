#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/CopperType.h"

// auto generated forward declare list
// clang-format off
class HashedString;
struct CopperBlockSet;
// clang-format on

struct CopperBehavior {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::CopperBlockSet const&> mBlockSet;
    ::ll::TypedStorage<1, 1, ::CopperType>            mType;
    ::ll::TypedStorage<1, 1, bool>                    mIsWaxed;
    // NOLINTEND

public:
    // prevent constructor by default
    CopperBehavior& operator=(CopperBehavior const&);
    CopperBehavior(CopperBehavior const&);
    CopperBehavior();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CopperBehavior(::CopperBlockSet const& blockSet, ::HashedString const& thisBlock);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::CopperBlockSet const& blockSet, ::HashedString const& thisBlock);
    // NOLINTEND
};

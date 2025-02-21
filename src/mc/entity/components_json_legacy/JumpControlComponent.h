#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/control/JumpType.h"

// auto generated forward declare list
// clang-format off
class JumpControl;
class JumpInfo;
// clang-format on

class JumpControlComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                             mJumping;
    ::ll::TypedStorage<1, 1, bool>                             mSwimming;
    ::ll::TypedStorage<4, 4, float>                            mJumpPower;
    ::ll::TypedStorage<4, 4, ::JumpType>                       mJumpType;
    ::ll::TypedStorage<4, 64, ::JumpInfo[4]>                   mJumpInfo;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::JumpControl>> mJumpControl;
    // NOLINTEND

public:
    // prevent constructor by default
    JumpControlComponent& operator=(JumpControlComponent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI JumpControlComponent(::JumpControlComponent const& other);

    MCAPI ~JumpControlComponent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::JumpControlComponent const& other);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

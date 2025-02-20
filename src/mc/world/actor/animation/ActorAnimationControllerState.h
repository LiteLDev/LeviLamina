#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/animation/ActorAnimationBase.h"

// auto generated forward declare list
// clang-format off
class HashedString;
class StateAnimationVariable;
// clang-format on

class ActorAnimationControllerState : public ::ActorAnimationBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnkbdbeca;
    ::ll::UntypedStorage<8, 24> mUnkb721a7;
    ::ll::UntypedStorage<8, 24> mUnke5f286;
    ::ll::UntypedStorage<8, 24> mUnk60ea74;
    ::ll::UntypedStorage<8, 48> mUnk875dec;
    ::ll::UntypedStorage<8, 24> mUnk247f4c;
    ::ll::UntypedStorage<8, 24> mUnk849be1;
    ::ll::UntypedStorage<1, 1>  mUnkf6716f;
    ::ll::UntypedStorage<8, 24> mUnke33750;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorAnimationControllerState& operator=(ActorAnimationControllerState const&);
    ActorAnimationControllerState(ActorAnimationControllerState const&);
    ActorAnimationControllerState();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ActorAnimationControllerState(::HashedString const& name);

    MCAPI void addAnimation(::HashedString const& name);

    MCAPI ::StateAnimationVariable& addVariable(::std::string const& variableName);

    MCAPI ~ActorAnimationControllerState();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::HashedString const& name);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

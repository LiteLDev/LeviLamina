#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/molang/MolangVersion.h"

class ActorAnimationControllerStateTransition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>  mUnkeb47df;
    ::ll::UntypedStorage<8, 8>   mUnk54d5ca;
    ::ll::UntypedStorage<8, 216> mUnkc8f8ff;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorAnimationControllerStateTransition& operator=(ActorAnimationControllerStateTransition const&);
    ActorAnimationControllerStateTransition(ActorAnimationControllerStateTransition const&);
    ActorAnimationControllerStateTransition();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ActorAnimationControllerStateTransition(
        ::std::string const& targetStateName,
        ::std::string const& expression,
        ::MolangVersion      molangVersion
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
    $ctor(::std::string const& targetStateName, ::std::string const& expression, ::MolangVersion molangVersion);
    // NOLINTEND
};

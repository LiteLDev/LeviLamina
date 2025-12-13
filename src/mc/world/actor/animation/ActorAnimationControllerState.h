#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/molang/MolangVersion.h"
#include "mc/world/actor/animation/ActorAnimationBase.h"

// auto generated forward declare list
// clang-format off
class HashedString;
class RenderParams;
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
    MCNAPI explicit ActorAnimationControllerState(::HashedString const& name);

    MCNAPI_C void addTransition(
        ::std::string const& stateName,
        ::std::string const& expression,
        ::MolangVersion      molangVersion,
        bool                 createEvenIfAlreadyExists
    );

    MCNAPI ::StateAnimationVariable& addVariable(::std::string const& variableName);

    MCNAPI void setVariables(::RenderParams& renderParams) const;

    MCNAPI ~ActorAnimationControllerState();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::HashedString const& name);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

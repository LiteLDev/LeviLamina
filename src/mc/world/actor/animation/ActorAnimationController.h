#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ActorAnimationControllerState;
class HashedString;
class SemVersion;
// clang-format on

class ActorAnimationController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnk72907e;
    ::ll::UntypedStorage<8, 24> mUnke82d66;
    ::ll::UntypedStorage<8, 8>  mUnkbf1b50;
    ::ll::UntypedStorage<8, 24> mUnk8e330d;
    ::ll::UntypedStorage<8, 32> mUnk1211b3;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorAnimationController& operator=(ActorAnimationController const&);
    ActorAnimationController(ActorAnimationController const&);
    ActorAnimationController();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ActorAnimationController(
        ::HashedString const& name,
        ::SemVersion const&   version,
        ::std::string const&  sourceFilePathWithExtension
    );

    MCNAPI ::std::shared_ptr<::ActorAnimationControllerState>& addState(::HashedString const& name);

    MCNAPI uint64 findStateIndex(::std::string const& name, bool missingIsOkay, uint64 defaultState) const;

    MCNAPI void resolveTransitionStateIndices();

    MCNAPI ~ActorAnimationController();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
    $ctor(::HashedString const& name, ::SemVersion const& version, ::std::string const& sourceFilePathWithExtension);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

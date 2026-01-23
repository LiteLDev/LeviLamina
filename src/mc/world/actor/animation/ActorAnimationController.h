#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/sem_ver/SemVersion.h"
#include "mc/deps/core/string/HashedString.h"

// auto generated forward declare list
// clang-format off
class ActorAnimationControllerPlayer;
class ActorAnimationControllerState;
class RenderParams;
// clang-format on

class ActorAnimationController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::HashedString>                                                    mName;
    ::ll::TypedStorage<8, 24, ::SemVersion>                                                      mVersion;
    ::ll::TypedStorage<8, 8, uint64>                                                             mInitialStateIndex;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::ActorAnimationControllerState>>> mStates;
    ::ll::TypedStorage<8, 32, ::std::string> mSourceFilePathWithExtension;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorAnimationController();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ActorAnimationController(
        ::HashedString const& name,
        ::SemVersion const&   version,
        ::std::string const&  sourceFilePathWithExtension
    );

    MCAPI ::std::shared_ptr<::ActorAnimationControllerState>& addState(::HashedString const& name);

    MCAPI void resolveTransitionStateIndices();

    MCAPI_C void updateActiveParticleState(
        ::RenderParams&                   renderParams,
        int                               oldStateIndex,
        int                               newStateIndex,
        ::ActorAnimationControllerPlayer& player
    ) const;

    MCAPI_C void updateActiveSoundEffectState(
        ::RenderParams&                   renderParams,
        int                               oldStateIndex,
        int                               newStateIndex,
        ::ActorAnimationControllerPlayer& player
    ) const;

    MCAPI ~ActorAnimationController();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::HashedString const& name, ::SemVersion const& version, ::std::string const& sourceFilePathWithExtension);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

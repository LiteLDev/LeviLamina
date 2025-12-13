#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ActorAnimationControllerPlayer;
class ActorAnimationControllerState;
class HashedString;
class RenderParams;
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
    MCNAPI ::std::shared_ptr<::ActorAnimationControllerState>& addState(::HashedString const& name);

    MCNAPI void resolveTransitionStateIndices();

    MCNAPI_C void updateActiveParticleState(
        ::RenderParams&                   renderParams,
        int                               oldStateIndex,
        int                               newStateIndex,
        ::ActorAnimationControllerPlayer& player
    ) const;

    MCNAPI_C void updateActiveSoundEffectState(
        ::RenderParams&                   renderParams,
        int                               oldStateIndex,
        int                               newStateIndex,
        ::ActorAnimationControllerPlayer& player
    ) const;

    MCNAPI ~ActorAnimationController();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

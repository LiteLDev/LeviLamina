#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class EntityContext;
class IActorManagerConnector;
class IGameplayUserManagerConnector;
// clang-format on

class HitResultWrapper {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 136> mUnk1c34b7;
    ::ll::UntypedStorage<8, 136> mUnk8defd0;
    ::ll::UntypedStorage<8, 16>  mUnk41fb9b;
    ::ll::UntypedStorage<8, 16>  mUnk9429f5;
    // NOLINTEND

public:
    // prevent constructor by default
    HitResultWrapper& operator=(HitResultWrapper const&);
    HitResultWrapper(HitResultWrapper const&);
    HitResultWrapper();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _onActorRemoved(::Actor const& actor);

    MCNAPI void _onGameplayUserRemoved(::EntityContext const& entity);

    MCNAPI void _removeIfActorMatches(::Actor const& actor);

    MCNAPI void initialize(
        ::IActorManagerConnector&        actorManagerConnector,
        ::IGameplayUserManagerConnector& gameplayUserManagerConnector
    );
    // NOLINTEND
};

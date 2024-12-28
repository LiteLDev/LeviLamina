#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class EntityContext;
class HitResult;
class IActorManagerConnector;
class IGameplayUserManagerConnector;
// clang-format on

class HitResultWrapper {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 112> mUnk1c34b7;
    ::ll::UntypedStorage<8, 112> mUnk8defd0;
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
    MCAPI void _onActorRemoved(::Actor const& actor);

    MCAPI void _onGameplayUserRemoved(::EntityContext const& entity);

    MCAPI ::HitResult& getHitResult();

    MCAPI ::HitResult& getLiquidHitResult();

    MCAPI void initialize(
        ::IActorManagerConnector&        actorManagerConnector,
        ::IGameplayUserManagerConnector& gameplayUserManagerConnector
    );
    // NOLINTEND
};

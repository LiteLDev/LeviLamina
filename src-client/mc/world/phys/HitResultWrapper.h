#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/world/phys/HitResult.h"

// auto generated forward declare list
// clang-format off
class Actor;
class EntityContext;
struct IActorManagerConnector;
struct IGameplayUserManagerConnector;
// clang-format on

class HitResultWrapper {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 136, ::HitResult>                    mHitResult;
    ::ll::TypedStorage<8, 136, ::HitResult>                    mLiquidHitResult;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnRemoveActorEntityReferences;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnGameplayUserRemoved;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD void _onActorRemoved(::Actor const& actor);

    MCAPI void _onGameplayUserRemoved(::EntityContext const& entity);

    MCFOLD void _removeIfActorMatches(::Actor const& actor);

    MCAPI void initialize(
        ::IActorManagerConnector&        actorManagerConnector,
        ::IGameplayUserManagerConnector& gameplayUserManagerConnector
    );
    // NOLINTEND
};

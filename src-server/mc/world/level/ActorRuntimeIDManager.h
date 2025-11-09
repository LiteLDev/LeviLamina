#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/legacy/ActorRuntimeID.h"

// auto generated forward declare list
// clang-format off
class Actor;
class EntityContext;
class GameplayUserManager;
class IActorManagerConnector;
class WeakEntityRef;
// clang-format on

class ActorRuntimeIDManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ActorRuntimeID>                                            mLastRuntimeID;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::ActorRuntimeID, ::WeakEntityRef>>    mRuntimeIdMap;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::GameplayUserManager> const> mGameplayUserManager;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                            mOnActorEntityAdded;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnRemoveActorEntityReferences;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnGameplayUserResumedSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnGameplayUserSuspendedSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnGameplayUserAdded;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnGameplayUserRemoved;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorRuntimeIDManager();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ActorRuntimeIDManager(::Bedrock::NotNullNonOwnerPtr<::GameplayUserManager> gameplayUserManager);

    MCAPI void _addEntity(::EntityContext const& entity);

    MCAPI void _onActorAdded(::Actor& actor);

    MCAPI void _onRemoveActorEntityReferences(::Actor& actor);

    MCAPI void _removeEntity(::EntityContext const& entity);

    MCAPI ::Actor* getRuntimeActorEntity(::ActorRuntimeID actorId, bool getRemoved) const;

    MCAPI void initialize(::IActorManagerConnector& actorManagerConnector);

    MCAPI ~ActorRuntimeIDManager();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Bedrock::NotNullNonOwnerPtr<::GameplayUserManager> gameplayUserManager);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

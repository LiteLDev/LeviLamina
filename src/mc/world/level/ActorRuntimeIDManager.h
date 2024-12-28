#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorRuntimeID;
class EntityContext;
class GameplayUserManager;
class IActorManagerConnector;
// clang-format on

class ActorRuntimeIDManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk322003;
    ::ll::UntypedStorage<8, 64> mUnk5c39dd;
    ::ll::UntypedStorage<8, 24> mUnk666330;
    ::ll::UntypedStorage<8, 16> mUnke0e9d8;
    ::ll::UntypedStorage<8, 16> mUnkc90853;
    ::ll::UntypedStorage<8, 16> mUnk2b82b5;
    ::ll::UntypedStorage<8, 16> mUnkd8c1d0;
    ::ll::UntypedStorage<8, 16> mUnk450b11;
    ::ll::UntypedStorage<8, 16> mUnk7cb178;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorRuntimeIDManager& operator=(ActorRuntimeIDManager const&);
    ActorRuntimeIDManager(ActorRuntimeIDManager const&);
    ActorRuntimeIDManager();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ActorRuntimeIDManager(::Bedrock::NotNullNonOwnerPtr<::GameplayUserManager> gameplayUserManager);

    MCAPI void _addEntity(::EntityContext const& entity);

    MCAPI void _onActorAdded(::Actor& actor);

    MCAPI void _onRemoveActorEntityReferences(::Actor& actor);

    MCAPI void _removeEntity(::EntityContext const& entity);

    MCAPI ::ActorRuntimeID getNextRuntimeID();

    MCAPI ::Actor* getRuntimeActorEntity(::ActorRuntimeID actorId, bool getRemoved) const;

    MCAPI ::std::vector<::Actor*> getRuntimeActorList() const;

    MCAPI void initialize(::IActorManagerConnector& actorManagerConnector);

    MCAPI void removeRuntimeActorEntity(::ActorRuntimeID actorRuntimeID);

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

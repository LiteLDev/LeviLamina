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
    MCNAPI explicit ActorRuntimeIDManager(::Bedrock::NotNullNonOwnerPtr<::GameplayUserManager> gameplayUserManager);

    MCNAPI void _addEntity(::EntityContext const& entity);

    MCNAPI void _onActorAdded(::Actor& actor);

    MCNAPI void _onRemoveActorEntityReferences(::Actor& actor);

    MCNAPI void _removeEntity(::EntityContext const& entity);

    MCNAPI ::Actor* getRuntimeActorEntity(::ActorRuntimeID actorId, bool getRemoved) const;

    MCNAPI void initialize(::IActorManagerConnector& actorManagerConnector);

    MCNAPI void removeRuntimeActorEntity(::ActorRuntimeID actorRuntimeID);

    MCNAPI ~ActorRuntimeIDManager();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Bedrock::NotNullNonOwnerPtr<::GameplayUserManager> gameplayUserManager);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

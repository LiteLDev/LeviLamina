#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/legacy/ActorUniqueID.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorFactory;
class ActorManager;
class CompoundTag;
class LevelStorage;
// clang-format on

class PlayerLimboActorManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::ActorUniqueID, ::std::vector<::std::unique_ptr<::CompoundTag>>>>
                                                                                   mOwnedActorsDimensionTransferLimbo;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::LevelStorage> const> mLevelStorage;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::ActorManager>>       mActorManager;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::ActorFactory> const> mActorFactory;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerLimboActorManager();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PlayerLimboActorManager(
        ::Bedrock::NotNullNonOwnerPtr<::LevelStorage> levelStorage,
        ::Bedrock::NotNullNonOwnerPtr<::ActorManager> actorManager,
        ::Bedrock::NotNullNonOwnerPtr<::ActorFactory> actorFactory
    );

    MCAPI void loadAllOwnedLimboActors();

    MCAPI void transferActorToOwnedEntityLimbo(::ActorUniqueID playerUniqueID, ::Actor& actor);

    MCAPI ~PlayerLimboActorManager();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Bedrock::NotNullNonOwnerPtr<::LevelStorage> levelStorage,
        ::Bedrock::NotNullNonOwnerPtr<::ActorManager> actorManager,
        ::Bedrock::NotNullNonOwnerPtr<::ActorFactory> actorFactory
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorFactory;
class ActorManager;
class CompoundTag;
class DimensionHeightRange;
class IAddActorEntityProxy;
class LevelStorage;
class Vec3;
struct ActorUniqueID;
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

    MCAPI void clearOwnedEntityLimboForPlayer(::ActorUniqueID playerId);

    MCAPI void loadAllOwnedLimboActors();

    MCAPI ::Actor* processOwnedAgentForPlayer(
        ::CompoundTag&                agentCompoundTag,
        ::IAddActorEntityProxy&       addActorEntityProxy,
        ::DimensionHeightRange const& heightRange,
        ::Vec3 const&                 spawnPosition
    );

    MCAPI void processOwnedEntityLimboForPlayer(
        ::ActorUniqueID               playerId,
        ::IAddActorEntityProxy&       addActorEntityProxy,
        ::DimensionHeightRange const& heightRange,
        ::Vec3 const&                 spawnPosition
    );

    MCAPI void saveOwnedLimboActorsForPlayer(::ActorUniqueID playerId) const;

    MCAPI ~PlayerLimboActorManager();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::string getOwnedEntityLimboStorageKeyForPlayer(::ActorUniqueID playerId);
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

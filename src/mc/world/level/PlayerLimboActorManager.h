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
    ::ll::UntypedStorage<8, 64> mUnk1709c4;
    ::ll::UntypedStorage<8, 24> mUnk58ceda;
    ::ll::UntypedStorage<8, 24> mUnkdecc3c;
    ::ll::UntypedStorage<8, 24> mUnk6c8cc2;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerLimboActorManager& operator=(PlayerLimboActorManager const&);
    PlayerLimboActorManager(PlayerLimboActorManager const&);
    PlayerLimboActorManager();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PlayerLimboActorManager(
        ::Bedrock::NotNullNonOwnerPtr<::LevelStorage> levelStorage,
        ::Bedrock::NotNullNonOwnerPtr<::ActorManager> actorManager,
        ::Bedrock::NotNullNonOwnerPtr<::ActorFactory> actorFactory
    );

    MCNAPI void clearOwnedEntityLimboForPlayer(::ActorUniqueID playerId);

    MCNAPI void loadAllOwnedLimboActors();

    MCNAPI ::Actor* processOwnedAgentForPlayer(
        ::CompoundTag&                agentCompoundTag,
        ::IAddActorEntityProxy&       addActorEntityProxy,
        ::DimensionHeightRange const& heightRange,
        ::Vec3 const&                 spawnPosition
    );

    MCNAPI void processOwnedEntityLimboForPlayer(
        ::ActorUniqueID               playerId,
        ::IAddActorEntityProxy&       addActorEntityProxy,
        ::DimensionHeightRange const& heightRange,
        ::Vec3 const&                 spawnPosition
    );

    MCNAPI void saveOwnedLimboActorsForPlayer(::ActorUniqueID playerId) const;

    MCNAPI ~PlayerLimboActorManager();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::string getOwnedEntityLimboStorageKeyForPlayer(::ActorUniqueID playerId);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::Bedrock::NotNullNonOwnerPtr<::LevelStorage> levelStorage,
        ::Bedrock::NotNullNonOwnerPtr<::ActorManager> actorManager,
        ::Bedrock::NotNullNonOwnerPtr<::ActorFactory> actorFactory
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

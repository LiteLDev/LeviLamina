#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/deps/game_refs/StackRefResult.h"
#include "mc/deps/game_refs/WeakRef.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ChangeDimensionRequest;
class Dimension;
class DimensionManager;
class EntityContext;
class EntityRegistry;
class GameplayUserManager;
class ILevelCrashDumpManager;
class IPlayerDimensionTransferer;
class PacketSender;
class Player;
class PlayerLimboActorManager;
struct ActorUniqueID;
namespace Bedrock::PubSub { class Subscription; }
// clang-format on

class PlayerDimensionTransferManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PlayerLimboActorManager> const> mPlayerLimboActorManager;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::IPlayerDimensionTransferer>> const>
                                                                                          mPlayerDimensionTransferer;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::GameplayUserManager> const> mGameplayUserManager;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::DimensionManager> const>    mDimensionManager;
    ::ll::TypedStorage<8, 16, ::WeakRef<::EntityRegistry> const>                          mEntityRegistry;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::ILevelCrashDumpManager>> const> mLevelCrashDumpManager;
    ::ll::TypedStorage<1, 1, bool>                             mLevelFinishedInitializing;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnGameplayUserRemoved;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PlayerDimensionTransferManager(
        ::std::unique_ptr<::PlayerLimboActorManager>               playerLimboActorManager,
        ::std::unique_ptr<::IPlayerDimensionTransferer>            playerDimensionTransferer,
        ::Bedrock::NotNullNonOwnerPtr<::DimensionManager>          dimensionManager,
        ::Bedrock::NotNullNonOwnerPtr<::GameplayUserManager>       gameplayUserManager,
        ::gsl::not_null<::StackRefResult<::EntityRegistry>> const& entityRegistry,
        ::std::unique_ptr<::ILevelCrashDumpManager>                levelCrashDumpManager
    );

    MCNAPI ::StackRefResult<::EntityRegistry> _getValidEntityRegistry();

    MCNAPI bool _isPlayerSuspended(::Player const& player) const;

    MCNAPI void _onGameplayUserRemoved(::EntityContext& entity);

    MCNAPI bool _playerChangeDimension(::Player& player, ::ChangeDimensionRequest& changeRequest);

    MCNAPI void _playerChangeDimensionPrepareRegion(
        ::Player&                 player,
        ::ChangeDimensionRequest& changeRequest,
        ::Dimension&              toDimension
    );

    MCNAPI bool _playerChangeDimensionWaitingForChunks(
        ::Player&                 player,
        ::ChangeDimensionRequest& changeRequest,
        ::Dimension&              toDimension
    );

    MCNAPI void handleChangeDimensionRequests();

    MCNAPI void requestPlayerChangeDimension(::Player const& player, ::ChangeDimensionRequest&& changeRequest);

    MCNAPI void setPacketSender(::PacketSender& packetSender);

    MCNAPI void transferActorToOwnedEntityLimbo(::ActorUniqueID playerId, ::Actor& actor);

    MCNAPI ~PlayerDimensionTransferManager();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::std::unique_ptr<::PlayerLimboActorManager>               playerLimboActorManager,
        ::std::unique_ptr<::IPlayerDimensionTransferer>            playerDimensionTransferer,
        ::Bedrock::NotNullNonOwnerPtr<::DimensionManager>          dimensionManager,
        ::Bedrock::NotNullNonOwnerPtr<::GameplayUserManager>       gameplayUserManager,
        ::gsl::not_null<::StackRefResult<::EntityRegistry>> const& entityRegistry,
        ::std::unique_ptr<::ILevelCrashDumpManager>                levelCrashDumpManager
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

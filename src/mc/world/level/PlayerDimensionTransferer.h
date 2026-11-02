#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Connector.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/world/level/IPlayerDimensionTransferer.h"

// auto generated forward declare list
// clang-format off
class ChangeDimensionRequest;
class Dimension;
class EntityRegistry;
class GameplayUserManager;
class IPlayerDimensionTransferProxy;
class ISharedSpawnGetter;
class LevelStorage;
class LoadingScreenIdManager;
class PacketSender;
class Player;
class PlayerLimboActorManager;
class PortalForcer;
struct ActorUniqueID;
struct AddLimboActorHelper;
struct DimensionType;
struct NetworkIdentifierWithSubId;
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
// clang-format on

class PlayerDimensionTransferer : public ::IPlayerDimensionTransferer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::IPlayerDimensionTransferProxy>> const>
                                                                                   mPlayerDimensionTransferProxy;
    ::ll::TypedStorage<1, 1, bool const>                                           mIsClientSide;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::PortalForcer> const> mPortalForcer;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::ISharedSpawnGetter>> const> mSharedSpawnGetter;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::LevelStorage> const>              mLevelStorage;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::LoadingScreenIdManager> const>    mLoadingScreenIdManager;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::PacketSender>>                    mPacketSender;
    ::ll::TypedStorage<
        8,
        128,
        ::Bedrock::PubSub::Publisher<void(::DimensionType), ::Bedrock::PubSub::ThreadModel::MultiThreaded, 0>>
        mOnAnyPlayerChangeDimensionPreSuspendRegion;
    ::ll::TypedStorage<8, 128, ::Bedrock::PubSub::Publisher<void(), ::Bedrock::PubSub::ThreadModel::MultiThreaded, 0>>
        mOnAnyPlayerChangeDimensionPrepareRegionComplete;
    ::ll::TypedStorage<
        8,
        128,
        ::Bedrock::PubSub::
            Publisher<void(::ActorUniqueID, ::DimensionType), ::Bedrock::PubSub::ThreadModel::MultiThreaded, 0>>
        mOnAnyPlayerChangeDimensionComplete;
    ::ll::TypedStorage<
        8,
        128,
        ::Bedrock::PubSub::Publisher<
            void(::NetworkIdentifierWithSubId const&, ::DimensionType),
            ::Bedrock::PubSub::ThreadModel::MultiThreaded,
            0>>
        mOnPlayerLeftDimension;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerDimensionTransferer();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PlayerDimensionTransferer() /*override*/ = default;

    virtual void playerSaveLimboActors(
        ::Player&                  player,
        ::ChangeDimensionRequest&  changeRequest,
        ::Dimension&               toDimension,
        ::PlayerLimboActorManager* playerLimboActorManager
    ) /*override*/;

    virtual void playerDestroyRemotePlayers(::GameplayUserManager& gameplayUserManager) /*override*/;

    virtual void playerStartChangeDimensionSuspendRegion(::Player& player, ::DimensionType fromDimension) /*override*/;

    virtual void setTransitionLocation(
        ::Player&                 player,
        ::ChangeDimensionRequest& changeRequest,
        ::Dimension&              toDimension
    ) /*override*/;

    virtual void
    syncTransitionComponentTargetPosition(::Player& player, ::ChangeDimensionRequest const& changeRequest) /*override*/;

    virtual void playerDestroyRegion(::Player& player, ::ChangeDimensionRequest const& changeRequest) /*override*/;

    virtual void playerPrepareRegion(
        ::Player&                       player,
        ::ChangeDimensionRequest const& changeRequest,
        ::Dimension const&              toDimension
    ) /*override*/;

    virtual ::Bedrock::PubSub::Connector<void(::DimensionType)>&
    getOnAnyPlayerChangeDimensionPreSuspendRegionConnector() /*override*/;

    virtual ::Bedrock::PubSub::Connector<void()>&
    getOnAnyPlayerChangeDimensionPrepareRegionCompleteConnector() /*override*/;

    virtual ::Bedrock::PubSub::Connector<void(::ActorUniqueID, ::DimensionType)>&
    getOnAnyPlayerChangeDimensionCompleteConnector() /*override*/;

    virtual ::Bedrock::PubSub::Connector<void(::NetworkIdentifierWithSubId const&, ::DimensionType)>&
    getOnPlayerLeftDimensionConnector() /*override*/;

    virtual bool
    playerWaitForServer(::Player& player, ::std::chrono::steady_clock::time_point currentTime) /*override*/;

    virtual bool
    playerWaitForDimensionTransitionSystem(::Player const& player, ::EntityRegistry& entityRegistry) /*override*/;

    virtual void
    sendClientRespawnMovePacketFromServer(::Player const& player, ::ChangeDimensionRequest& changeRequest) /*override*/;

    virtual bool waitForSubChunks(::Player& player, ::Dimension const& toDimension) /*override*/;

    virtual void startWaitForRespawn(::Player const& player) /*override*/;

    virtual void playerSwitchDimension(
        ::Player&                 player,
        ::ChangeDimensionRequest& changeRequest,
        ::AddLimboActorHelper*    addLimboActorHelper
    ) /*override*/;

    virtual bool doRespawnIfReady(
        ::Player&                 player,
        ::ChangeDimensionRequest& changeRequest,
        ::AddLimboActorHelper*    addLimboActorHelper
    ) /*override*/;

    virtual void setPacketSender(::PacketSender& packetSender) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PlayerDimensionTransferer(
        ::std::unique_ptr<::IPlayerDimensionTransferProxy>   playerDimensionTransferProxy,
        bool                                                 isClientSide,
        ::Bedrock::NotNullNonOwnerPtr<::PortalForcer>        portalForcer,
        ::std::unique_ptr<::ISharedSpawnGetter>              sharedSpawnGetter,
        ::Bedrock::NonOwnerPointer<::LevelStorage>           levelStorage,
        ::Bedrock::NonOwnerPointer<::LoadingScreenIdManager> loadingScreenIdManager
    );

    MCAPI void _finalizeDimensionChange(::Player& player, ::ChangeDimensionRequest const& changeRequest);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::std::unique_ptr<::IPlayerDimensionTransferProxy>   playerDimensionTransferProxy,
        bool                                                 isClientSide,
        ::Bedrock::NotNullNonOwnerPtr<::PortalForcer>        portalForcer,
        ::std::unique_ptr<::ISharedSpawnGetter>              sharedSpawnGetter,
        ::Bedrock::NonOwnerPointer<::LevelStorage>           levelStorage,
        ::Bedrock::NonOwnerPointer<::LoadingScreenIdManager> loadingScreenIdManager
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $playerSaveLimboActors(
        ::Player&                  player,
        ::ChangeDimensionRequest&  changeRequest,
        ::Dimension&               toDimension,
        ::PlayerLimboActorManager* playerLimboActorManager
    );

    MCNAPI void $playerDestroyRemotePlayers(::GameplayUserManager& gameplayUserManager);

    MCNAPI void $playerStartChangeDimensionSuspendRegion(::Player& player, ::DimensionType fromDimension);

    MCNAPI void
    $setTransitionLocation(::Player& player, ::ChangeDimensionRequest& changeRequest, ::Dimension& toDimension);

    MCNAPI void $syncTransitionComponentTargetPosition(::Player& player, ::ChangeDimensionRequest const& changeRequest);

    MCNAPI void $playerDestroyRegion(::Player& player, ::ChangeDimensionRequest const& changeRequest);

    MCAPI void $playerPrepareRegion(
        ::Player&                       player,
        ::ChangeDimensionRequest const& changeRequest,
        ::Dimension const&              toDimension
    );

    MCNAPI ::Bedrock::PubSub::Connector<void(::DimensionType)>&
    $getOnAnyPlayerChangeDimensionPreSuspendRegionConnector();

    MCNAPI ::Bedrock::PubSub::Connector<void()>& $getOnAnyPlayerChangeDimensionPrepareRegionCompleteConnector();

    MCNAPI ::Bedrock::PubSub::Connector<void(::ActorUniqueID, ::DimensionType)>&
    $getOnAnyPlayerChangeDimensionCompleteConnector();

    MCNAPI ::Bedrock::PubSub::Connector<void(::NetworkIdentifierWithSubId const&, ::DimensionType)>&
    $getOnPlayerLeftDimensionConnector();

    MCNAPI bool $playerWaitForServer(::Player& player, ::std::chrono::steady_clock::time_point currentTime);

    MCNAPI bool $playerWaitForDimensionTransitionSystem(::Player const& player, ::EntityRegistry& entityRegistry);

    MCNAPI void $sendClientRespawnMovePacketFromServer(::Player const& player, ::ChangeDimensionRequest& changeRequest);

    MCNAPI bool $waitForSubChunks(::Player& player, ::Dimension const& toDimension);

    MCNAPI void $startWaitForRespawn(::Player const& player);

    MCNAPI void $playerSwitchDimension(
        ::Player&                 player,
        ::ChangeDimensionRequest& changeRequest,
        ::AddLimboActorHelper*    addLimboActorHelper
    );

    MCNAPI bool $doRespawnIfReady(
        ::Player&                 player,
        ::ChangeDimensionRequest& changeRequest,
        ::AddLimboActorHelper*    addLimboActorHelper
    );

    MCNAPI void $setPacketSender(::PacketSender& packetSender);


    // NOLINTEND
};

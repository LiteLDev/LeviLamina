#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/Owner.h"
#include "mc/deps/core/utility/pub_sub/Connector.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/network/NetworkIdentifierWithSubId.h"
#include "mc/network/packet/LevelSoundEventPacket.h"
#include "mc/world/level/ILevelSoundManagerConnector.h"
#include "mc/world/level/ServerAudioContentRegistry.h"
#include "mc/world/level/ServerSoundDefinitionRegistry.h"
#include "mc/world/level/ServerSoundInstanceManager.h"

// auto generated forward declare list
// clang-format off
class ActorSoundIdentifier;
class BlockPos;
class IDimension;
class IPlayerConnectionConnector;
class IPlayerDimensionTransferConnector;
class LevelEventCoordinator;
class PacketSender;
class Player;
class ServerSoundHandle;
class ServerSoundInstance;
class SoundPlayerInterface;
class Vec3;
struct BroadcastOptions;
struct DimensionType;
struct PlaySoundOptions;
struct SoundEventIdentifier;
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
// clang-format on

class LevelSoundManager : public ::ILevelSoundManagerConnector {
public:
    // LevelSoundManager inner types declare
    // clang-format off
    struct QueuedSoundBroadcastMultipleUserIdsPacket;
    struct QueuedSoundBroadcastPacket;
    struct QueuedSoundBroadcastUserIdPacket;
    struct QueuedSoundSendPacket;
    // clang-format on

    // LevelSoundManager inner types define
    struct QueuedSoundBroadcastMultipleUserIdsPacket {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 176, ::LevelSoundEventPacket>                    mPacket;
        ::ll::TypedStorage<8, 24, ::std::vector<::NetworkIdentifierWithSubId>> mNetworkIds;
        // NOLINTEND
    };

    struct QueuedSoundBroadcastPacket {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 176, ::LevelSoundEventPacket> mPacket;
        // NOLINTEND
    };

    struct QueuedSoundBroadcastUserIdPacket {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 176, ::LevelSoundEventPacket>      mPacket;
        ::ll::TypedStorage<8, 184, ::NetworkIdentifierWithSubId> mNetworkId;
        // NOLINTEND
    };

    struct QueuedSoundSendPacket {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 176, ::LevelSoundEventPacket> mPacket;
        // NOLINTEND
    };

    using QueuedSoundPacket = ::std::variant<
        ::LevelSoundManager::QueuedSoundSendPacket,
        ::LevelSoundManager::QueuedSoundBroadcastPacket,
        ::LevelSoundManager::QueuedSoundBroadcastUserIdPacket,
        ::LevelSoundManager::QueuedSoundBroadcastMultipleUserIdsPacket>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 104, ::Bedrock::Owner<::ServerSoundDefinitionRegistry>> mServerSoundDefinitionRegistry;
    ::ll::TypedStorage<8, 168, ::ServerAudioContentRegistry>                      mServerAudioContentRegistry;
    ::ll::TypedStorage<8, 208, ::ServerSoundInstanceManager>                      mServerSoundInstanceManager;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::SoundPlayerInterface>> mSoundPlayer;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::PacketSender>>      mLevelPacketSender;
    ::ll::TypedStorage<1, 1, bool>                                                mIsClientSide;
    ::ll::TypedStorage<1, 1, bool>                                                mServerAuthSoundEnabled;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::LevelEventCoordinator> const> mLevelEventCoordinator;
    ::ll::TypedStorage<
        8,
        24,
        ::std::vector<::std::variant<
            ::LevelSoundManager::QueuedSoundSendPacket,
            ::LevelSoundManager::QueuedSoundBroadcastPacket,
            ::LevelSoundManager::QueuedSoundBroadcastUserIdPacket,
            ::LevelSoundManager::QueuedSoundBroadcastMultipleUserIdsPacket>>>
        mSoundPacketQueue;
    ::ll::TypedStorage<
        8,
        128,
        ::Bedrock::PubSub::Publisher<
            void(::SoundEventIdentifier const&, ::Vec3 const&, int, ::ActorSoundIdentifier const&, bool),
            ::Bedrock::PubSub::ThreadModel::MultiThreaded,
            0>>
        mOnLevelSoundEvent;
    ::ll::TypedStorage<
        8,
        128,
        ::Bedrock::PubSub::Publisher<void(::PlaySoundOptions const&), ::Bedrock::PubSub::ThreadModel::MultiThreaded, 0>>
        mOnLevelSoundEventWithVolumeAndPitch;
    ::ll::TypedStorage<
        8,
        128,
        ::Bedrock::PubSub::Publisher<void(::std::string const&), ::Bedrock::PubSub::ThreadModel::MultiThreaded, 0>>
        mOnStopLevelSoundEvent;
    ::ll::TypedStorage<8, 128, ::Bedrock::PubSub::Publisher<void(), ::Bedrock::PubSub::ThreadModel::MultiThreaded, 0>>
        mOnStopAllLevelSoundsEvent;
    ::ll::TypedStorage<8, 128, ::Bedrock::PubSub::Publisher<void(), ::Bedrock::PubSub::ThreadModel::MultiThreaded, 0>>
        mOnStopMusicEvent;
    ::ll::TypedStorage<
        8,
        128,
        ::Bedrock::PubSub::
            Publisher<void(::BlockPos const&, ::ServerSoundHandle), ::Bedrock::PubSub::ThreadModel::MultiThreaded, 0>>
        mOnRecordStartedEvent;
    ::ll::TypedStorage<
        8,
        128,
        ::Bedrock::PubSub::Publisher<void(::ServerSoundHandle), ::Bedrock::PubSub::ThreadModel::MultiThreaded, 0>>
                                                               mOnRecordStoppedEvent;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnPlayerDisconnectedSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnPlayerConnectedSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnPlayerLeftDimensionSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnPauseStateChangeSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    LevelSoundManager();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::Bedrock::PubSub::Connector<
        void(::SoundEventIdentifier const&, ::Vec3 const&, int, ::ActorSoundIdentifier const&, bool)>&
    getOnLevelSoundEventConnector() /*override*/;

    virtual ::Bedrock::PubSub::Connector<void(::PlaySoundOptions const&)>&
    getOnLevelSoundEventWithVolumeAndPitchConnector() /*override*/;

    virtual ::Bedrock::PubSub::Connector<void(::std::string const&)>& getOnStopLevelSoundEventConnector() /*override*/;

    virtual ::Bedrock::PubSub::Connector<void()>& getOnStopAllLevelSoundsEventConnector() /*override*/;

    virtual ::Bedrock::PubSub::Connector<void()>& getOnStopMusicEventConnector() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI LevelSoundManager(
        ::Bedrock::NotNullNonOwnerPtr<::SoundPlayerInterface>  soundPlayer,
        bool                                                   isClientSide,
        ::Bedrock::NotNullNonOwnerPtr<::LevelEventCoordinator> levelEventCoordinator,
        ::Bedrock::NotNullNonOwnerPtr<::PacketSender>          packetSender,
        bool                                                   isServerAuthSoundEnabled
    );

    MCNAPI void _queueSoundPacket(
        ::std::variant<
            ::LevelSoundManager::QueuedSoundSendPacket,
            ::LevelSoundManager::QueuedSoundBroadcastPacket,
            ::LevelSoundManager::QueuedSoundBroadcastUserIdPacket,
            ::LevelSoundManager::QueuedSoundBroadcastMultipleUserIdsPacket> packet
    );

    MCNAPI void
    _stopBroadcastsForPlayer(::NetworkIdentifierWithSubId const& player, ::std::optional<::DimensionType> dimension);

    MCNAPI void broadcastSoundEvent(
        ::IDimension&                  dimension,
        ::SoundEventIdentifier const&  soundEvent,
        ::Vec3 const&                  pos,
        int                            data,
        ::ActorSoundIdentifier const&  actorSoundIdentifier,
        bool                           isGlobal,
        ::Player*                      primaryLocalPlayer,
        ::std::optional<::Vec3> const& fireAtPosition
    );

    MCNAPI void broadcastSoundEvent(
        ::IDimension&                          dimension,
        ::SharedTypes::Legacy::LevelSoundEvent type,
        ::Vec3 const&                          pos,
        int                                    data,
        ::ActorSoundIdentifier const&          actorSoundIdentifier,
        bool                                   isGlobal,
        ::Player*                              primaryLocalPlayer,
        ::std::optional<::Vec3> const&         fireAtPosition
    );

    MCNAPI ::std::optional<::ServerSoundInstance> createServerSoundInstance(
        ::std::string const&                          soundEventName,
        int                                           loopCount,
        ::std::optional<::NetworkIdentifierWithSubId> recipient,
        ::std::optional<::BroadcastOptions>           broadcast
    );

    MCNAPI void onViewRegionMoved(
        ::NetworkIdentifierWithSubId const& player,
        ::BlockPos const&                   position,
        uint                                radius,
        ::DimensionType                     dimension
    );

    MCNAPI void playPredictiveSynchronizedSound(
        ::IDimension&                  dimension,
        ::SoundEventIdentifier const&  soundEvent,
        ::Vec3 const&                  pos,
        ::Player*                      targetPlayer,
        int                            data,
        ::ActorSoundIdentifier const&  actorSoundIdentifier,
        bool                           isGlobal,
        ::std::optional<::Vec3> const& fireAtPosition
    );

    MCNAPI void playPredictiveSynchronizedSound(
        ::IDimension&                          dimension,
        ::SharedTypes::Legacy::LevelSoundEvent type,
        ::Vec3 const&                          pos,
        ::Player*                              targetPlayer,
        int                                    data,
        ::ActorSoundIdentifier const&          actorSoundIdentifier,
        bool                                   isGlobal,
        ::std::optional<::Vec3> const&         fireAtPosition
    );

#ifdef LL_PLAT_C
    MCNAPI void playSound(::SharedTypes::Legacy::LevelSoundEvent type, ::Vec3 const& pos, float volume, float pitch);

    MCNAPI void playSound(
        ::SharedTypes::Legacy::LevelSoundEvent type,
        ::Vec3 const&                          pos,
        int                                    data,
        ::ActorSoundIdentifier const&          actorSoundIdentifier,
        bool                                   isGlobal
    );

    MCNAPI void playSoundForPlayerInDimension(
        ::DimensionType                        dimensionType,
        ::SharedTypes::Legacy::LevelSoundEvent type,
        ::Vec3 const&                          pos,
        int                                    data,
        ::ActorSoundIdentifier const&          actorSoundIdentifier,
        bool                                   isGlobal,
        ::Player*                              primaryLocalPlayer
    );
#endif

    MCNAPI void playSynchronizedSound_DEPRECATED(
        ::IDimension&                          dimension,
        ::SharedTypes::Legacy::LevelSoundEvent type,
        ::Vec3 const&                          pos,
        ::Player*                              primaryLocalPlayer,
        int                                    data,
        ::ActorSoundIdentifier const&          actorSoundIdentifier,
        bool                                   isGlobal,
        ::std::optional<::Vec3> const&         fireAtPosition
    );

#ifdef LL_PLAT_C
    MCNAPI void processQueuedSoundPackets();
#endif

    MCNAPI void registerPauseManagerCallback(::Bedrock::PubSub::Connector<void(bool)>& connector);

    MCNAPI void subscribeToPlayerConnectionEvents(::IPlayerConnectionConnector& connector);

    MCNAPI void subscribeToPlayerDimensionTransfers(::IPlayerDimensionTransferConnector& connector);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::Bedrock::NotNullNonOwnerPtr<::SoundPlayerInterface>  soundPlayer,
        bool                                                   isClientSide,
        ::Bedrock::NotNullNonOwnerPtr<::LevelEventCoordinator> levelEventCoordinator,
        ::Bedrock::NotNullNonOwnerPtr<::PacketSender>          packetSender,
        bool                                                   isServerAuthSoundEnabled
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Bedrock::PubSub::Connector<
        void(::SoundEventIdentifier const&, ::Vec3 const&, int, ::ActorSoundIdentifier const&, bool)>&
    $getOnLevelSoundEventConnector();

    MCNAPI ::Bedrock::PubSub::Connector<void(::PlaySoundOptions const&)>&
    $getOnLevelSoundEventWithVolumeAndPitchConnector();

    MCNAPI ::Bedrock::PubSub::Connector<void(::std::string const&)>& $getOnStopLevelSoundEventConnector();

    MCNAPI ::Bedrock::PubSub::Connector<void()>& $getOnStopAllLevelSoundsEventConnector();

    MCNAPI ::Bedrock::PubSub::Connector<void()>& $getOnStopMusicEventConnector();


    // NOLINTEND
};

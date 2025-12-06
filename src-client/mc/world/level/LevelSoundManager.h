#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Connector.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/network/NetworkIdentifierWithSubId.h"
#include "mc/network/packet/LevelSoundEventPacket.h"
#include "mc/world/level/ILevelSoundManagerConnector.h"

// auto generated forward declare list
// clang-format off
class ActorSoundIdentifier;
class IDimension;
class LevelEventCoordinator;
class PacketSender;
class Player;
class Vec3;
struct SoundPlayerInterface;
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
    struct QueuedSoundSendPacket {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 120, ::LevelSoundEventPacket> mPacket;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~QueuedSoundSendPacket();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
        // NOLINTEND
    };

    struct QueuedSoundBroadcastPacket {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 120, ::LevelSoundEventPacket> mPacket;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~QueuedSoundBroadcastPacket();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
        // NOLINTEND
    };

    struct QueuedSoundBroadcastUserIdPacket {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 120, ::LevelSoundEventPacket>      mPacket;
        ::ll::TypedStorage<8, 184, ::NetworkIdentifierWithSubId> mNetworkId;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~QueuedSoundBroadcastUserIdPacket();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
        // NOLINTEND
    };

    struct QueuedSoundBroadcastMultipleUserIdsPacket {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 120, ::LevelSoundEventPacket>                    mPacket;
        ::ll::TypedStorage<8, 24, ::std::vector<::NetworkIdentifierWithSubId>> mNetworkIds;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~QueuedSoundBroadcastMultipleUserIdsPacket();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
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
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::SoundPlayerInterface>>           mSoundPlayer;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::PacketSender>>                mLevelPacketSender;
    ::ll::TypedStorage<1, 1, bool>                                                          mIsClientSide;
    ::ll::TypedStorage<1, 1, bool>                                                          mServerAuthSoundEnabled;
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
            void(::SharedTypes::Legacy::LevelSoundEvent, ::Vec3 const&, int, ::ActorSoundIdentifier const&, bool),
            ::Bedrock::PubSub::ThreadModel::MultiThreaded,
            0>>
        mOnLevelSoundEvent;
    ::ll::TypedStorage<
        8,
        128,
        ::Bedrock::PubSub::Publisher<
            void(::std::string const&, ::Vec3 const&, float, float),
            ::Bedrock::PubSub::ThreadModel::MultiThreaded,
            0>>
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
    // NOLINTEND

public:
    // prevent constructor by default
    LevelSoundManager();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::Bedrock::PubSub::Connector<
        void(::SharedTypes::Legacy::LevelSoundEvent, ::Vec3 const&, int, ::ActorSoundIdentifier const&, bool)>&
    getOnLevelSoundEventConnector() /*override*/;

    // vIndex: 2
    virtual ::Bedrock::PubSub::Connector<void(::std::string const&, ::Vec3 const&, float, float)>&
    getOnLevelSoundEventWithVolumeAndPitchConnector() /*override*/;

    // vIndex: 3
    virtual ::Bedrock::PubSub::Connector<void(::std::string const&)>& getOnStopLevelSoundEventConnector() /*override*/;

    // vIndex: 4
    virtual ::Bedrock::PubSub::Connector<void()>& getOnStopAllLevelSoundsEventConnector() /*override*/;

    // vIndex: 5
    virtual ::Bedrock::PubSub::Connector<void()>& getOnStopMusicEventConnector() /*override*/;

    // vIndex: 0
    virtual ~LevelSoundManager() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LevelSoundManager(
        ::Bedrock::NotNullNonOwnerPtr<::SoundPlayerInterface>  soundPlayer,
        bool                                                   isClientSide,
        ::Bedrock::NotNullNonOwnerPtr<::LevelEventCoordinator> levelEventCoordinator,
        ::Bedrock::NotNullNonOwnerPtr<::PacketSender>          packetSender,
        bool                                                   isServerAuthSoundEnabled
    );

    MCAPI void _queueSoundPacket(
        ::std::variant<
            ::LevelSoundManager::QueuedSoundSendPacket,
            ::LevelSoundManager::QueuedSoundBroadcastPacket,
            ::LevelSoundManager::QueuedSoundBroadcastUserIdPacket,
            ::LevelSoundManager::QueuedSoundBroadcastMultipleUserIdsPacket> packet
    );

    MCAPI void broadcastSoundEvent(
        ::IDimension&                          dimension,
        ::SharedTypes::Legacy::LevelSoundEvent type,
        ::Vec3 const&                          pos,
        int                                    data,
        ::ActorSoundIdentifier const&          actorSoundIdentifier,
        bool                                   isGlobal,
        ::Player*                              primaryLocalPlayer
    );

    MCAPI void playPredictiveSynchronizedSound(
        ::IDimension&                          dimension,
        ::SharedTypes::Legacy::LevelSoundEvent type,
        ::Vec3 const&                          pos,
        ::Player*                              targetPlayer,
        int                                    data,
        ::ActorSoundIdentifier const&          actorSoundIdentifier,
        bool                                   isGlobal
    );

    MCAPI void playSynchronizedSound_DEPRECATED(
        ::IDimension&                          dimension,
        ::SharedTypes::Legacy::LevelSoundEvent type,
        ::Vec3 const&                          pos,
        ::Player*                              primaryLocalPlayer,
        int                                    data,
        ::ActorSoundIdentifier const&          actorSoundIdentifier,
        bool                                   isGlobal
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Bedrock::NotNullNonOwnerPtr<::SoundPlayerInterface>  soundPlayer,
        bool                                                   isClientSide,
        ::Bedrock::NotNullNonOwnerPtr<::LevelEventCoordinator> levelEventCoordinator,
        ::Bedrock::NotNullNonOwnerPtr<::PacketSender>          packetSender,
        bool                                                   isServerAuthSoundEnabled
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::Bedrock::PubSub::Connector<
        void(::SharedTypes::Legacy::LevelSoundEvent, ::Vec3 const&, int, ::ActorSoundIdentifier const&, bool)>&
    $getOnLevelSoundEventConnector();

    MCFOLD ::Bedrock::PubSub::Connector<void(::std::string const&, ::Vec3 const&, float, float)>&
    $getOnLevelSoundEventWithVolumeAndPitchConnector();

    MCFOLD ::Bedrock::PubSub::Connector<void(::std::string const&)>& $getOnStopLevelSoundEventConnector();

    MCAPI ::Bedrock::PubSub::Connector<void()>& $getOnStopAllLevelSoundsEventConnector();

    MCFOLD ::Bedrock::PubSub::Connector<void()>& $getOnStopMusicEventConnector();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Connector.h"
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/world/level/ILevelSoundManagerConnector.h"

// auto generated forward declare list
// clang-format off
class ActorSoundIdentifier;
class IDimension;
class LevelEventCoordinator;
class PacketSender;
class Player;
class SoundPlayerInterface;
class Vec3;
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
        ::ll::UntypedStorage<8, 112> mUnk60c58b;
        // NOLINTEND

    public:
        // prevent constructor by default
        QueuedSoundSendPacket& operator=(QueuedSoundSendPacket const&);
        QueuedSoundSendPacket(QueuedSoundSendPacket const&);
        QueuedSoundSendPacket();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~QueuedSoundSendPacket();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct QueuedSoundBroadcastPacket {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 112> mUnkff179a;
        // NOLINTEND

    public:
        // prevent constructor by default
        QueuedSoundBroadcastPacket& operator=(QueuedSoundBroadcastPacket const&);
        QueuedSoundBroadcastPacket(QueuedSoundBroadcastPacket const&);
        QueuedSoundBroadcastPacket();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~QueuedSoundBroadcastPacket();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct QueuedSoundBroadcastUserIdPacket {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 112> mUnkd66652;
        ::ll::UntypedStorage<8, 184> mUnked9d2e;
        // NOLINTEND

    public:
        // prevent constructor by default
        QueuedSoundBroadcastUserIdPacket& operator=(QueuedSoundBroadcastUserIdPacket const&);
        QueuedSoundBroadcastUserIdPacket(QueuedSoundBroadcastUserIdPacket const&);
        QueuedSoundBroadcastUserIdPacket();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~QueuedSoundBroadcastUserIdPacket();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct QueuedSoundBroadcastMultipleUserIdsPacket {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 112> mUnk4a5289;
        ::ll::UntypedStorage<8, 24>  mUnk5465e1;
        // NOLINTEND

    public:
        // prevent constructor by default
        QueuedSoundBroadcastMultipleUserIdsPacket& operator=(QueuedSoundBroadcastMultipleUserIdsPacket const&);
        QueuedSoundBroadcastMultipleUserIdsPacket(QueuedSoundBroadcastMultipleUserIdsPacket const&);
        QueuedSoundBroadcastMultipleUserIdsPacket();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~QueuedSoundBroadcastMultipleUserIdsPacket();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>  mUnk406f62;
    ::ll::UntypedStorage<8, 24>  mUnk3014c0;
    ::ll::UntypedStorage<1, 1>   mUnk9b5acc;
    ::ll::UntypedStorage<1, 1>   mUnkc1d14b;
    ::ll::UntypedStorage<8, 24>  mUnk56a928;
    ::ll::UntypedStorage<8, 24>  mUnk1b0ff2;
    ::ll::UntypedStorage<8, 128> mUnk92a7e1;
    ::ll::UntypedStorage<8, 128> mUnk8fd53d;
    ::ll::UntypedStorage<8, 128> mUnk9a160d;
    ::ll::UntypedStorage<8, 128> mUnk5bbd46;
    ::ll::UntypedStorage<8, 128> mUnkc7e910;
    // NOLINTEND

public:
    // prevent constructor by default
    LevelSoundManager& operator=(LevelSoundManager const&);
    LevelSoundManager(LevelSoundManager const&);
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

    MCNAPI void broadcastSoundEvent(
        ::IDimension&                          dimension,
        ::SharedTypes::Legacy::LevelSoundEvent type,
        ::Vec3 const&                          pos,
        int                                    data,
        ::ActorSoundIdentifier const&          actorSoundIdentifier,
        bool                                   isGlobal,
        ::Player*                              primaryLocalPlayer
    );

    MCNAPI void playPredictiveSynchronizedSound(
        ::IDimension&                          dimension,
        ::SharedTypes::Legacy::LevelSoundEvent type,
        ::Vec3 const&                          pos,
        ::Player*                              targetPlayer,
        int                                    data,
        ::ActorSoundIdentifier const&          actorSoundIdentifier,
        bool                                   isGlobal
    );

    MCNAPI void playSynchronizedSound_DEPRECATED(
        ::IDimension&                          dimension,
        ::SharedTypes::Legacy::LevelSoundEvent type,
        ::Vec3 const&                          pos,
        ::Player*                              primaryLocalPlayer,
        int                                    data,
        ::ActorSoundIdentifier const&          actorSoundIdentifier,
        bool                                   isGlobal
    );

    MCNAPI void stopSoundEvent(::std::string const& name);
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
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Bedrock::PubSub::Connector<
        void(::SharedTypes::Legacy::LevelSoundEvent, ::Vec3 const&, int, ::ActorSoundIdentifier const&, bool)>&
    $getOnLevelSoundEventConnector();

    MCNAPI ::Bedrock::PubSub::Connector<void(::std::string const&, ::Vec3 const&, float, float)>&
    $getOnLevelSoundEventWithVolumeAndPitchConnector();

    MCNAPI ::Bedrock::PubSub::Connector<void(::std::string const&)>& $getOnStopLevelSoundEventConnector();

    MCNAPI ::Bedrock::PubSub::Connector<void()>& $getOnStopAllLevelSoundsEventConnector();

    MCNAPI ::Bedrock::PubSub::Connector<void()>& $getOnStopMusicEventConnector();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

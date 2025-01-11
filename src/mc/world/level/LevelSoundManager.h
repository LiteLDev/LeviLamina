#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Connector.h"
#include "mc/deps/shared_types/LevelSoundEvent.h"
#include "mc/world/level/ILevelSoundManagerConnector.h"

// auto generated forward declare list
// clang-format off
class IDimension;
class LevelEventCoordinator;
class Player;
class SoundPlayerInterface;
class Vec3;
struct ActorDefinitionIdentifier;
// clang-format on

class LevelSoundManager : public ::ILevelSoundManagerConnector {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>  mUnk406f62;
    ::ll::UntypedStorage<8, 8>   mUnk7e7c75;
    ::ll::UntypedStorage<1, 1>   mUnk9b5acc;
    ::ll::UntypedStorage<1, 1>   mUnkc1d14b;
    ::ll::UntypedStorage<8, 24>  mUnk56a928;
    ::ll::UntypedStorage<8, 128> mUnka99fae;
    ::ll::UntypedStorage<8, 128> mUnk334827;
    ::ll::UntypedStorage<8, 128> mUnkf749fa;
    ::ll::UntypedStorage<8, 128> mUnkc1d9ac;
    ::ll::UntypedStorage<8, 128> mUnk19d345;
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
    virtual ::Bedrock::PubSub::Connector<void(
        ::SharedTypes::Legacy::LevelSoundEvent,
        ::Vec3 const&,
        int,
        ::ActorDefinitionIdentifier const&,
        bool,
        bool
    )>&
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
        ::Bedrock::NotNullNonOwnerPtr<::SoundPlayerInterface> const& soundPlayer,
        bool                                                         isClientSide,
        ::Bedrock::NotNullNonOwnerPtr<::LevelEventCoordinator>       levelEventCoordinator,
        bool                                                         isServerAuthSoundEnabled
    );

    MCAPI void broadcastSoundEvent(
        ::IDimension&                          dimension,
        ::SharedTypes::Legacy::LevelSoundEvent type,
        ::Vec3 const&                          pos,
        int                                    data,
        ::ActorDefinitionIdentifier const&     identifier,
        bool                                   isBabyMob,
        bool                                   isGlobal,
        ::Player*                              primaryLocalPlayer
    );

    MCAPI void playPredictiveSynchronizedSound(
        ::IDimension&                          dimension,
        ::SharedTypes::Legacy::LevelSoundEvent type,
        ::Vec3 const&                          pos,
        ::Player*                              targetPlayer,
        int                                    data,
        ::ActorDefinitionIdentifier const&     entityType,
        bool                                   isBabyMob,
        bool                                   isGlobal
    );

    MCAPI void playSound(
        ::SharedTypes::Legacy::LevelSoundEvent type,
        ::Vec3 const&                          pos,
        int                                    data,
        ::ActorDefinitionIdentifier const&     entityType,
        bool                                   isBabyMob,
        bool                                   isGlobal
    );

    MCAPI void playSynchronizedSound_DEPRECATED(
        ::IDimension&                          dimension,
        ::SharedTypes::Legacy::LevelSoundEvent type,
        ::Vec3 const&                          pos,
        ::Player*                              primaryLocalPlayer,
        int                                    data,
        ::ActorDefinitionIdentifier const&     entityType,
        bool                                   isBabyMob,
        bool                                   isGlobal
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Bedrock::NotNullNonOwnerPtr<::SoundPlayerInterface> const& soundPlayer,
        bool                                                         isClientSide,
        ::Bedrock::NotNullNonOwnerPtr<::LevelEventCoordinator>       levelEventCoordinator,
        bool                                                         isServerAuthSoundEnabled
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
    MCFOLD ::Bedrock::PubSub::Connector<void(
        ::SharedTypes::Legacy::LevelSoundEvent,
        ::Vec3 const&,
        int,
        ::ActorDefinitionIdentifier const&,
        bool,
        bool
    )>&
    $getOnLevelSoundEventConnector();

    MCFOLD ::Bedrock::PubSub::Connector<void(::std::string const&, ::Vec3 const&, float, float)>&
    $getOnLevelSoundEventWithVolumeAndPitchConnector();

    MCFOLD ::Bedrock::PubSub::Connector<void(::std::string const&)>& $getOnStopLevelSoundEventConnector();

    MCFOLD ::Bedrock::PubSub::Connector<void()>& $getOnStopAllLevelSoundsEventConnector();

    MCFOLD ::Bedrock::PubSub::Connector<void()>& $getOnStopMusicEventConnector();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

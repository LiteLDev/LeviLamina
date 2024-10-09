#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/game_refs/StackRefResult.h"
#include "mc/deps/puv/LevelSoundEvent.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class EnableNonOwnerReferences; }
namespace Bedrock::PubSub { class Subscription; }
// clang-format on

class LevelSoundManager : public ::Bedrock::EnableNonOwnerReferences {
public:
    // prevent constructor by default
    LevelSoundManager& operator=(LevelSoundManager const&);
    LevelSoundManager(LevelSoundManager const&);
    LevelSoundManager();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LevelSoundManager();

    MCAPI void broadcastSoundEvent(
        class IDimension&                       dimension,
        ::Puv::Legacy::LevelSoundEvent          type,
        class Vec3 const&                       pos,
        int                                     data,
        struct ActorDefinitionIdentifier const& identifier,
        bool                                    isBabyMob,
        bool                                    isGlobal,
        class Player*                           primaryLocalPlayer
    );

    MCAPI void playPredictiveSynchronizedSound(
        class IDimension&                       dimension,
        ::Puv::Legacy::LevelSoundEvent          type,
        class Vec3 const&                       pos,
        class Player*                           targetPlayer,
        int                                     data,
        struct ActorDefinitionIdentifier const& entityType,
        bool                                    isBabyMob,
        bool                                    isGlobal
    );

    MCAPI void playSound(std::string const& name, class Vec3 const& pos, float volume, float pitch);

    MCAPI void playSound(
        ::Puv::Legacy::LevelSoundEvent          type,
        class Vec3 const&                       pos,
        int                                     data,
        struct ActorDefinitionIdentifier const& entityType,
        bool                                    isBabyMob,
        bool                                    isGlobal
    );

    MCAPI void playSynchronizedSound_DEPRECATED(
        class IDimension&                       dimension,
        ::Puv::Legacy::LevelSoundEvent          type,
        class Vec3 const&                       pos,
        class Player*                           primaryLocalPlayer,
        int                                     data,
        struct ActorDefinitionIdentifier const& entityType,
        bool                                    isBabyMob,
        bool                                    isGlobal
    );

    MCAPI class Bedrock::PubSub::Subscription
    registerOnLevelSoundEventCallback(std::function<void(
                                          ::Puv::Legacy::LevelSoundEvent,
                                          class Vec3 const&,
                                          int,
                                          struct ActorDefinitionIdentifier const&,
                                          bool,
                                          bool
                                      )> callback);

    MCAPI void setLevelEventCoordinator(
        gsl::not_null<class StackRefResult<class LevelEventCoordinator>> const& levelEventCoordinator
    );

    // NOLINTEND
};

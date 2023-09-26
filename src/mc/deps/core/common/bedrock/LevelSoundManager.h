#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/EnableNonOwnerReferences.h"
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/world/AutomaticID.h"

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
    // symbol: ??1LevelSoundManager@@UEAA@XZ
    MCVAPI ~LevelSoundManager();

    // symbol: ??0LevelSoundManager@@QEAA@AEBV?$not_null@V?$NonOwnerPointer@VSoundPlayerInterface@@@Bedrock@@@gsl@@_N1@Z
    MCAPI
    LevelSoundManager(gsl::not_null<class Bedrock::NonOwnerPointer<class SoundPlayerInterface>> const&, bool, bool);

    // symbol:
    // ?broadcastSoundEvent@LevelSoundManager@@QEAAXAEAVIDimension@@W4LevelSoundEvent@@AEBVVec3@@HAEBUActorDefinitionIdentifier@@_N4PEAVPlayer@@@Z
    MCAPI void
    broadcastSoundEvent(class IDimension&, ::LevelSoundEvent, class Vec3 const&, int, struct ActorDefinitionIdentifier const&, bool, bool, class Player*);

    // symbol:
    // ?getSoundPlayer@LevelSoundManager@@QEBA?AV?$not_null@V?$NonOwnerPointer@VSoundPlayerInterface@@@Bedrock@@@gsl@@XZ
    MCAPI gsl::not_null<class Bedrock::NonOwnerPointer<class SoundPlayerInterface>> getSoundPlayer() const;

    // symbol:
    // ?playPredictiveSynchronizedSound@LevelSoundManager@@QEAAXAEAVIDimension@@W4LevelSoundEvent@@AEBVVec3@@PEAVPlayer@@HAEBUActorDefinitionIdentifier@@_N5@Z
    MCAPI void playPredictiveSynchronizedSound(
        class IDimension&,
        ::LevelSoundEvent,
        class Vec3 const&,
        class Player*,
        int,
        struct ActorDefinitionIdentifier const&,
        bool,
        bool
    );

    // symbol: ?playSound@LevelSoundManager@@QEAAXW4LevelSoundEvent@@AEBVVec3@@HAEBUActorDefinitionIdentifier@@_N3@Z
    MCAPI void
    playSound(::LevelSoundEvent, class Vec3 const&, int, struct ActorDefinitionIdentifier const&, bool, bool);

    // symbol:
    // ?playSound@LevelSoundManager@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVVec3@@MM@Z
    MCAPI void playSound(std::string const&, class Vec3 const&, float, float);

    // symbol: ?playSound@LevelSoundManager@@QEAAXW4LevelSoundEvent@@AEBVVec3@@MM@Z
    MCAPI void playSound(::LevelSoundEvent, class Vec3 const&, float, float);

    // symbol:
    // ?playSoundForPlayerInDimension@LevelSoundManager@@QEAAXV?$AutomaticID@VDimension@@H@@W4LevelSoundEvent@@AEBVVec3@@HAEBUActorDefinitionIdentifier@@_N4PEAVPlayer@@@Z
    MCAPI void
    playSoundForPlayerInDimension(DimensionType, ::LevelSoundEvent, class Vec3 const&, int, struct ActorDefinitionIdentifier const&, bool, bool, class Player*);

    // symbol:
    // ?playSynchronizedSound_DEPRECATED@LevelSoundManager@@QEAAXAEAVIDimension@@W4LevelSoundEvent@@AEBVVec3@@PEAVPlayer@@HAEBUActorDefinitionIdentifier@@_N5@Z
    MCAPI void playSynchronizedSound_DEPRECATED(
        class IDimension&,
        ::LevelSoundEvent,
        class Vec3 const&,
        class Player*,
        int,
        struct ActorDefinitionIdentifier const&,
        bool,
        bool
    );

    // symbol:
    // ?registerOnLevelSoundEventCallback@LevelSoundManager@@QEAA?AVSubscription@PubSub@Bedrock@@V?$function@$$A6AXW4LevelSoundEvent@@AEBVVec3@@HAEBUActorDefinitionIdentifier@@_N3@Z@std@@@Z
    MCAPI class Bedrock::PubSub::Subscription
        registerOnLevelSoundEventCallback(std::function<void(
                                              ::LevelSoundEvent,
                                              class Vec3 const&,
                                              int,
                                              struct ActorDefinitionIdentifier const&,
                                              bool,
                                              bool
                                          )>);

    // symbol: ?setLevelEventCoordinator@LevelSoundManager@@QEAAXV?$shared_ptr@VLevelEventCoordinator@@@std@@@Z
    MCAPI void setLevelEventCoordinator(std::shared_ptr<class LevelEventCoordinator>);

    // symbol: ?setPacketSender@LevelSoundManager@@QEAAXAEAVPacketSender@@@Z
    MCAPI void setPacketSender(class PacketSender&);

    // symbol: ?stopAllSounds@LevelSoundManager@@QEAAXXZ
    MCAPI void stopAllSounds();

    // symbol:
    // ?stopSoundEvent@LevelSoundManager@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void stopSoundEvent(std::string const&);

    // NOLINTEND
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/events/MinecraftEventing.h"

// auto generated forward declare list
// clang-format off
class Block;
class ItemDescriptor;
class Mob;
class MobEffectInstance;
class Player;
// clang-format on

namespace Social::Events {

class AchievementEventing {
public:
    // prevent constructor by default
    AchievementEventing& operator=(AchievementEventing const&);
    AchievementEventing(AchievementEventing const&);

public:
    // NOLINTBEGIN
    // symbol: ??0AchievementEventing@Events@Social@@QEAA@XZ
    MCAPI AchievementEventing();

    // symbol:
    // ?AwardAchievement@AchievementEventing@Events@Social@@QEAAXAEAVPlayer@@W4AchievementIds@MinecraftEventing@@@Z
    MCAPI void AwardAchievement(class Player&, ::MinecraftEventing::AchievementIds);

    // symbol: ?BlockBroken@AchievementEventing@Events@Social@@QEAAXAEBVPlayer@@AEBVBlock@@HHG@Z
    MCAPI void BlockBroken(
        class Player const& player,
        class Block const&  destroyedBlock,
        int                 method,
        int                 variantData,
        ushort              auxType
    );

    // symbol: ?CaravanChanged@AchievementEventing@Events@Social@@QEAAXAEAVMob@@H@Z
    MCAPI void CaravanChanged(class Mob& mob, int caravanSize);

    // symbol: ?ItemUsed@AchievementEventing@Events@Social@@QEAAXAEBVPlayer@@AEBVItemDescriptor@@I@Z
    MCAPI void ItemUsed(class Player const& player, class ItemDescriptor const& item, uint useMethod);

    // symbol: ?JukeboxUsed@AchievementEventing@Events@Social@@QEAAXAEBVPlayer@@AEBVItemDescriptor@@@Z
    MCAPI void JukeboxUsed(class Player const& player, class ItemDescriptor const& disc);

    // symbol: ?MobEffectChanged@AchievementEventing@Events@Social@@QEAAXAEBVPlayer@@AEBVMobEffectInstance@@H@Z
    MCAPI void MobEffectChanged(class Player const& player, class MobEffectInstance const& effectInstance, int change);

    // symbol: ?PlayerBounced@AchievementEventing@Events@Social@@QEAAXAEBVPlayer@@AEBVBlock@@HH@Z
    MCAPI void PlayerBounced(class Player const& player, class Block const& block, int bounceHeight, int auxType);

    // symbol: ?PlayerTeleported@AchievementEventing@Events@Social@@QEAAXAEAVPlayer@@MHH@Z
    MCAPI void PlayerTeleported(class Player& player, float metersTravelled, int cause, int sourceType);

    // symbol: ?PlayerTravelled@AchievementEventing@Events@Social@@QEAAXAEBVPlayer@@MHH@Z
    MCAPI void PlayerTravelled(
        class Player const& player,
        float               metersTravelledSinceLastEvent,
        int                 travelMethodType,
        int                 newBiome
    );

    // symbol: ??1AchievementEventing@Events@Social@@QEAA@XZ
    MCAPI ~AchievementEventing();

    // NOLINTEND
};

}; // namespace Social::Events

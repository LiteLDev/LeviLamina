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
    AchievementEventing& operator=(AchievementEventing const&) = delete;
    AchievementEventing(AchievementEventing const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0AchievementEventing\@Events\@Social\@\@QEAA\@XZ
     */
    MCAPI AchievementEventing();
    /**
     * @symbol
     * ?AwardAchievement\@AchievementEventing\@Events\@Social\@\@QEAAXAEAVPlayer\@\@W4AchievementIds\@MinecraftEventing\@\@\@Z
     */
    MCAPI void AwardAchievement(class Player&, enum class MinecraftEventing::AchievementIds);
    /**
     * @symbol ?BlockBroken\@AchievementEventing\@Events\@Social\@\@QEAAXAEBVPlayer\@\@AEBVBlock\@\@HHG\@Z
     */
    MCAPI void BlockBroken(class Player const&, class Block const&, int, int, unsigned short);
    /**
     * @symbol ?CaravanChanged\@AchievementEventing\@Events\@Social\@\@QEAAXAEAVMob\@\@H\@Z
     */
    MCAPI void CaravanChanged(class Mob&, int);
    /**
     * @symbol ?ItemUsed\@AchievementEventing\@Events\@Social\@\@QEAAXAEBVPlayer\@\@AEBVItemDescriptor\@\@I\@Z
     */
    MCAPI void ItemUsed(class Player const&, class ItemDescriptor const&, unsigned int);
    /**
     * @symbol ?JukeboxUsed\@AchievementEventing\@Events\@Social\@\@QEAAXAEBVPlayer\@\@AEBVItemDescriptor\@\@\@Z
     */
    MCAPI void JukeboxUsed(class Player const&, class ItemDescriptor const&);
    /**
     * @symbol
     * ?MobEffectChanged\@AchievementEventing\@Events\@Social\@\@QEAAXAEBVPlayer\@\@AEBVMobEffectInstance\@\@H\@Z
     */
    MCAPI void MobEffectChanged(class Player const&, class MobEffectInstance const&, int);
    /**
     * @symbol ?PlayerBounced\@AchievementEventing\@Events\@Social\@\@QEAAXAEBVPlayer\@\@AEBVBlock\@\@HH\@Z
     */
    MCAPI void PlayerBounced(class Player const&, class Block const&, int, int);
    /**
     * @symbol ?PlayerTeleported\@AchievementEventing\@Events\@Social\@\@QEAAXAEBVPlayer\@\@MHH\@Z
     */
    MCAPI void PlayerTeleported(class Player const&, float, int, int);
    /**
     * @symbol ?PlayerTravelled\@AchievementEventing\@Events\@Social\@\@QEAAXAEBVPlayer\@\@MHH\@Z
     */
    MCAPI void PlayerTravelled(class Player const&, float, int, int);
    /**
     * @symbol ??1AchievementEventing\@Events\@Social\@\@QEAA\@XZ
     */
    MCAPI ~AchievementEventing();
    // NOLINTEND
};

}; // namespace Social::Events

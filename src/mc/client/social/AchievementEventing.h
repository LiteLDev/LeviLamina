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
    MCAPI AchievementEventing();

    MCAPI void AwardAchievement(class Player&, ::MinecraftEventing::AchievementIds);

    MCAPI void BlockBroken(
        class Player const& player,
        class Block const&  destroyedBlock,
        int                 method,
        int                 variantData,
        ushort              auxType
    );

    MCAPI void CaravanChanged(class Mob& mob, int caravanSize);

    MCAPI void ItemUsed(class Player const& player, class ItemDescriptor const& item, uint useMethod);

    MCAPI void JukeboxUsed(class Player const& player, class ItemDescriptor const& disc);

    MCAPI void MobEffectChanged(class Player const& player, class MobEffectInstance const& effectInstance, int change);

    MCAPI void PlayerBounced(class Player const& player, class Block const& block, int bounceHeight, int auxType);

    MCAPI void PlayerTeleported(class Player& player, float metersTravelled, int cause, int sourceType);

    MCAPI void PlayerTravelled(
        class Player const& player,
        float               metersTravelledSinceLastEvent,
        int                 travelMethodType,
        int                 newBiome
    );

    MCAPI ~AchievementEventing();

    // NOLINTEND
};

}; // namespace Social::Events

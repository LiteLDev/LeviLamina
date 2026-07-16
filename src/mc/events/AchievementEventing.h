#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/events/MinecraftEventing.h"

// auto generated forward declare list
// clang-format off
class ItemDescriptor;
class Mob;
class MobEffectInstance;
class Player;
struct DimensionType;
// clang-format on

namespace Social::Events {

class AchievementEventing {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk266bfd;
    // NOLINTEND

public:
    // prevent constructor by default
    AchievementEventing& operator=(AchievementEventing const&);
    AchievementEventing(AchievementEventing const&);
    AchievementEventing();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void AwardAchievement(::Player& player, ::MinecraftEventing::AchievementIds achievementId);

#ifdef LL_PLAT_C
    MCNAPI void BossKilled(::Player const& player, int partySize, int64 bossUniqueId, int bossType);

    MCNAPI void CaravanChanged(::Mob& mob, int caravanSize);

    MCNAPI void CauldronUsed(::Player const& player, short contentsType, uint contentsColor, short fillLevel);

    MCNAPI void ItemSmelted(::Player const& player, ::ItemDescriptor const& item, ::ItemDescriptor const& lastFuelItem);
#endif

    MCNAPI void MobEffectChanged(::Player const& player, ::MobEffectInstance const& effectInstance, int change);

#ifdef LL_PLAT_C
    MCNAPI void PlayerSaved(::Player& player);
#endif

    MCNAPI void PlayerTeleported(::Player& player, float metersTravelled, int cause, int sourceType);

#ifdef LL_PLAT_C
    MCNAPI void PortalUsed(::Player& player, ::DimensionType const& dimToId, ::DimensionType const& dimFromId);

    MCNAPI void PotionBrewed(::Player const& player, ::ItemDescriptor const& item, uint itemCount);

    MCNAPI void TargetBlockHit(::Player& player, int redstoneLevel);

    MCNAPI void waxedOrWaxedOf(::Player& player, int blockID);
#endif
    // NOLINTEND
};

} // namespace Social::Events

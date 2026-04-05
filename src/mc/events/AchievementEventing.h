#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/events/MinecraftEventing.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class Dimension;
class ItemDescriptor;
class ItemInstance;
class Mob;
class MobEffectInstance;
class Player;
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

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI AchievementEventing();

    MCNAPI void AwardAchievement(::Player& player, ::MinecraftEventing::AchievementIds achievementId);

#ifdef LL_PLAT_C
    MCNAPI void BlockPlaced(::Player const& player, ::Block const& placedBlock, bool underWater, ushort auxType);

    MCNAPI void BossKilled(::Player const& player, int partySize, int64 bossUniqueId, int bossType);

    MCNAPI void CaravanChanged(::Mob& mob, int caravanSize);

    MCNAPI void CauldronUsed(::Player const& player, short contentsType, uint contentsColor, short fillLevel);

    MCNAPI void EndOfDay(::Player const& player);

    MCNAPI void ItemAcquired(
        ::Player const&         player,
        ::ItemDescriptor const& item,
        int                     auxType,
        uint                    amountAcquired,
        int                     acquisitionMethod
    );

    MCNAPI void ItemCrafted(
        ::Player const&       player,
        int                   craftingSessionId,
        bool                  craftingTable,
        ::ItemInstance const& item,
        bool                  recipeBook,
        bool                  hadSearchString,
        bool                  craftedAutomatically,
        int                   startingTabId,
        int                   endingTabId,
        int                   numTabsChanged,
        bool                  filterOn,
        bool                  recipeBookShown
    );

    MCNAPI void ItemNamed(::Player const& player, ::ItemDescriptor const& item);

    MCNAPI void ItemSmelted(::Player const& player, ::ItemDescriptor const& item, ::ItemDescriptor const& lastFuelItem);

    MCNAPI void ItemSmithied(::Player& player, ::ItemDescriptor const& templateItem);
#endif

    MCNAPI void ItemUsed(::Player const& player, ::ItemDescriptor const& item, uint useMethod);

    MCNAPI void MobEffectChanged(::Player const& player, ::MobEffectInstance const& effectInstance, int change);

#ifdef LL_PLAT_C
    MCNAPI void MobInteracted(
        ::Player const& player,
        int             legacyInteractedEntityType,
        int             interactionType,
        int             interactedEntityVariant,
        uchar           interactedEntityColor
    );

    MCNAPI void MobKilled(
        ::Player const&      player,
        ::Actor*             entKiller,
        ::Mob&               mobKilled,
        uint                 method,
        ::std::string const& traderName,
        int                  traderTier
    );

    MCNAPI void PiglinBarter(::Player const& player, ::std::string const& itemUsed, bool wasTargetingBarteringPlayer);
#endif

    MCNAPI void PlayerBounced(::Player const& player, ::Block const& block, int bounceHeight, int auxType);

#ifdef LL_PLAT_C
    MCNAPI void PlayerSaved(::Player& player);
#endif

    MCNAPI void PlayerTeleported(::Player& player, float metersTravelled, int cause, int sourceType);

    MCNAPI void
    PlayerTravelled(::Player const& player, float metersTravelledSinceLastEvent, int travelMethodType, int newBiome);

#ifdef LL_PLAT_C
    MCNAPI void PortalUsed(::Player& player, ::DimensionType const& dimToId, ::DimensionType const& dimFromId);

    MCNAPI void PotionBrewed(::Player const& player, ::ItemDescriptor const& item, uint itemCount);

    MCNAPI void RaidUpdated(::Player const& player, int currentwave, int totalWaves, bool success);

    MCNAPI void TargetBlockHit(::Player& player, int redstoneLevel);

    MCNAPI void TradeCompleted(
        ::Player const&         player,
        ::Actor*                trader,
        ::ItemDescriptor const& itemA,
        ::ItemDescriptor const& itemB,
        ::ItemInstance const&   tradedFor,
        int                     traderEmeraldCount
    );

    MCNAPI void waxedOrWaxedOf(::Player& player, int blockID);
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};

} // namespace Social::Events

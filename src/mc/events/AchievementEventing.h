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
    ::ll::UntypedStorage<8, 24> mUnkd1617b;
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

    MCNAPI_C void BlockPlaced(::Player const& player, ::Block const& placedBlock, bool underWater, ushort auxType);

    MCNAPI_C void BossKilled(::Player const& player, int partySize, int64 bossUniqueId, int bossType);

    MCNAPI void CaravanChanged(::Mob& mob, int caravanSize);

    MCNAPI_C void CauldronUsed(::Player const& player, short contentsType, uint contentsColor, short fillLevel);

    MCNAPI_C void EndOfDay(::Player const& player);

    MCNAPI_C void ItemAcquired(
        ::Player const&         player,
        ::ItemDescriptor const& item,
        int                     auxType,
        uint                    amountAcquired,
        int                     acquisitionMethod
    );

    MCNAPI_C void ItemCrafted(
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

    MCNAPI_C void ItemNamed(::Player const& player, ::ItemDescriptor const& item);

    MCNAPI_C void
    ItemSmelted(::Player const& player, ::ItemDescriptor const& item, ::ItemDescriptor const& lastFuelItem);

    MCNAPI_C void ItemSmithied(::Player& player, ::ItemDescriptor const& templateItem);

    MCNAPI void ItemUsed(::Player const& player, ::ItemDescriptor const& item, uint useMethod);

    MCNAPI void JukeboxUsed(::Player const& player, ::ItemDescriptor const& disc);

    MCNAPI void MobEffectChanged(::Player const& player, ::MobEffectInstance const& effectInstance, int change);

    MCNAPI_C void MobInteracted(
        ::Player const& player,
        int             legacyInteractedEntityType,
        int             interactionType,
        int             interactedEntityVariant,
        uchar           interactedEntityColor
    );

    MCNAPI_C void MobKilled(
        ::Player const&      player,
        ::Actor*             entKiller,
        ::Mob&               mobKilled,
        uint                 method,
        ::std::string const& traderName,
        int                  traderTier
    );

    MCNAPI_C void MultiplayerRoundEnd(::Player const& player, int exitStatus);

    MCNAPI_C void MultiplayerRoundStart(::Player const& player);

    MCNAPI_C void PiglinBarter(::Player const& player, ::std::string const& itemUsed, bool wasTargetingBarteringPlayer);

    MCNAPI void PlayerBounced(::Player const& player, ::Block const& block, int bounceHeight, int auxType);

    MCNAPI_C void PlayerSaved(::Player& player);

    MCNAPI void PlayerTeleported(::Player& player, float metersTravelled, int cause, int sourceType);

    MCNAPI void
    PlayerTravelled(::Player const& player, float metersTravelledSinceLastEvent, int travelMethodType, int newBiome);

    MCNAPI_C void PortalUsed(::Player& player, ::DimensionType const& dimToId, ::DimensionType const& dimFromId);

    MCNAPI_C void PotionBrewed(::Player const& player, ::ItemDescriptor const& item, uint itemCount);

    MCNAPI_C void RaidUpdated(::Player const& player, int currentwave, int totalWaves, bool success);

    MCNAPI_C void TargetBlockHit(::Player& player, int redstoneLevel);

    MCNAPI_C void TradeCompleted(
        ::Player const&         player,
        ::Actor*                trader,
        ::ItemDescriptor const& itemA,
        ::ItemDescriptor const& itemB,
        ::ItemInstance const&   tradedFor,
        int                     traderEmeraldCount
    );

    MCNAPI_C void waxedOrWaxedOf(::Player& player, int blockID);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::unordered_map<::std::string, ::std::pair<short, short>>& mLegacyIdMap();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};

} // namespace Social::Events

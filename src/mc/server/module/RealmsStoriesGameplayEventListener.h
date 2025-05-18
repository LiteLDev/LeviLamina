#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/world/events/ActorEventListener.h"
#include "mc/world/events/EventListenerDispatcher.h"
#include "mc/world/events/EventResult.h"
#include "mc/world/events/PlayerEventListener.h"
#include "mc/world/level/storage/RealmEventId.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Dimension;
class IRealmEventLogger;
class ItemEnchants;
class ItemInstance;
class ItemStack;
class LevelStorage;
class Player;
class RealmsStoriesData;
class Vec3;
struct ActorAcquiredItemEvent;
struct ActorKilledEvent;
struct PlayerUseNameTagEvent;
namespace Json { class Value; }
// clang-format on

class RealmsStoriesGameplayEventListener : public ::EventListenerDispatcher<::ActorEventListener>,
                                           public ::EventListenerDispatcher<::PlayerEventListener> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_map<uint64, ::Vec3>>  mLastPosChecked;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::RealmsStoriesData>> mRealmsStoriesData;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::IRealmEventLogger>> mRealmEventLogger;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsStoriesGameplayEventListener();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 43
    virtual ::EventResult onEvent(::ActorAcquiredItemEvent const& actorAcquiredItemEvent) /*override*/;

    // vIndex: 32
    virtual ::EventResult onEvent(::ActorKilledEvent const& actorKilledEvent) /*override*/;

    // vIndex: 67
    virtual ::EventResult onEvent(::PlayerUseNameTagEvent const& playerUseNameTagEvent) /*override*/;

    // vIndex: 16
    virtual ::EventResult onPlayerMove(::Player& player) /*override*/;

    // vIndex: 2
    virtual ::EventResult onPlayerPortalBuilt(::Player& player, ::DimensionType dimensionBuiltIn) /*override*/;

    // vIndex: 3
    virtual ::EventResult
    onPlayerPortalUsed(::Player& player, ::DimensionType fromDimension, ::DimensionType toDimension) /*override*/;

    // vIndex: 4
    virtual ::EventResult onPlayerPoweredBeacon(::Player const& player, int level) /*override*/;

    // vIndex: 33
    virtual ::EventResult onPlayerCraftedItem(
        ::Player&                   player,
        ::ItemInstance const&       craftedItem,
        bool                        recipeBook,
        bool                        hadSearchString,
        bool                        craftedAutomatically,
        int                         startingTabId,
        int                         endingTabId,
        int                         numTabsChanged,
        bool                        filterOn,
        bool                        recipeBookShown,
        ::std::vector<short> const& ingredientItemIDs
    ) /*override*/;

    // vIndex: 29
    virtual ::EventResult
    onPlayerEnchantedItem(::Player& player, ::ItemStack const& item, ::ItemEnchants const& enchants) /*override*/;

    // vIndex: 0
    virtual ~RealmsStoriesGameplayEventListener() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RealmsStoriesGameplayEventListener(
        ::LevelStorage&                        levelStorage,
        ::std::unique_ptr<::IRealmEventLogger> realmEventLogger
    );

    MCNAPI void _checkForBiomeRealmEvents(::Player const& player);

    MCNAPI void _checkForStructureRealmEvents(::Player const& player);

    MCNAPI void _handlePillagerKilledEvent(::Actor const& killedActor, ::ActorKilledEvent const& actorKilledEvent);

    MCNAPI void
    _publishEventForRealmsService(::RealmEventId id, ::std::string const& xuid, ::Json::Value const& metadata) const;

    MCNAPI void _publishLocationWorldEventIfFirstTime(::RealmEventId id, ::Player const& player);

    MCNAPI void
    _publishPlayerEventIfFirstTime(::RealmEventId id, ::std::string const& playerXuid, ::Json::Value const& metadata);

    MCNAPI void _publishWorldEventFirstOrOtherTime(
        ::RealmEventId       firstTimeId,
        ::RealmEventId       otherTimeId,
        ::std::string const& xuid
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::set<::std::string> _getXuidsInKillProximity(::Actor const& killedActor, float xz, float y);

    MCNAPI static ::std::string _playerXuidsToString(::std::set<::std::string> const& xuids);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::LevelStorage& levelStorage, ::std::unique_ptr<::IRealmEventLogger> realmEventLogger);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::EventResult $onEvent(::ActorAcquiredItemEvent const& actorAcquiredItemEvent);

    MCNAPI ::EventResult $onEvent(::ActorKilledEvent const& actorKilledEvent);

    MCNAPI ::EventResult $onEvent(::PlayerUseNameTagEvent const& playerUseNameTagEvent);

    MCNAPI ::EventResult $onPlayerMove(::Player& player);

    MCNAPI ::EventResult $onPlayerPortalBuilt(::Player& player, ::DimensionType dimensionBuiltIn);

    MCNAPI ::EventResult
    $onPlayerPortalUsed(::Player& player, ::DimensionType fromDimension, ::DimensionType toDimension);

    MCNAPI ::EventResult $onPlayerPoweredBeacon(::Player const& player, int level);

    MCNAPI ::EventResult $onPlayerCraftedItem(
        ::Player&                   player,
        ::ItemInstance const&       craftedItem,
        bool                        recipeBook,
        bool                        hadSearchString,
        bool                        craftedAutomatically,
        int                         startingTabId,
        int                         endingTabId,
        int                         numTabsChanged,
        bool                        filterOn,
        bool                        recipeBookShown,
        ::std::vector<short> const& ingredientItemIDs
    );

    MCNAPI ::EventResult
    $onPlayerEnchantedItem(::Player& player, ::ItemStack const& item, ::ItemEnchants const& enchants);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForEventListenerDispatcherActorEventListener();

    MCNAPI static void** $vftableForEventListenerDispatcherPlayerEventListener();
    // NOLINTEND
};

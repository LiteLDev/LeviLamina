#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/world/events/EventListenerDispatcher.h"
#include "mc/world/events/EventResult.h"
#include "mc/world/level/storage/RealmEventId.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorEventListener;
class Dimension;
class IRealmEventLogger;
class ItemEnchants;
class ItemInstance;
class ItemStack;
class LevelStorage;
class Player;
class PlayerEventListener;
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
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 41
    virtual ::EventResult onEvent(::ActorAcquiredItemEvent const& actorAcquiredItemEvent) /*override*/;

    // vIndex: 30
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
    MCAPI RealmsStoriesGameplayEventListener(
        ::LevelStorage&                        levelStorage,
        ::std::unique_ptr<::IRealmEventLogger> realmEventLogger
    );

    MCAPI void _checkForBiomeRealmEvents(::Player const& player);

    MCAPI void _checkForStructureRealmEvents(::Player const& player);

    MCAPI void _handlePillagerKilledEvent(::Actor const& killedActor, ::ActorKilledEvent const& actorKilledEvent);

    MCAPI void
    _publishEventForRealmsService(::RealmEventId id, ::std::string const& xuid, ::Json::Value const& metadata) const;

    MCAPI void _publishLocationWorldEventIfFirstTime(::RealmEventId id, ::Player const& player);

    MCAPI void
    _publishPlayerEventIfFirstTime(::RealmEventId id, ::std::string const& playerXuid, ::Json::Value const& metadata);

    MCAPI void _publishWorldEventFirstOrOtherTime(
        ::RealmEventId       firstTimeId,
        ::RealmEventId       otherTimeId,
        ::std::string const& xuid
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::set<::std::string> _getXuidsInKillProximity(::Actor const& killedActor, float xz, float y);

    MCAPI static ::std::string _playerXuidsToString(::std::set<::std::string> const& xuids);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::LevelStorage& levelStorage, ::std::unique_ptr<::IRealmEventLogger> realmEventLogger);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::EventResult $onEvent(::ActorAcquiredItemEvent const& actorAcquiredItemEvent);

    MCAPI ::EventResult $onEvent(::ActorKilledEvent const& actorKilledEvent);

    MCAPI ::EventResult $onEvent(::PlayerUseNameTagEvent const& playerUseNameTagEvent);

    MCAPI ::EventResult $onPlayerMove(::Player& player);

    MCAPI ::EventResult $onPlayerPortalBuilt(::Player& player, ::DimensionType dimensionBuiltIn);

    MCAPI ::EventResult
    $onPlayerPortalUsed(::Player& player, ::DimensionType fromDimension, ::DimensionType toDimension);

    MCAPI ::EventResult $onPlayerPoweredBeacon(::Player const& player, int level);

    MCAPI ::EventResult $onPlayerCraftedItem(
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

    MCAPI ::EventResult
    $onPlayerEnchantedItem(::Player& player, ::ItemStack const& item, ::ItemEnchants const& enchants);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftableForEventListenerDispatcherActorEventListener();

    MCAPI static void** $vftableForEventListenerDispatcherPlayerEventListener();
    // NOLINTEND
};

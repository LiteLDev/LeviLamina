#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/ActorEventListener.h"
#include "mc/world/events/EventListenerDispatcher.h"
#include "mc/world/events/EventResult.h"
#include "mc/world/events/PlayerEventListener.h"

// auto generated forward declare list
// clang-format off
class IRealmEventLogger;
class ItemEnchants;
class ItemInstance;
class ItemStack;
class Player;
class RealmsStoriesData;
class Vec3;
struct ActorAcquiredItemEvent;
struct ActorKilledEvent;
struct DimensionType;
struct PlayerUseNameTagEvent;
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
    virtual ::EventResult onEvent(::ActorAcquiredItemEvent const&) /*override*/;

    virtual ::EventResult onEvent(::ActorKilledEvent const&) /*override*/;

    virtual ::EventResult onEvent(::PlayerUseNameTagEvent const&) /*override*/;

    virtual ::EventResult onPlayerMove(::Player& player) /*override*/;

    virtual ::EventResult onPlayerPortalBuilt(::Player& player, ::DimensionType dimensionBuiltIn) /*override*/;

    virtual ::EventResult
    onPlayerPortalUsed(::Player& player, ::DimensionType fromDimension, ::DimensionType toDimension) /*override*/;

    virtual ::EventResult onPlayerPoweredBeacon(::Player const& player, int level) /*override*/;

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

    virtual ::EventResult
    onPlayerEnchantedItem(::Player& player, ::ItemStack const& item, ::ItemEnchants const& enchants) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

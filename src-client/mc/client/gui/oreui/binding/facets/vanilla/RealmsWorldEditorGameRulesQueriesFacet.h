#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/util/SubscribedValue.h"

// auto generated forward declare list
// clang-format off
namespace Realms { class RealmsWorldEditor; }
// clang-format on

namespace OreUI {

class RealmsWorldEditorGameRulesQueriesFacet
: public ::OreUI::FacetBase_DEPRECATED<::OreUI::RealmsWorldEditorGameRulesQueriesFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Realms::RealmsWorldEditor>> mRealmsWorldEditor;
    ::ll::TypedStorage<1, 1, bool>                                            mIsDirty;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                mRealmWorldChangeSubscription;
    ::ll::TypedStorage<8, 24, ::SubscribedValue<bool>>                        mUseShowCoordinatesSubVal;
    ::ll::TypedStorage<8, 24, ::SubscribedValue<bool>>                        mUseShowDaysPlayedSubVal;
    ::ll::TypedStorage<8, 24, ::SubscribedValue<bool>>                        mUseRecipesUnlockSubVal;
    ::ll::TypedStorage<8, 24, ::SubscribedValue<bool>>                        mUseFireSpreadsSubVal;
    ::ll::TypedStorage<8, 24, ::SubscribedValue<bool>>                        mUseTNTExplodesSubVal;
    ::ll::TypedStorage<8, 24, ::SubscribedValue<bool>>                        mUseRespawnBlocksExplodeSubVal;
    ::ll::TypedStorage<8, 24, ::SubscribedValue<bool>>                        mUseMobsDropLootSubVal;
    ::ll::TypedStorage<8, 24, ::SubscribedValue<bool>>                        mUseNaturalRegenerationSubVal;
    ::ll::TypedStorage<8, 24, ::SubscribedValue<bool>>                        mUseTileDropsSubVal;
    ::ll::TypedStorage<8, 24, ::SubscribedValue<int>>                         mSleepSkipNightSubVal;
    ::ll::TypedStorage<8, 24, ::SubscribedValue<bool>>                        mUseImmediateRespawnSubVal;
    ::ll::TypedStorage<8, 24, ::SubscribedValue<int>>                         mRespawnRadiusSubVal;
    ::ll::TypedStorage<8, 24, ::SubscribedValue<int>>                         mRandomTickSpeedSubVal;
    ::ll::TypedStorage<8, 24, ::SubscribedValue<bool>>                        mKeepInventorySubVal;
    ::ll::TypedStorage<8, 24, ::SubscribedValue<bool>>                        mMobSpawnSubVal;
    ::ll::TypedStorage<8, 24, ::SubscribedValue<bool>>                        mMobGriefingSubVal;
    ::ll::TypedStorage<8, 24, ::SubscribedValue<bool>>                        mEntityDropSubVal;
    ::ll::TypedStorage<8, 24, ::SubscribedValue<bool>>                        mWeatherCycleSubVal;
    ::ll::TypedStorage<8, 24, ::SubscribedValue<bool>>                        mCommandBlocksEnabledSubVal;
    ::ll::TypedStorage<8, 24, ::SubscribedValue<bool>>                        mFriendlyFireEnabledSubVal;
    ::ll::TypedStorage<8, 24, ::SubscribedValue<int>>                         mPlayerWaypointModeSubVal;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsWorldEditorGameRulesQueriesFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RealmsWorldEditorGameRulesQueriesFacet() /*override*/ = default;

    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit RealmsWorldEditorGameRulesQueriesFacet(
        ::std::shared_ptr<::Realms::RealmsWorldEditor> realmsWorldEditor
    );

    MCNAPI void _refreshRealmWorldSubscriptions();

    MCNAPI bool getCommandBlocksEnabled() const;

    MCNAPI bool getEntitiesDropLoot() const;

    MCNAPI bool getFireSpreads() const;

    MCNAPI bool getFriendlyFireEnabled() const;

    MCNAPI bool getImmediateRespawn() const;

    MCNAPI bool getKeepInventory() const;

    MCNAPI bool getMobGriefing() const;

    MCNAPI bool getMobSpawn() const;

    MCNAPI bool getMobsDropLoot() const;

    MCNAPI bool getNaturalRegeneration() const;

    MCNAPI int getPlayerWaypointsMode() const;

    MCNAPI int getRandomTickSpeed() const;

    MCNAPI bool getRecipesUnlock() const;

    MCNAPI bool getRespawnBlocksExplode() const;

    MCNAPI int getRespawnRadius() const;

    MCNAPI bool getShowCoordinates() const;

    MCNAPI bool getShowDaysPlayed() const;

    MCNAPI bool getSleepSkipNight() const;

    MCNAPI int getSleepSkipNightPercent() const;

    MCNAPI bool getTNTExplodes() const;

    MCNAPI bool getTileDrops() const;

    MCNAPI bool getWeatherCycle() const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::shared_ptr<::Realms::RealmsWorldEditor> realmsWorldEditor);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $update();
    // NOLINTEND
};

} // namespace OreUI

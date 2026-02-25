#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/util/SubscribedValue.h"

// auto generated forward declare list
// clang-format off
namespace Realms { struct RealmsWorldEditor; }
// clang-format on

namespace OreUI {

class RealmsWorldEditorGameRulesQueriesFacet
: public ::OreUI::FacetBase<::OreUI::RealmsWorldEditorGameRulesQueriesFacet> {
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
    MCAPI explicit RealmsWorldEditorGameRulesQueriesFacet(
        ::std::shared_ptr<::Realms::RealmsWorldEditor> realmsWorldEditor
    );

    MCAPI void _refreshRealmWorldSubscriptions();

    MCFOLD bool getFireSpreads() const;

    MCFOLD bool getImmediateRespawn() const;

    MCFOLD bool getMobsDropLoot() const;

    MCFOLD bool getNaturalRegeneration() const;

    MCFOLD bool getRecipesUnlock() const;

    MCFOLD bool getRespawnBlocksExplode() const;

    MCAPI int getRespawnRadius() const;

    MCFOLD bool getShowCoordinates() const;

    MCFOLD bool getShowDaysPlayed() const;

    MCAPI bool getSleepSkipNight() const;

    MCAPI int getSleepSkipNightPercent() const;

    MCFOLD bool getTNTExplodes() const;

    MCFOLD bool getTileDrops() const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::Realms::RealmsWorldEditor> realmsWorldEditor);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $update();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI

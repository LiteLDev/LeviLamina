#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/properties/PropertyVector.h"
#include "mc/client/store/MarketplaceSearchDropdown.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class MarketplaceSearchState;
namespace OreUI { class GameDependencies; }
// clang-format on

namespace OreUI {

class MarketplaceSearchSelectionQuery : public ::OreUI::QueryBase<::OreUI::MarketplaceSearchSelectionQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::MarketplaceSearchState>> mSearchState;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<int, int>>                            mSelectedSortId;
    ::ll::TypedStorage<8, 120, ::OreUI::PropertyVector<::std::string, ::std::string>>  mSelectedFilterTags;
    ::ll::TypedStorage<8, 120, ::OreUI::PropertyVector<::std::string, ::std::string>>  mAppliedFilterTags;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<uint, uint>>                          mSelectedFilterCount;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool, bool>>                          mHasUnappliedFilterChanges;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<::MarketplaceSearchDropdown, ::MarketplaceSearchDropdown>>
                                                               mExpandedDropdown;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mSelectionChangedSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    MarketplaceSearchSelectionQuery();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit MarketplaceSearchSelectionQuery(::OreUI::GameDependencies const& game);

    MCAPI void _update();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::GameDependencies const& game);
    // NOLINTEND
};

} // namespace OreUI

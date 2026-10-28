#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/properties/PropertyVector.h"
#include "mc/client/gui/oreui/binding/queries/menus/layout/FetchStatus.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class MarketplaceSearchState;
namespace OreUI { class GameDependencies; }
// clang-format on

namespace OreUI {

class MarketplaceSearchResultsQuery : public ::OreUI::QueryBase<::OreUI::MarketplaceSearchResultsQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::MarketplaceSearchState>>        mSearchState;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<::OreUI::FetchStatus, ::OreUI::FetchStatus>> mFetchStatus;
    ::ll::TypedStorage<8, 120, ::OreUI::PropertyVector<::std::string, ::std::string>>         mFabIds;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<uint64, uint>>                               mResultCount;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mResultsChangedSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    MarketplaceSearchResultsQuery();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit MarketplaceSearchResultsQuery(::OreUI::GameDependencies const& game);

    MCAPI void _update();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::GameDependencies const& game);
    // NOLINTEND
};

} // namespace OreUI

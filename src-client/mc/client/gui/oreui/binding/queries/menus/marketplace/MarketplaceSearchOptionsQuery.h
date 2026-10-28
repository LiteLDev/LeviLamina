#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/properties/PropertyVector.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class MarketplaceSearchState;
namespace OreUI { class GameDependencies; }
namespace OreUI { class SearchFilterCollectionObject; }
namespace OreUI { class SearchSortOptionObject; }
// clang-format on

namespace OreUI {

class MarketplaceSearchOptionsQuery : public ::OreUI::QueryBase<::OreUI::MarketplaceSearchOptionsQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::MarketplaceSearchState>> mSearchState;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool, bool>>                          mIsReady;
    ::ll::
        TypedStorage<8, 120, ::OreUI::PropertyVector<::OreUI::SearchSortOptionObject, ::OreUI::SearchSortOptionObject>>
            mSortOptions;
    ::ll::TypedStorage<
        8,
        120,
        ::OreUI::PropertyVector<::OreUI::SearchFilterCollectionObject, ::OreUI::SearchFilterCollectionObject>>
                                                               mFilterCollections;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOptionsChangedSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    MarketplaceSearchOptionsQuery();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit MarketplaceSearchOptionsQuery(::OreUI::GameDependencies const& game);

    MCAPI void _update();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::GameDependencies const& game);
    // NOLINTEND
};

} // namespace OreUI

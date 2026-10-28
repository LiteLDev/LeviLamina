#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class MarketplaceSearchState;
namespace OreUI { class GameDependencies; }
// clang-format on

namespace OreUI {

class MarketplaceSearchTextQuery : public ::OreUI::QueryBase<::OreUI::MarketplaceSearchTextQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::MarketplaceSearchState>> mSearchState;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string, ::std::string>>        mSearchText;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string, ::std::string>>        mPlaceholderText;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool, bool>>                          mIsSearchActive;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                         mTextChangedSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    MarketplaceSearchTextQuery();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit MarketplaceSearchTextQuery(::OreUI::GameDependencies const& game);

    MCAPI void _update();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::GameDependencies const& game);
    // NOLINTEND
};

} // namespace OreUI

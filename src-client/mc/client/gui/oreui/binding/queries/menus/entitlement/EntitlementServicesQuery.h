#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/queries/menus/entitlement/SubscriptionInfo.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class ISubscriptionStateManager;
namespace OreUI { class GameDependencies; }
// clang-format on

namespace OreUI {

class EntitlementServicesQuery : public ::OreUI::QueryBase<::OreUI::EntitlementServicesQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ISubscriptionStateManager>> mSubscriptionStateManager;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool, bool>>                 mHasAvailableRealmsTrial;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool, bool>>                 mHasAvailableMarketplacePassTrial;
    ::ll::TypedStorage<8, 1600, ::std::optional<::OreUI::SubscriptionInfo>>   mNextAvailableRealmsCoreOffer;
    ::ll::TypedStorage<8, 1600, ::std::optional<::OreUI::SubscriptionInfo>>   mNextAvailableRealmsPlusOffer;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                mSubscriptionDataChangedSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    EntitlementServicesQuery();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit EntitlementServicesQuery(::OreUI::GameDependencies const& game);

    MCAPI void _onSubscriptionDataChanged();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::GameDependencies const& game);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForPropertyObject();

    MCNAPI static void** $vftableForIQuery();
    // NOLINTEND
};

} // namespace OreUI

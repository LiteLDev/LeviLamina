#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"

// auto generated forward declare list
// clang-format off
class MarketplaceServicesManager;
namespace OreUI { class GameDependencies; }
// clang-format on

namespace OreUI {

class EntitlementServicesQuery : public ::OreUI::QueryBase<::OreUI::EntitlementServicesQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::MarketplaceServicesManager&> mMarketplaceServicesManager;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool>>     mHasAvailableRealmsTrial;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool>>     mHasAvailableMarketplacePassTrial;
    // NOLINTEND

public:
    // prevent constructor by default
    EntitlementServicesQuery& operator=(EntitlementServicesQuery const&);
    EntitlementServicesQuery(EntitlementServicesQuery const&);
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

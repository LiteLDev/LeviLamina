#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase.h"

// auto generated forward declare list
// clang-format off
namespace Realms { struct RealmsPurchase; }
namespace Realms { struct RealmsPurchaseReconciler; }
// clang-format on

namespace OreUI {

class RealmsPurchaseCommandsFacet : public ::OreUI::FacetBase<::OreUI::RealmsPurchaseCommandsFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Realms::RealmsPurchaseReconciler>> mRealmsPurchaseReconciler;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Realms::RealmsPurchase>>           mRealmsPurchase;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RealmsPurchaseCommandsFacet() /*override*/;

    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void fulfillPriorRealmsPurchase(::std::string const& xuid);

    MCAPI void prepareAppStoreForReconciliation(::std::string const& xuid);

    MCAPI void prepareAppStoreForTrialPurchases(::std::string const& xuid, ::std::string const& worldName);

    MCAPI void purchaseTrial(::std::string const& xuid, ::std::string const& worldName);

    MCAPI void resetPurchase();

    MCAPI void resetReconciler();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $update();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI

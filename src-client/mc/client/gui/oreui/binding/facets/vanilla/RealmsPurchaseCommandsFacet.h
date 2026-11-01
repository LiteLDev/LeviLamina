#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"

// auto generated forward declare list
// clang-format off
namespace Realms { class LegacyRealmsPurchase; }
namespace Realms { class LegacyRealmsPurchaseReconciler; }
// clang-format on

namespace OreUI {

class RealmsPurchaseCommandsFacet : public ::OreUI::FacetBase_DEPRECATED<::OreUI::RealmsPurchaseCommandsFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Realms::LegacyRealmsPurchaseReconciler>> mRealmsPurchaseReconciler;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Realms::LegacyRealmsPurchase>>           mRealmsPurchase;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsPurchaseCommandsFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RealmsPurchaseCommandsFacet() /*override*/ = default;

    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RealmsPurchaseCommandsFacet(
        ::std::shared_ptr<::Realms::LegacyRealmsPurchase>           realmsPurchase,
        ::std::shared_ptr<::Realms::LegacyRealmsPurchaseReconciler> realmsPurchaseReconciler
    );

    MCNAPI void fulfillPriorRealmsPurchase(::std::string const& xuid);

    MCNAPI void prepareAppStoreForReconciliation(::std::string const& xuid);

    MCNAPI void prepareAppStoreForTrialPurchases(::std::string const& xuid, ::std::string const& worldName);

    MCNAPI void purchaseTrial(::std::string const& xuid, ::std::string const& worldName);

    MCNAPI void resetPurchase();

    MCNAPI void resetReconciler();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::std::shared_ptr<::Realms::LegacyRealmsPurchase>           realmsPurchase,
        ::std::shared_ptr<::Realms::LegacyRealmsPurchaseReconciler> realmsPurchaseReconciler
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $update();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/realms/LegacyRealmsPurchaseFailureReason.h"
#include "mc/client/realms/LegacyRealmsPurchaseState.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
namespace Realms { class LegacyRealmsPurchase; }
// clang-format on

namespace OreUI {

class RealmsPurchaseQueriesFacet : public ::OreUI::FacetBase_DEPRECATED<::OreUI::RealmsPurchaseQueriesFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Realms::LegacyRealmsPurchase>> mRealmsPurchase;
    ::ll::TypedStorage<1, 1, bool>                                               mPurchaseDisabledDueToStoreVersion;
    ::ll::TypedStorage<4, 4, ::Realms::LegacyRealmsPurchaseState>                mState;
    ::ll::TypedStorage<4, 4, ::Realms::LegacyRealmsPurchaseFailureReason>        mFailureReason;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                   mStateChangedSubscription;
    ::ll::TypedStorage<1, 1, bool>                                               mIsDirty;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsPurchaseQueriesFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RealmsPurchaseQueriesFacet() /*override*/ = default;

    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RealmsPurchaseQueriesFacet(
        ::std::shared_ptr<::Realms::LegacyRealmsPurchase> realmsPurchase,
        int                                               expectedStoreVersion
    );

    MCFOLD ::Realms::LegacyRealmsPurchaseFailureReason getFailureReason() const;

    MCAPI ::Realms::LegacyRealmsPurchaseState getState() const;

    MCAPI bool isPurchaseDisabledDueToStoreVersion() const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::Realms::LegacyRealmsPurchase> realmsPurchase, int expectedStoreVersion);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $update();
    // NOLINTEND
};

} // namespace OreUI

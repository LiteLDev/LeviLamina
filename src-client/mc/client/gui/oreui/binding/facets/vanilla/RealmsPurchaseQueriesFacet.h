#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase.h"
#include "mc/client/realms/RealmsPurchaseFailureReason.h"
#include "mc/client/realms/RealmsPurchaseState.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
namespace Realms { class RealmsPurchase; }
// clang-format on

namespace OreUI {

class RealmsPurchaseQueriesFacet : public ::OreUI::FacetBase<::OreUI::RealmsPurchaseQueriesFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Realms::RealmsPurchase>> mRealmsPurchase;
    ::ll::TypedStorage<1, 1, bool>                                         mPurchaseDisabledDueToStoreVersion;
    ::ll::TypedStorage<4, 4, ::Realms::RealmsPurchaseState>                mState;
    ::ll::TypedStorage<4, 4, ::Realms::RealmsPurchaseFailureReason>        mFailureReason;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>             mStateChangedSubscription;
    ::ll::TypedStorage<1, 1, bool>                                         mIsDirty;
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
    MCAPI
    RealmsPurchaseQueriesFacet(::std::shared_ptr<::Realms::RealmsPurchase> realmsPurchase, int expectedStoreVersion);

    MCFOLD ::Realms::RealmsPurchaseFailureReason getFailureReason() const;

    MCFOLD ::Realms::RealmsPurchaseState getState() const;

    MCFOLD bool isPurchaseDisabledDueToStoreVersion() const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::Realms::RealmsPurchase> realmsPurchase, int expectedStoreVersion);
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

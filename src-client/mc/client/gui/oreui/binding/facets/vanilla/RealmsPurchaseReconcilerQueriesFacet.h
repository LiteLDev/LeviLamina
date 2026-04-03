#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase.h"
#include "mc/client/realms/RealmsPurchaseReconcilerFailureReason.h"
#include "mc/client/realms/RealmsPurchaseReconcilerState.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
namespace Realms { class RealmsPurchaseReconciler; }
// clang-format on

namespace OreUI {

class RealmsPurchaseReconcilerQueriesFacet : public ::OreUI::FacetBase<::OreUI::RealmsPurchaseReconcilerQueriesFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Realms::RealmsPurchaseReconciler>> mRealmsPurchaseReconciler;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                       mStateChangedSubscription;
    ::ll::TypedStorage<4, 4, ::Realms::RealmsPurchaseReconcilerState>                mState;
    ::ll::TypedStorage<4, 4, ::Realms::RealmsPurchaseReconcilerFailureReason>        mFailureReason;
    ::ll::TypedStorage<1, 1, bool>                                                   mIsDirty;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsPurchaseReconcilerQueriesFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RealmsPurchaseReconcilerQueriesFacet() /*override*/ = default;

    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit RealmsPurchaseReconcilerQueriesFacet(
        ::std::shared_ptr<::Realms::RealmsPurchaseReconciler> realmsPurchaseReconciler
    );

    MCFOLD ::Realms::RealmsPurchaseReconcilerFailureReason getFailureReason() const;

    MCFOLD ::Realms::RealmsPurchaseReconcilerState getState() const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::Realms::RealmsPurchaseReconciler> realmsPurchaseReconciler);
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

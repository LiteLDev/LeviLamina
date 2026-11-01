#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/realms/LegacyRealmsPurchaseReconcilerFailureReason.h"
#include "mc/client/realms/LegacyRealmsPurchaseReconcilerState.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
namespace Realms { class LegacyRealmsPurchaseReconciler; }
// clang-format on

namespace OreUI {

class RealmsPurchaseReconcilerQueriesFacet
: public ::OreUI::FacetBase_DEPRECATED<::OreUI::RealmsPurchaseReconcilerQueriesFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Realms::LegacyRealmsPurchaseReconciler>> mRealmsPurchaseReconciler;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                             mStateChangedSubscription;
    ::ll::TypedStorage<4, 4, ::Realms::LegacyRealmsPurchaseReconcilerState>                mState;
    ::ll::TypedStorage<4, 4, ::Realms::LegacyRealmsPurchaseReconcilerFailureReason>        mFailureReason;
    ::ll::TypedStorage<1, 1, bool>                                                         mIsDirty;
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
    MCNAPI explicit RealmsPurchaseReconcilerQueriesFacet(
        ::std::shared_ptr<::Realms::LegacyRealmsPurchaseReconciler> realmsPurchaseReconciler
    );

    MCNAPI ::Realms::LegacyRealmsPurchaseReconcilerFailureReason getFailureReason() const;

    MCNAPI ::Realms::LegacyRealmsPurchaseReconcilerState getState() const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::shared_ptr<::Realms::LegacyRealmsPurchaseReconciler> realmsPurchaseReconciler);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $update();
    // NOLINTEND
};

} // namespace OreUI

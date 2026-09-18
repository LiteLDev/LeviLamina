#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/realms/domains/commerce/RealmsPurchaseFailureReason.h"
#include "mc/client/realms/domains/commerce/RealmsPurchaseState.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class GameDependencies; }
namespace Realms { class RealmsPurchase; }
// clang-format on

namespace OreUI {

class RealmsPurchaseQuery : public ::OreUI::QueryBase<::OreUI::RealmsPurchaseQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::Realms::RealmsPurchase>> mRealmsPurchase;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>           mStateChangedSubscription;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<::Realms::RealmsPurchaseState, ::Realms::RealmsPurchaseState>> mState;
    ::ll::TypedStorage<
        8,
        176,
        ::OreUI::Property<::Realms::RealmsPurchaseFailureReason, ::Realms::RealmsPurchaseFailureReason>>
                                                              mFailureReason;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool, bool>> mPurchaseDisabledDueToStoreVersion;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsPurchaseQuery();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RealmsPurchaseQuery() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit RealmsPurchaseQuery(::OreUI::GameDependencies const& game);
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
};

} // namespace OreUI

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/server/commands/edu/SubscriptionType.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class GameDependencies; }
namespace Realms { class RealmsEntitlementManager; }
// clang-format on

namespace OreUI {

class RealmsAvailableEntitlementQuery : public ::OreUI::QueryBase<::OreUI::RealmsAvailableEntitlementQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::Realms::RealmsEntitlementManager>>
                                                              mRealmsEntitlementManager;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool, bool>> mHasAvailableRealmsCoreEntitlement;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool, bool>> mHasAvailableRealmsPlusEntitlement;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool, bool>> mHasAvailableRealmsProEntitlement;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<::SubscriptionType, ::SubscriptionType>> mNextUnusedRealmsEntitlement;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mEntitlementsChangedSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsAvailableEntitlementQuery();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit RealmsAvailableEntitlementQuery(::OreUI::GameDependencies const& game);

    MCAPI void _onEntitlementsChanged();
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

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class ISubscriptionStateManager;
namespace OreUI { class GameDependencies; }
// clang-format on

namespace OreUI {

class ActiveSubscriptionQuery : public ::OreUI::QueryBase<::OreUI::ActiveSubscriptionQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ISubscriptionStateManager>>   mSubscriptionStateManager;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool, bool>>                   mHasActiveSubscription;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string, ::std::string>> mId;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string, ::std::string>> mExpirationDate;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string, ::std::string>> mSku;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string, ::std::string>> mStoreId;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string, ::std::string>> mLocalizedMarketplaceDisplayString;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                  mSubscriptionDataChangedSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    ActiveSubscriptionQuery();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ActiveSubscriptionQuery(::OreUI::GameDependencies const& game, ::std::string friendlyId);

    MCAPI void _refresh(::std::string const& friendlyId);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::GameDependencies const& game, ::std::string friendlyId);
    // NOLINTEND
};

} // namespace OreUI

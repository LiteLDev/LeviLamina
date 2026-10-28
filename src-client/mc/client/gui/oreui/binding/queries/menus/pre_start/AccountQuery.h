#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/queries/menus/pre_start/QRCode.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class ClientDependencies; }
namespace OreUI { class GameDependencies; }
namespace OreUI { class IResourceAllowList; }
namespace Social { class AccountSystem; }
// clang-format on

namespace OreUI {

class AccountQuery : public ::OreUI::QueryBase<::OreUI::AccountQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList>>       mResourceAllowList;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Social::AccountSystem>>                       mAccountSystem;
    ::ll::TypedStorage<8, 848, ::std::optional<::OreUI::QRCode>>                                mQRCode;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool, bool>>                                   mIsSignInInProgress;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<::std::optional<bool>, ::std::optional<bool>>> mIsNewAccount;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                                  mAccountSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                                  mStateSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    AccountQuery();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI AccountQuery(::OreUI::GameDependencies const& game, ::OreUI::ClientDependencies const&);

    MCAPI void _updateData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::GameDependencies const& game, ::OreUI::ClientDependencies const&);
    // NOLINTEND
};

} // namespace OreUI

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/CommandGroupBase.h"
#include "mc/client/gui/oreui/binding/methods/CallableImpl.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class GameDependencies; }
namespace Social { class AccountSystem; }
// clang-format on

namespace OreUI {

class AccountCommandGroup : public ::OreUI::CommandGroupBase<::OreUI::AccountCommandGroup> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Social::AccountSystem>>          mAccountSystem;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                     mSignInStatusSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                     mCommandSignInSubscription;
    ::ll::TypedStorage<1, 1, bool>                                                 mSignInInFlight;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void, ::std::string>> mSignInToXboxLive;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void>>                mCancelSignInToXboxLive;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void>>                mSignInToPlatformNetwork;
    // NOLINTEND

public:
    // prevent constructor by default
    AccountCommandGroup();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit AccountCommandGroup(::OreUI::GameDependencies const& game);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::GameDependencies const& game);
    // NOLINTEND
};

} // namespace OreUI

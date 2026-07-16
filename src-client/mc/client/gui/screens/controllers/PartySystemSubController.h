#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/controllers/MinecraftScreenController.h"
#include "mc/client/social/IToastEventListener.h"
#include "mc/deps/core/threading/TaskGroup.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/network/packet/PartyDestinationCookieIntent.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
class ToastManager;
class ToastMessage;
namespace Parties { class PartySystem; }
// clang-format on

class PartySystemSubController : public ::MinecraftScreenController, public ::IToastEventListener {
public:
    // PartySystemSubController inner types declare
    // clang-format off
    struct DestinationCookieToastRequest;
    // clang-format on

    // PartySystemSubController inner types define
    struct DestinationCookieToastRequest {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, ::PartyDestinationCookieIntent> mIntent;
        ::ll::TypedStorage<8, 32, ::std::string>                 mDestinationName;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mPartyInviteUpdateSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mPartyEventSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mPartyTravelSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mPartyDestinationCookieUpdatedSubscription;
    ::ll::TypedStorage<8, 336, ::TaskGroup>                    mTaskGroup;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::Parties::PartySystem>> mPartySystem;
    ::ll::TypedStorage<8, 8, ::ToastManager&>                                        mToastManager;
    ::ll::TypedStorage<4, 4, ::std::chrono::minutes>                                 mServerSlotReservationTime;
    ::ll::TypedStorage<8, 48, ::std::optional<::PartySystemSubController::DestinationCookieToastRequest>>
                                   mPendingDestinationCookieToast;
    ::ll::TypedStorage<1, 1, bool> mHasActiveDestinationCookieToast;
    // NOLINTEND

public:
    // prevent constructor by default
    PartySystemSubController& operator=(PartySystemSubController const&);
    PartySystemSubController(PartySystemSubController const&);
    PartySystemSubController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PartySystemSubController() /*override*/ = default;

    virtual void handleToastEvent(::IToastEventListener::ToastEventType const, ::ToastMessage const) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PartySystemSubController(
        ::std::shared_ptr<::MinecraftScreenModel>             minecraftScreenModel,
        ::Bedrock::NotNullNonOwnerPtr<::Parties::PartySystem> partySystem,
        ::ToastManager&                                       toastManager
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::shared_ptr<::MinecraftScreenModel>             minecraftScreenModel,
        ::Bedrock::NotNullNonOwnerPtr<::Parties::PartySystem> partySystem,
        ::ToastManager&                                       toastManager
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

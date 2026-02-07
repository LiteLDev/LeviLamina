#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/controllers/MinecraftScreenController.h"
#include "mc/client/social/IToastEventListener.h"
#include "mc/deps/core/threading/TaskGroup.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
class ToastManager;
class ToastMessage;
namespace Parties { struct PartyDestinationXblP2P; }
namespace Parties { struct PartyEventAcceptInviteFailed; }
namespace Parties { struct PartyEventCreateFailed; }
namespace Parties { struct PartyEventInviteExpired; }
namespace Parties { struct PartyEventJoinFailed; }
namespace Parties { struct PartyEventJoinablePartyExpired; }
namespace Parties { struct PartyEventJoinedParty; }
namespace Parties { struct PartyEventLeaderChanged; }
namespace Parties { struct PartyEventLeaveFailed; }
namespace Parties { struct PartyEventLeftParty; }
namespace Parties { struct PartyEventMemberJoined; }
namespace Parties { struct PartyEventMemberLeft; }
namespace Parties { struct PartyEventRemoveMemberFailed; }
namespace Parties { struct PartyEventSendInviteFailed; }
namespace Parties { struct PartyEventSetLeaderFailed; }
namespace Parties { struct PartySystem; }
// clang-format on

class PartySystemSubController : public ::MinecraftScreenController, public ::IToastEventListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                       mPartyInviteUpdateSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                       mPartyEventSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                       mPartyTravelSubscription;
    ::ll::TypedStorage<8, 336, ::TaskGroup>                                          mTaskGroup;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::Parties::PartySystem>> mPartySystem;
    ::ll::TypedStorage<8, 8, ::ToastManager&>                                        mToastManager;
    // NOLINTEND

public:
    // prevent constructor by default
    PartySystemSubController& operator=(PartySystemSubController const&);
    PartySystemSubController(PartySystemSubController const&);
    PartySystemSubController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PartySystemSubController() /*override*/;

    virtual void
    handleToastEvent(::IToastEventListener::ToastEventType const eventType, ::ToastMessage const msg) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PartySystemSubController(
        ::std::shared_ptr<::MinecraftScreenModel>             minecraftScreenModel,
        ::Bedrock::NotNullNonOwnerPtr<::Parties::PartySystem> partySystem,
        ::ToastManager&                                       toastManager
    );

    MCAPI void _onDestinationChange(::Parties::PartyDestinationXblP2P dest);

    MCAPI void _onEvent(::Parties::PartyEventCreateFailed const&);

    MCAPI void _onEvent(::Parties::PartyEventJoinFailed const&);

    MCAPI void _onEvent(::Parties::PartyEventJoinedParty const&);

    MCAPI void _onEvent(::Parties::PartyEventJoinablePartyExpired const&);

    MCAPI void _onEvent(::Parties::PartyEventInviteExpired const&);

    MCAPI void _onEvent(::Parties::PartyEventAcceptInviteFailed const&);

    MCAPI void _onEvent(::Parties::PartyEventLeaveFailed const&);

    MCAPI void _onEvent(::Parties::PartyEventLeftParty const&);

    MCAPI void _onEvent(::Parties::PartyEventSetLeaderFailed const&);

    MCAPI void _onEvent(::Parties::PartyEventSendInviteFailed const&);

    MCAPI void _onEvent(::Parties::PartyEventRemoveMemberFailed const&);

    MCAPI void _onEvent(::Parties::PartyEventMemberLeft const& event);

    MCAPI void _onEvent(::Parties::PartyEventLeaderChanged const& event);

    MCAPI void _onEvent(::Parties::PartyEventMemberJoined const& event);

    MCAPI void _showInviteToast(::std::string inviterXuid);

    MCAPI void _showTravelToast(::std::string toastTitle, bool showWorldIcon);
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
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $handleToastEvent(::IToastEventListener::ToastEventType const eventType, ::ToastMessage const msg);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForScreenController();

    MCNAPI static void** $vftable();

    MCNAPI static void** $vftableForEnableNonOwnerReferences();
    // NOLINTEND
};

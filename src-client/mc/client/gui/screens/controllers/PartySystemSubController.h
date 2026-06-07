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
namespace Parties { class PartySystem; }
namespace Parties { struct PartyDestinationGathering; }
namespace Parties { struct PartyDestinationMenus; }
namespace Parties { struct PartyDestinationRealm; }
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
    ::ll::TypedStorage<4, 4, ::std::chrono::minutes>                                 mServerSlotReservationTime;
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

    MCAPI void _handleTravelToastDeclined();

    MCAPI void _onDestinationChange(::Parties::PartyDestinationGathering destGathering);

    MCAPI void _onDestinationChange(::Parties::PartyDestinationRealm destRealm);

    MCAPI void _onDestinationChange(::Parties::PartyDestinationXblP2P destXbl);

    MCAPI void _onEvent(::Parties::PartyEventMemberLeft const& event);

    MCAPI void _onEvent(::Parties::PartyEventLeaderChanged const& event);

    MCAPI void _onEvent(::Parties::PartyEventMemberJoined const& event);

    MCAPI void _onPartyEvent(
        ::std::variant<
            ::Parties::PartyEventMemberJoined,
            ::Parties::PartyEventMemberLeft,
            ::Parties::PartyEventJoinedParty,
            ::Parties::PartyEventLeftParty,
            ::Parties::PartyEventLeaderChanged,
            ::Parties::PartyEventLeaveFailed,
            ::Parties::PartyEventJoinFailed,
            ::Parties::PartyEventInviteExpired,
            ::Parties::PartyEventJoinablePartyExpired,
            ::Parties::PartyEventAcceptInviteFailed,
            ::Parties::PartyEventCreateFailed,
            ::Parties::PartyEventSendInviteFailed,
            ::Parties::PartyEventRemoveMemberFailed,
            ::Parties::PartyEventSetLeaderFailed> event
    );

    MCAPI void _onPendingDestination(
        ::std::variant<
            ::Parties::PartyDestinationXblP2P,
            ::Parties::PartyDestinationMenus,
            ::Parties::PartyDestinationRealm,
            ::Parties::PartyDestinationGathering> destination
    );

    MCAPI void _showInviteToast(::std::string inviterXuid);

    MCAPI void _showSnackbar(::std::string locStringKey, ::std::string localizationString);

    MCAPI void
    _showTravelToast(::std::string const& toastTitle, ::std::string const& toastSubtitle, bool showWorldIcon);
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

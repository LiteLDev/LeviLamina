#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/ViewRequest.h"
#include "mc/client/gui/screens/controllers/MainMenuScreenController.h"

// auto generated forward declare list
// clang-format off
class MainMenuScreenModel;
struct UIPropertyBag;
namespace Invites { struct Invite; }
// clang-format on

class RealmsPendingInvitationsScreenController : public ::MainMenuScreenController {
public:
    // RealmsPendingInvitationsScreenController inner types define
    using InviteList = ::std::vector<::Invites::Invite>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                    mDirty;
    ::ll::TypedStorage<8, 24, ::std::vector<::Invites::Invite>>       mPendingInvitesList;
    ::ll::TypedStorage<1, 1, bool>                                    mPendingAsyncOperation;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point> mLastUpdate;
    ::ll::TypedStorage<1, 1, bool>                                    mHasPendingInvites;
    ::ll::TypedStorage<1, 1, bool>                                    mShowOnlyFriendInvites;
    ::ll::TypedStorage<4, 4, int>                                     mFriendInvites;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsPendingInvitationsScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RealmsPendingInvitationsScreenController() /*override*/ = default;

    virtual ::ui::DirtyFlag tick() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI
    RealmsPendingInvitationsScreenController(::std::shared_ptr<::MainMenuScreenModel> model, bool hasPendingInvites);

    MCAPI void _checkAllInvitesHandled(int triggeringInvite);

    MCAPI void _fetchPendingInvites();

    MCAPI ::ui::ViewRequest _handleInvitationAccept(::UIPropertyBag* bag);

    MCAPI ::ui::ViewRequest _handleInvitationDecline(::UIPropertyBag* bag);

    MCAPI void _initialize();

    MCAPI void _registerBindings();

    MCAPI void _registerEventHandlers();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::MainMenuScreenModel> model, bool hasPendingInvites);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::ui::DirtyFlag $tick();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForEnableNonOwnerReferences();

    MCNAPI static void** $vftableForScreenController();
    // NOLINTEND
};

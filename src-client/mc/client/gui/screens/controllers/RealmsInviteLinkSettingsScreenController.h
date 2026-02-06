#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/ViewRequest.h"
#include "mc/client/gui/screens/controllers/ModalScreenButtonId.h"
#include "mc/client/gui/screens/controllers/SettingsScreenControllerBase.h"
#include "mc/client/network/realms/InviteLink.h"
#include "mc/client/network/realms/World.h"

// auto generated forward declare list
// clang-format off
class MainMenuScreenModel;
// clang-format on

class RealmsInviteLinkSettingsScreenController : public ::SettingsScreenControllerBase {
public:
    // RealmsInviteLinkSettingsScreenController inner types define
    enum class ExpirationDuration : int {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 656, ::Realms::World>                                              mWorld;
    ::ll::TypedStorage<8, 152, ::Realms::InviteLink>                                         mInviteLink;
    ::ll::TypedStorage<4, 4, ::RealmsInviteLinkSettingsScreenController::ExpirationDuration> mPendingExpirationDuration;
    ::ll::TypedStorage<4, 4, ::RealmsInviteLinkSettingsScreenController::ExpirationDuration> mExpirationDuration;
    ::ll::TypedStorage<1, 1, bool>                                                           mReadyForCopy;
    ::ll::TypedStorage<1, 1, bool>                                                           mRefreshScreen;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsInviteLinkSettingsScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RealmsInviteLinkSettingsScreenController() /*override*/ = default;

    virtual ::ui::DirtyFlag tick() /*override*/;

    virtual bool _doesScreenHaveExitBehavior() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RealmsInviteLinkSettingsScreenController(
        ::std::shared_ptr<::MainMenuScreenModel> model,
        ::Realms::World const&                   world,
        ::Realms::InviteLink const&              link
    );

    MCAPI void _confirmationRemoveLinkDialog(::std::function<void(::ModalScreenButtonId)> callback);

    MCAPI void _deleteInviteLink();

    MCAPI void _displayLinkErrorModal(::std::string const& title, ::std::string const& body);

    MCAPI void _handleChangeLinkExpiry(::RealmsInviteLinkSettingsScreenController::ExpirationDuration expiry);

    MCAPI ::ui::ViewRequest _handleCopyClick();

    MCAPI void _handleToggleLinkActive(bool optionValue);

    MCAPI void _handleToggleLinkInfinite(bool optionValue);

    MCAPI void _registerControllerCallbacks();

    MCAPI void _registerEventHandlers();

    MCAPI void _updateInviteLink(::Realms::InviteLink tempLink);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::shared_ptr<::MainMenuScreenModel> model,
        ::Realms::World const&                   world,
        ::Realms::InviteLink const&              link
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::ui::DirtyFlag $tick();

    MCFOLD bool $_doesScreenHaveExitBehavior() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForScreenController();

    MCNAPI static void** $vftableForEnableNonOwnerReferences();
    // NOLINTEND
};

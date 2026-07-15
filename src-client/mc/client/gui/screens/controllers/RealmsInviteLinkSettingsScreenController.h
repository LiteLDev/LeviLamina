#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
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
    enum class ExpirationDuration : int {
        Unset      = 0,
        Never      = 1,
        HalfHour   = 2,
        Hour       = 3,
        QuarterDay = 4,
        HalfDay    = 5,
        Day        = 6,
        Week       = 7,
    };

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

    // NOLINTEND
};

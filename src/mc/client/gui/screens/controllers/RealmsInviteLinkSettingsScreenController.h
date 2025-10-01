#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/screens/controllers/SettingsScreenControllerBase.h"

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
    ::ll::UntypedStorage<8, 656> mUnk803fbf;
    ::ll::UntypedStorage<8, 152> mUnk8a9bce;
    ::ll::UntypedStorage<4, 4>   mUnka4aa0e;
    ::ll::UntypedStorage<4, 4>   mUnk1faf03;
    ::ll::UntypedStorage<1, 1>   mUnk4b651d;
    ::ll::UntypedStorage<1, 1>   mUnkfc9298;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsInviteLinkSettingsScreenController& operator=(RealmsInviteLinkSettingsScreenController const&);
    RealmsInviteLinkSettingsScreenController(RealmsInviteLinkSettingsScreenController const&);
    RealmsInviteLinkSettingsScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RealmsInviteLinkSettingsScreenController() /*override*/ = default;

    // vIndex: 2
    virtual ::ui::DirtyFlag tick() /*override*/;

    // vIndex: 38
    virtual bool _doesScreenHaveExitBehavior() const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

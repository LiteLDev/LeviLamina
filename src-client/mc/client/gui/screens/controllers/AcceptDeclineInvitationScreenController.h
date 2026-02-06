#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/screens/controllers/MinecraftScreenController.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
class PlatformMultiplayerRestrictions;
// clang-format on

class AcceptDeclineInvitationScreenController : public ::MinecraftScreenController {
public:
    // AcceptDeclineInvitationScreenController inner types define
    enum class AcceptDeclineInvitationState : uchar {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                                                          mTitle;
    ::ll::TypedStorage<8, 32, ::std::string>                                                          mSubtitle;
    ::ll::TypedStorage<8, 64, ::std::function<void(bool, bool)>>                                      mCallback;
    ::ll::TypedStorage<1, 1, ::AcceptDeclineInvitationScreenController::AcceptDeclineInvitationState> mState;
    ::ll::TypedStorage<1, 1, bool>                                                 mAcceptDeclineModalAccepted;
    ::ll::TypedStorage<1, 1, bool>                                                 mAcceptDeclineModalCancelled;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PlatformMultiplayerRestrictions>> mPlatformMultiplayerRestrictions;
    // NOLINTEND

public:
    // prevent constructor by default
    AcceptDeclineInvitationScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~AcceptDeclineInvitationScreenController() /*override*/;

    virtual ::ui::DirtyFlag tick() /*override*/;

    virtual void addEventProperties(::std::unordered_map<::std::string, ::std::string>& eventProperties) const
        /*override*/;

    virtual ::std::string getAdditionalScreenInfo() const /*override*/;

    virtual ::std::string getTelemetryOverride() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI AcceptDeclineInvitationScreenController(
        ::std::shared_ptr<::MinecraftScreenModel> model,
        ::std::string const&                      title,
        ::std::string const&                      subtitle,
        ::std::function<void(bool, bool)>         callback
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::shared_ptr<::MinecraftScreenModel> model,
        ::std::string const&                      title,
        ::std::string const&                      subtitle,
        ::std::function<void(bool, bool)>         callback
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
    MCAPI ::ui::DirtyFlag $tick();

    MCFOLD void $addEventProperties(::std::unordered_map<::std::string, ::std::string>& eventProperties) const;

    MCFOLD ::std::string $getAdditionalScreenInfo() const;

    MCAPI ::std::string $getTelemetryOverride() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForScreenController();

    MCNAPI static void** $vftableForEnableNonOwnerReferences();
    // NOLINTEND
};

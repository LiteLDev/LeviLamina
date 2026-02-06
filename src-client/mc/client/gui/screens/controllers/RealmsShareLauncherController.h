#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/screens/controllers/MinecraftScreenController.h"
#include "mc/client/network/realms/GenericStatus.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
struct ModalScreenData;
// clang-format on

class RealmsShareLauncherController : public ::MinecraftScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mRealmInvite;
    ::ll::TypedStorage<1, 1, bool>           mRunOnceBefore;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsShareLauncherController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::ui::DirtyFlag tick() /*override*/;

    virtual ~RealmsShareLauncherController() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RealmsShareLauncherController(::std::shared_ptr<::MinecraftScreenModel> model, ::std::string realmInvite);

    MCAPI void _findAndJoinRealm();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::ModalScreenData
    DetermineErrorDialog(::Realms::GenericStatus status, ::std::string const& errorMessage);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string const& INTERNAL_USER_BLOCKED_MESSAGE();

    MCAPI static ::std::string const& INVITE_LINK_DISABLED_MESSAGE();

    MCAPI static ::std::string const& INVITE_LINK_EXPIRED_MESSAGE();

    MCAPI static ::std::string const& INVITE_LINK_NOT_FOUND_MESSAGE();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::MinecraftScreenModel> model, ::std::string realmInvite);
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

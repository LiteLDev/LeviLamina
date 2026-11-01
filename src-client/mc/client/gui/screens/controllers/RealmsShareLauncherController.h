#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/screens/controllers/MinecraftScreenController.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
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
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RealmsShareLauncherController(::std::shared_ptr<::MinecraftScreenModel> model, ::std::string realmInvite);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::string const& INTERNAL_USER_BLOCKED_MESSAGE();

    MCNAPI static ::std::string const& INVITE_LINK_DISABLED_MESSAGE();

    MCNAPI static ::std::string const& INVITE_LINK_EXPIRED_MESSAGE();

    MCNAPI static ::std::string const& INVITE_LINK_NOT_FOUND_MESSAGE();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::shared_ptr<::MinecraftScreenModel> model, ::std::string realmInvite);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::ui::DirtyFlag $tick();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForEnableNonOwnerReferences();

    MCNAPI static void** $vftableForScreenController();
    // NOLINTEND
};

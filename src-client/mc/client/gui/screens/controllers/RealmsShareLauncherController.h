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
    MCAPI RealmsShareLauncherController(::std::shared_ptr<::MinecraftScreenModel> model, ::std::string realmInvite);
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

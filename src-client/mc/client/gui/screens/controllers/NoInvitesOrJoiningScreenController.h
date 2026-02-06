#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/controllers/MinecraftScreenController.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
// clang-format on

class NoInvitesOrJoiningScreenController : public ::MinecraftScreenController {
public:
    // prevent constructor by default
    NoInvitesOrJoiningScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~NoInvitesOrJoiningScreenController() /*override*/ = default;

    virtual void onOpen() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit NoInvitesOrJoiningScreenController(::std::shared_ptr<::MinecraftScreenModel> model);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::MinecraftScreenModel> model);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onOpen();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForScreenController();

    MCNAPI static void** $vftableForEnableNonOwnerReferences();
    // NOLINTEND
};

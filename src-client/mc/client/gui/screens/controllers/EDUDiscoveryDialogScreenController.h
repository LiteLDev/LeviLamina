#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/controllers/EduDiscoveryDialogCallbacks.h"
#include "mc/client/gui/screens/controllers/MinecraftScreenController.h"
#include "mc/client/social/edu_discovery/ButtonAction.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
namespace EduDiscovery { struct Dialog; }
// clang-format on

class EduDiscoveryDialogScreenController : public ::MinecraftScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::EduDiscovery::Dialog>> mDialog;
    ::ll::TypedStorage<8, 128, ::EduDiscoveryDialogCallbacks>           mCallbacks;
    // NOLINTEND

public:
    // prevent constructor by default
    EduDiscoveryDialogScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EduDiscoveryDialogScreenController() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI EduDiscoveryDialogScreenController(
        ::std::shared_ptr<::MinecraftScreenModel> model,
        ::EduDiscoveryDialogCallbacks             callbacks
    );

    MCAPI void _openPopup();

    MCAPI void _performButtonAction(::EduDiscovery::ButtonAction action);

    MCAPI bool presentIfNeeded();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::MinecraftScreenModel> model, ::EduDiscoveryDialogCallbacks callbacks);
    // NOLINTEND
};

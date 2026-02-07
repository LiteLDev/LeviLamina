#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/controllers/EDUDiscoveryDialogCallbacks.h"
#include "mc/client/gui/screens/controllers/MinecraftScreenController.h"
#include "mc/client/social/edu_discovery/ButtonAction.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
namespace EDUDiscovery { struct Dialog; }
// clang-format on

class EDUDiscoveryDialogScreenController : public ::MinecraftScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::EDUDiscovery::Dialog>> mDialog;
    ::ll::TypedStorage<8, 128, ::EDUDiscoveryDialogCallbacks>           mCallbacks;
    // NOLINTEND

public:
    // prevent constructor by default
    EDUDiscoveryDialogScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EDUDiscoveryDialogScreenController() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI EDUDiscoveryDialogScreenController(
        ::std::shared_ptr<::MinecraftScreenModel> model,
        ::EDUDiscoveryDialogCallbacks             callbacks
    );

    MCAPI void _closePopup();

    MCAPI void _openPopup();

    MCAPI void _performButtonAction(::EDUDiscovery::ButtonAction action);

    MCAPI void _registerBindings();

    MCAPI bool presentIfNeeded();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::MinecraftScreenModel> model, ::EDUDiscoveryDialogCallbacks callbacks);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForEnableNonOwnerReferences();

    MCNAPI static void** $vftableForScreenController();
    // NOLINTEND
};

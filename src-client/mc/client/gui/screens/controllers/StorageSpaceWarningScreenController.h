#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/controllers/MinecraftScreenController.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
// clang-format on

class StorageSpaceWarningScreenController : public ::MinecraftScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mMessage;
    // NOLINTEND

public:
    // prevent constructor by default
    StorageSpaceWarningScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~StorageSpaceWarningScreenController() /*override*/ = default;

    virtual void onOpen() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI
    StorageSpaceWarningScreenController(::std::shared_ptr<::MinecraftScreenModel> model, ::std::string const& message);

    MCAPI void _showStorageSpaceWarningPopup();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::MinecraftScreenModel> model, ::std::string const& message);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onOpen();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForEnableNonOwnerReferences();

    MCNAPI static void** $vftableForScreenController();
    // NOLINTEND
};

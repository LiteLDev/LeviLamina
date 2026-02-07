#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/controllers/MinecraftScreenController.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
// clang-format on

class CommonDialogInfoScreenController : public ::MinecraftScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string const> mDialogTitle;
    ::ll::TypedStorage<8, 32, ::std::string const> mDialogBody;
    // NOLINTEND

public:
    // prevent constructor by default
    CommonDialogInfoScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CommonDialogInfoScreenController() /*override*/ = default;

    virtual void onOpen() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CommonDialogInfoScreenController(
        ::std::shared_ptr<::MinecraftScreenModel> model,
        ::std::string const&                      dialogTitle,
        ::std::string const&                      dialogBody
    );

    MCAPI void _showCommonDialog();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::shared_ptr<::MinecraftScreenModel> model,
        ::std::string const&                      dialogTitle,
        ::std::string const&                      dialogBody
    );
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

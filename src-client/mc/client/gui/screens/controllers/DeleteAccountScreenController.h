#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/controllers/MinecraftScreenController.h"
#include "mc/deps/core/threading/TaskGroup.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
// clang-format on

class DeleteAccountScreenController : public ::MinecraftScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>          mIsRealmsEnabled;
    ::ll::TypedStorage<1, 1, bool>          mConfirm0;
    ::ll::TypedStorage<1, 1, bool>          mConfirm1;
    ::ll::TypedStorage<1, 1, bool>          mConfirm2;
    ::ll::TypedStorage<1, 1, bool>          mConfirm3;
    ::ll::TypedStorage<8, 336, ::TaskGroup> mTaskGroup;
    // NOLINTEND

public:
    // prevent constructor by default
    DeleteAccountScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DeleteAccountScreenController() /*override*/ = default;

    virtual void onOpen() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit DeleteAccountScreenController(::std::shared_ptr<::MinecraftScreenModel> model);

    MCAPI void _registerEventHandlers();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::MinecraftScreenModel> model);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $onOpen();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForEnableNonOwnerReferences();

    MCNAPI static void** $vftableForScreenController();
    // NOLINTEND
};

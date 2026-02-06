#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/ViewRequest.h"
#include "mc/client/gui/screens/controllers/MainMenuScreenController.h"
#include "mc/client/gui/screens/controllers/WorldsClipboardCallbacks.h"

// auto generated forward declare list
// clang-format off
class MainMenuScreenModel;
// clang-format on

class WorldsClipboardScreenController : public ::MainMenuScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 704, ::WorldsClipboardCallbacks> mScreenCallbacks;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldsClipboardScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WorldsClipboardScreenController() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit WorldsClipboardScreenController(::std::shared_ptr<::MainMenuScreenModel> model);

    MCAPI ::ui::ViewRequest _copyWorld();

    MCAPI ::ui::ViewRequest _deleteWorld();

    MCAPI bool _isLowDiskSpace(bool checkUserStorage);

    MCAPI void _registerEventHandlers();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::MainMenuScreenModel> model);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForEnableNonOwnerReferences();

    MCNAPI static void** $vftableForScreenController();
    // NOLINTEND
};

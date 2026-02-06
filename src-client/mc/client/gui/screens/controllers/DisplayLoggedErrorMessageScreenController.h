#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/SceneType.h"
#include "mc/client/gui/screens/controllers/MinecraftScreenController.h"

// auto generated forward declare list
// clang-format off
struct DisplayLoggedError;
// clang-format on

class DisplayLoggedErrorMessageScreenController : public ::MinecraftScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::DisplayLoggedError>> mErrorList;
    ::ll::TypedStorage<1, 1, bool>                                 mHasShownErrorPopup;
    ::ll::TypedStorage<1, 1, bool>                                 mDirty;
    ::ll::TypedStorage<8, 32, ::std::string>                       mDelayedSetFocusControlName;
    ::ll::TypedStorage<1, 1, bool>                                 mScheduleFocusToNewObject;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DisplayLoggedErrorMessageScreenController() /*override*/ = default;

    virtual ::ui::DirtyFlag tick() /*override*/;

    virtual ::ui::SceneType getSceneType() const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/screens/controllers/MainMenuScreenController.h"

// auto generated forward declare list
// clang-format off
class DlcUIWrapper;
class WorldConversionCompleteModel;
// clang-format on

class WorldConversionCompleteScreenController : public ::MainMenuScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::WorldConversionCompleteModel>> mWorldConversionCompleteModel;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::DlcUIWrapper>>                  mDlcUIWrapper;
    ::ll::TypedStorage<8, 64, ::std::function<void()>>                           mCancelCallback;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldConversionCompleteScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WorldConversionCompleteScreenController() /*override*/ = default;

    virtual ::ui::DirtyFlag tick() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI WorldConversionCompleteScreenController(
        ::std::shared_ptr<::WorldConversionCompleteModel> model,
        ::std::string const&                              levelId,
        ::std::function<void()>                           cancelCallback
    );

    MCAPI void _registerBindings();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::shared_ptr<::WorldConversionCompleteModel> model,
        ::std::string const&                              levelId,
        ::std::function<void()>                           cancelCallback
    );
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

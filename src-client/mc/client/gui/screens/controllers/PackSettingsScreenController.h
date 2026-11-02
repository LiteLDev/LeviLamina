#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/controllers/MainMenuScreenController.h"
#include "mc/client/gui/screens/controllers/PackSettingsInfo.h"

// auto generated forward declare list
// clang-format off
class DynamicFormScreenController;
class MainMenuScreenModel;
class PackSettings;
// clang-format on

class PackSettingsScreenController : public ::MainMenuScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                           mHasOpened;
    ::ll::TypedStorage<8, 192, ::PackSettingsInfo>           mPackSettingsInfo;
    ::ll::TypedStorage<4, 4, int>                            mInitialSubpackIndex;
    ::ll::TypedStorage<8, 8, ::PackSettings*>                mPackSettings;
    ::ll::TypedStorage<8, 8, ::DynamicFormScreenController*> mDynamicFormScreenController;
    // NOLINTEND

public:
    // prevent constructor by default
    PackSettingsScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void onOpen() /*override*/;

    virtual void onTerminate() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI
    PackSettingsScreenController(::std::shared_ptr<::MainMenuScreenModel> model, ::PackSettingsInfo packSettingsInfo);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::shared_ptr<::MainMenuScreenModel> model, ::PackSettingsInfo packSettingsInfo);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onOpen();

    MCNAPI void $onTerminate();
    // NOLINTEND
};

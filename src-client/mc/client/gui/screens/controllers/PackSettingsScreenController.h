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
namespace Json { class Value; }
// clang-format on

class PackSettingsScreenController : public ::MainMenuScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                           mHasOpened;
    ::ll::TypedStorage<8, 192, ::PackSettingsInfo>           mPackSettingsInfo;
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

    virtual ~PackSettingsScreenController() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI
    PackSettingsScreenController(::std::shared_ptr<::MainMenuScreenModel> model, ::PackSettingsInfo packSettingsInfo);

    MCAPI void _onContentItemChanged(::Json::Value& contentItem);

    MCAPI void _registerEventHandlers();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::MainMenuScreenModel> model, ::PackSettingsInfo packSettingsInfo);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onOpen();

    MCAPI void $onTerminate();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForEnableNonOwnerReferences();

    MCNAPI static void** $vftableForScreenController();
    // NOLINTEND
};

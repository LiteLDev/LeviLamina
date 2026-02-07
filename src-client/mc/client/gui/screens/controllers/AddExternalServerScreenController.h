#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/ViewRequest.h"
#include "mc/client/gui/screens/controllers/MainMenuScreenController.h"

// auto generated forward declare list
// clang-format off
class MainMenuScreenModel;
namespace Json { class Value; }
// clang-format on

class AddExternalServerScreenController : public ::MainMenuScreenController {
public:
    // AddExternalServerScreenController inner types define
    enum class Mode : int {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::AddExternalServerScreenController::Mode> mMode;
    ::ll::TypedStorage<1, 1, bool>                                      mAreInputsAllValid;
    ::ll::TypedStorage<8, 32, ::std::string>                            mServerName;
    ::ll::TypedStorage<8, 32, ::std::string>                            mIpAddress;
    ::ll::TypedStorage<4, 4, int>                                       mPort;
    ::ll::TypedStorage<4, 4, int>                                       mExternalServerId;
    // NOLINTEND

public:
    // prevent constructor by default
    AddExternalServerScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~AddExternalServerScreenController() /*override*/;

    virtual void addStaticScreenVars(::Json::Value& globalVars) /*override*/;

    virtual void onOpen() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI AddExternalServerScreenController(::std::shared_ptr<::MainMenuScreenModel> model, int externalServerId);

    MCAPI void _registerBindings();

    MCAPI void _registerEventHandlers();

    MCAPI void _removeServer();

    MCAPI void _saveFormDataThen(::std::function<void()> callback);

    MCAPI ::ui::ViewRequest _validateFormData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::MainMenuScreenModel> model, int externalServerId);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $addStaticScreenVars(::Json::Value& globalVars);

    MCAPI void $onOpen();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForEnableNonOwnerReferences();

    MCNAPI static void** $vftableForScreenController();
    // NOLINTEND
};

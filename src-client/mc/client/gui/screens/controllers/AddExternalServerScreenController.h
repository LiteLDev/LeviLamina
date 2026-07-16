#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/controllers/MainMenuScreenController.h"

// auto generated forward declare list
// clang-format off
class MainMenuScreenModel;
namespace Json { class Value; }
// clang-format on

class AddExternalServerScreenController : public ::MainMenuScreenController {
public:
    // AddExternalServerScreenController inner types define
    enum class Mode : int {
        Add  = 0,
        Edit = 1,
    };

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
    virtual ~AddExternalServerScreenController() /*override*/ = default;

    virtual void addStaticScreenVars(::Json::Value& globalVars) /*override*/;

    virtual void onOpen() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI AddExternalServerScreenController(::std::shared_ptr<::MainMenuScreenModel> model, int externalServerId);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::MainMenuScreenModel> model, int externalServerId);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

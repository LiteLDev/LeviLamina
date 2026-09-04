#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/SceneType.h"
#include "mc/client/gui/screens/controllers/MinecraftScreenController.h"
#include "mc/deps/input/interface/GameControllerErrorType.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
namespace Json { class Value; }
// clang-format on

class ConnectGamepadScreenController : public ::MinecraftScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<void()>> mOnCompleteCallback;
    // NOLINTEND

public:
    // prevent constructor by default
    ConnectGamepadScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ConnectGamepadScreenController() /*override*/ = default;

    virtual void onOpen() /*override*/;

    virtual void onReload() /*override*/;

    virtual void onLeave() /*override*/;

    virtual void addStaticScreenVars(::Json::Value& globalVars) /*override*/;

    virtual ::ui::SceneType getSceneType() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ConnectGamepadScreenController(
        ::std::shared_ptr<::MinecraftScreenModel> model,
        ::GameControllerErrorType                 controllerError,
        ::std::function<void()>                   onCompleteCallback
    );

    MCAPI void _showGamepadRequiredPopup();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::shared_ptr<::MinecraftScreenModel> model,
        ::GameControllerErrorType                 controllerError,
        ::std::function<void()>                   onCompleteCallback
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onOpen();

    MCAPI void $onReload();

    MCAPI void $onLeave();

    MCAPI void $addStaticScreenVars(::Json::Value& globalVars);

    MCFOLD ::ui::SceneType $getSceneType() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForScreenController();

    MCNAPI static void** $vftableForEnableNonOwnerReferences();
    // NOLINTEND
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/SceneType.h"
#include "mc/client/gui/ViewRequest.h"
#include "mc/client/gui/screens/controllers/MinecraftScreenController.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
// clang-format on

class DisconnectScreenController : public ::MinecraftScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mTitleMessage;
    ::ll::TypedStorage<8, 32, ::std::string> mTelemetryOverride;
    ::ll::TypedStorage<8, 32, ::std::string> mDisconnectString;
    ::ll::TypedStorage<1, 1, bool const>     mLeaveGame;
    ::ll::TypedStorage<1, 1, bool const>     mIsSubClient;
    ::ll::TypedStorage<1, 1, bool>           mShowAccountSettingUriButton;
    // NOLINTEND

public:
    // prevent constructor by default
    DisconnectScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DisconnectScreenController() /*override*/;

    virtual void onOpen() /*override*/;

    virtual ::std::string getAdditionalScreenInfo() const /*override*/;

    virtual ::std::string getTelemetryOverride() const /*override*/;

    virtual ::ui::SceneType getSceneType() const /*override*/;

    virtual ::std::string _getButtonADescription() /*override*/;

    virtual ::ui::ViewRequest _processLeaveScreen();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI DisconnectScreenController(
        ::std::shared_ptr<::MinecraftScreenModel> model,
        ::std::string const&                      titleMessage,
        ::std::string const&                      displayMessage,
        ::std::string const&                      telemetryOverride,
        bool                                      leaveGame,
        bool                                      isSubClient
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::shared_ptr<::MinecraftScreenModel> model,
        ::std::string const&                      titleMessage,
        ::std::string const&                      displayMessage,
        ::std::string const&                      telemetryOverride,
        bool                                      leaveGame,
        bool                                      isSubClient
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onOpen();

    MCAPI ::std::string $getAdditionalScreenInfo() const;

    MCFOLD ::std::string $getTelemetryOverride() const;

    MCFOLD ::ui::SceneType $getSceneType() const;

    MCFOLD ::std::string $_getButtonADescription();

    MCAPI ::ui::ViewRequest $_processLeaveScreen();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForEnableNonOwnerReferences();

    MCNAPI static void** $vftableForScreenController();
    // NOLINTEND
};

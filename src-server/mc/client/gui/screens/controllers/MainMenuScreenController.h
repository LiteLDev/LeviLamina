#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/controllers/MinecraftScreenController.h"
#include "mc/client/player/PickCustomSkinResult.h"

class MainMenuScreenController : public ::MinecraftScreenController {
public:
    // MainMenuScreenController inner types define
    enum class StartRealmFailureAction : int {
        ShowModalPopup     = 0,
        JustNotifyCallback = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk793974;
    ::ll::UntypedStorage<8, 8>  mUnkfd6e69;
    // NOLINTEND

public:
    // prevent constructor by default
    MainMenuScreenController& operator=(MainMenuScreenController const&);
    MainMenuScreenController(MainMenuScreenController const&);
    MainMenuScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MainMenuScreenController() /*override*/ = default;

    // vIndex: 6
    virtual void onOpen() /*override*/;

    // vIndex: 50
    virtual void showPickCustomSkinDialog(::std::function<void(::PickCustomSkinResult)>) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

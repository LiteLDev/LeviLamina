#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/SceneType.h"
#include "mc/client/gui/screens/controllers/MinecraftScreenController.h"

class PlayFabSignInConflictHelpQrScreenController : public ::MinecraftScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string const> mHelpUrl;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::ui::SceneType getSceneType() const /*override*/;

    virtual void onOpen() /*override*/;
    // NOLINTEND
};

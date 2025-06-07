#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/LevelListener.h"

class PlayerPermissionsLevelListener : public ::LevelListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnka0d0a5;
    ::ll::UntypedStorage<8, 64> mUnkd50a57;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerPermissionsLevelListener& operator=(PlayerPermissionsLevelListener const&);
    PlayerPermissionsLevelListener(PlayerPermissionsLevelListener const&);
    PlayerPermissionsLevelListener();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 29
    virtual void onLevelDataCommandsChanged(bool) /*override*/;

    // vIndex: 30
    virtual void onLevelDataWorldTemplateOptionsUnlocked() /*override*/;

    // vIndex: 0
    virtual ~PlayerPermissionsLevelListener() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/controllers/SettingsScreenMode.h"

// auto generated forward declare list
// clang-format off
class LevelData;
// clang-format on

struct ClassroomSettingsScreenControllerCallbacks {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<::LevelData&()>>         mGetLevelData;
    ::ll::TypedStorage<8, 64, ::std::function<::SettingsScreenMode()>> mGetSettingsMode;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ClassroomSettingsScreenControllerCallbacks();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class LevelData;
struct LevelSummary;
// clang-format on

struct WorldSettingsScreenControllerProxyCallbacks {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<::LevelData&()>>                    mGetLevelData;
    ::ll::TypedStorage<8, 64, ::std::function<void(::std::function<void(bool)>)>> mCreateWorld;
    ::ll::TypedStorage<8, 64, ::std::function<::LevelSummary const&()>>           mGetLevelSummary;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~WorldSettingsScreenControllerProxyCallbacks();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleGameTest {

class ScriptGameTestConnectivity {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mNorth;
    ::ll::TypedStorage<1, 1, bool> mEast;
    ::ll::TypedStorage<1, 1, bool> mSouth;
    ::ll::TypedStorage<1, 1, bool> mWest;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptGameTestConnectivity& operator=(ScriptGameTestConnectivity const&);
    ScriptGameTestConnectivity();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptGameTestConnectivity(::ScriptModuleGameTest::ScriptGameTestConnectivity const& other);

    MCAPI ScriptGameTestConnectivity(bool north, bool east, bool south, bool west);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ScriptModuleGameTest::ScriptGameTestConnectivity const& other);

    MCAPI void* $ctor(bool north, bool east, bool south, bool west);
    // NOLINTEND
};

} // namespace ScriptModuleGameTest

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
};

} // namespace ScriptModuleGameTest

#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleGameTest {

class ScriptGameTestConnectivity {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk866791;
    ::ll::UntypedStorage<1, 1> mUnk7c6e8f;
    ::ll::UntypedStorage<1, 1> mUnkaae62f;
    ::ll::UntypedStorage<1, 1> mUnkb2116b;
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

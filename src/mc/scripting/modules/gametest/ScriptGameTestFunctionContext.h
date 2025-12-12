#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/gametest/framework/IGameTestFunctionContext.h"

namespace ScriptModuleGameTest {

class ScriptGameTestFunctionContext : public ::gametest::IGameTestFunctionContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnka05f6e;
    ::ll::UntypedStorage<8, 8>  mUnk1e5e56;
    ::ll::UntypedStorage<8, 32> mUnk14f7e3;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptGameTestFunctionContext& operator=(ScriptGameTestFunctionContext const&);
    ScriptGameTestFunctionContext(ScriptGameTestFunctionContext const&);
    ScriptGameTestFunctionContext();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptGameTestFunctionContext() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleGameTest

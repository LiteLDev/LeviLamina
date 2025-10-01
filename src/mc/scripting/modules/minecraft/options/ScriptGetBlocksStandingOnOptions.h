#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptGetBlocksStandingOnOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 2>   mUnk4454d9;
    ::ll::UntypedStorage<8, 168> mUnk70e891;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptGetBlocksStandingOnOptions& operator=(ScriptGetBlocksStandingOnOptions const&);
    ScriptGetBlocksStandingOnOptions(ScriptGetBlocksStandingOnOptions const&);
    ScriptGetBlocksStandingOnOptions();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ScriptGetBlocksStandingOnOptions();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft

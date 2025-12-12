#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptObstructionCallbackArgs {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk847410;
    ::ll::UntypedStorage<8, 32> mUnk644e39;
    ::ll::UntypedStorage<8, 32> mUnkce0eb2;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptObstructionCallbackArgs& operator=(ScriptObstructionCallbackArgs const&);
    ScriptObstructionCallbackArgs(ScriptObstructionCallbackArgs const&);
    ScriptObstructionCallbackArgs();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ScriptObstructionCallbackArgs();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft

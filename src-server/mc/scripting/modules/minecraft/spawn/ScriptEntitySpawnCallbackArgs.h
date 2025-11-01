#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptEntitySpawnCallbackArgs {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk89f51d;
    ::ll::UntypedStorage<2, 2> mUnkcb3780;
    ::ll::UntypedStorage<8, 48> mUnk2967b1;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptEntitySpawnCallbackArgs& operator=(ScriptEntitySpawnCallbackArgs const&);
    ScriptEntitySpawnCallbackArgs(ScriptEntitySpawnCallbackArgs const&);
    ScriptEntitySpawnCallbackArgs();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ScriptEntitySpawnCallbackArgs();
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

}

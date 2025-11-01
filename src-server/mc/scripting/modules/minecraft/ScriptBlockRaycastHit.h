#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBlockRaycastHit {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk5eb143;
    ::ll::UntypedStorage<4, 4> mUnk9494f0;
    ::ll::UntypedStorage<4, 12> mUnkb088d7;
    ::ll::UntypedStorage<4, 12> mUnkc5f1fe;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBlockRaycastHit& operator=(ScriptBlockRaycastHit const&);
    ScriptBlockRaycastHit(ScriptBlockRaycastHit const&);
    ScriptBlockRaycastHit();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ScriptBlockRaycastHit();
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

}

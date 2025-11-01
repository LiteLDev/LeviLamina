#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptBlockFillOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 2> mUnka09902;
    ::ll::UntypedStorage<8, 168> mUnk602490;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBlockFillOptions& operator=(ScriptBlockFillOptions const&);
    ScriptBlockFillOptions(ScriptBlockFillOptions const&);
    ScriptBlockFillOptions();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ScriptBlockFillOptions();
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

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptAABB {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnk49bddd;
    ::ll::UntypedStorage<4, 12> mUnkff7bfd;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptAABB& operator=(ScriptAABB const&);
    ScriptAABB(ScriptAABB const&);
    ScriptAABB();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft

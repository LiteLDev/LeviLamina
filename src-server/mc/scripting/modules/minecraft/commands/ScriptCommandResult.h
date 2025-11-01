#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptCommandResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk3516be;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptCommandResult& operator=(ScriptCommandResult const&);
    ScriptCommandResult(ScriptCommandResult const&);
    ScriptCommandResult();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

};

}

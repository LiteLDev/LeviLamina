#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/JSON.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptCustomComponentParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::Scripting::JSON> mPayload;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptCustomComponentParameters& operator=(ScriptCustomComponentParameters const&);
    ScriptCustomComponentParameters(ScriptCustomComponentParameters const&);
    ScriptCustomComponentParameters();

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::ScriptModuleMinecraft::ScriptCustomComponentParameters&
    operator=(::ScriptModuleMinecraft::ScriptCustomComponentParameters&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft

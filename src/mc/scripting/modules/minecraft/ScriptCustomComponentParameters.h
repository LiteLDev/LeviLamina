#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptCustomComponentParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk68d3f6;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptCustomComponentParameters& operator=(ScriptCustomComponentParameters const&);
    ScriptCustomComponentParameters(ScriptCustomComponentParameters const&);
    ScriptCustomComponentParameters();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::ScriptModuleMinecraft::ScriptCustomComponentParameters&
    operator=(::ScriptModuleMinecraft::ScriptCustomComponentParameters&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft

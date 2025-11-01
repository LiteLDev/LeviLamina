#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptSplineAnimation {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk512343;
    ::ll::UntypedStorage<8, 24> mUnk38570a;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptSplineAnimation& operator=(ScriptSplineAnimation const&);
    ScriptSplineAnimation(ScriptSplineAnimation const&);
    ScriptSplineAnimation();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::ScriptModuleMinecraft::ScriptSplineAnimation& operator=(::ScriptModuleMinecraft::ScriptSplineAnimation&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND

};

}

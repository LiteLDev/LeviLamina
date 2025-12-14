#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptCatmullRomSpline {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk2b4d07;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptCatmullRomSpline& operator=(ScriptCatmullRomSpline const&);
    ScriptCatmullRomSpline(ScriptCatmullRomSpline const&);
    ScriptCatmullRomSpline();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::ScriptModuleMinecraft::ScriptCatmullRomSpline& operator=(::ScriptModuleMinecraft::ScriptCatmullRomSpline&&
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft

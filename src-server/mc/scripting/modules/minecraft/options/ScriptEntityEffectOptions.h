#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptEntityEffectOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8> mUnkb63041;
    ::ll::UntypedStorage<1, 2> mUnkf6cd6b;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptEntityEffectOptions& operator=(ScriptEntityEffectOptions const&);
    ScriptEntityEffectOptions(ScriptEntityEffectOptions const&);
    ScriptEntityEffectOptions();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND

};

}

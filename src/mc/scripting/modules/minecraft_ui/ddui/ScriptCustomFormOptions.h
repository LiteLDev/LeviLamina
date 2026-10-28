#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraftServerUI {

struct ScriptCustomFormOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnkaec769;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptCustomFormOptions& operator=(ScriptCustomFormOptions const&);
    ScriptCustomFormOptions(ScriptCustomFormOptions const&);
    ScriptCustomFormOptions();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftServerUI

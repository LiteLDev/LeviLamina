#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraftServerUI {

struct ScriptToggleOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 224> mUnka73bef;
    ::ll::UntypedStorage<8, 48>  mUnkb97820;
    ::ll::UntypedStorage<8, 48>  mUnk9acce1;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptToggleOptions& operator=(ScriptToggleOptions const&);
    ScriptToggleOptions(ScriptToggleOptions const&);
    ScriptToggleOptions();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftServerUI

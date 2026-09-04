#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraftServerUI {

struct ScriptDropdownOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 224> mUnk3380de;
    ::ll::UntypedStorage<8, 48>  mUnkf526b6;
    ::ll::UntypedStorage<8, 48>  mUnk83bf27;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptDropdownOptions& operator=(ScriptDropdownOptions const&);
    ScriptDropdownOptions(ScriptDropdownOptions const&);
    ScriptDropdownOptions();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftServerUI

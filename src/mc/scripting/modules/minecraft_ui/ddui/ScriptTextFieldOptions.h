#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraftServerUI {

struct ScriptTextFieldOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 224> mUnkc0a39e;
    ::ll::UntypedStorage<8, 48>  mUnkf1ab09;
    ::ll::UntypedStorage<8, 48>  mUnkb24150;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptTextFieldOptions& operator=(ScriptTextFieldOptions const&);
    ScriptTextFieldOptions(ScriptTextFieldOptions const&);
    ScriptTextFieldOptions();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftServerUI

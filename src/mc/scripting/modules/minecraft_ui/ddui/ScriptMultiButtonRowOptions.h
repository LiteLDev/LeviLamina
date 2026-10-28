#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraftServerUI {

struct ScriptMultiButtonRowOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnkceee16;
    ::ll::UntypedStorage<8, 48> mUnk7996d5;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptMultiButtonRowOptions& operator=(ScriptMultiButtonRowOptions const&);
    ScriptMultiButtonRowOptions(ScriptMultiButtonRowOptions const&);
    ScriptMultiButtonRowOptions();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftServerUI

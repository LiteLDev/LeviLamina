#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraftServerUI {

class ScriptUIRawMessage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 208> mUnkc37d3a;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptUIRawMessage& operator=(ScriptUIRawMessage const&);
    ScriptUIRawMessage(ScriptUIRawMessage const&);
    ScriptUIRawMessage();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftServerUI

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptTickingAreaOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnk6c2004;
    ::ll::UntypedStorage<4, 12> mUnk2f1289;
    ::ll::UntypedStorage<8, 32> mUnk3231f4;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptTickingAreaOptions& operator=(ScriptTickingAreaOptions const&);
    ScriptTickingAreaOptions(ScriptTickingAreaOptions const&);
    ScriptTickingAreaOptions();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft

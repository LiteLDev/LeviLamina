#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptExtrudeInteractiveToolResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk15c723;
    ::ll::UntypedStorage<8, 32> mUnk6c79d5;
    ::ll::UntypedStorage<1, 1>  mUnkc3048b;
    ::ll::UntypedStorage<4, 4>  mUnk3c5b72;
    ::ll::UntypedStorage<1, 1>  mUnk25b94a;
    ::ll::UntypedStorage<8, 16> mUnk4faeb9;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptExtrudeInteractiveToolResult& operator=(ScriptExtrudeInteractiveToolResult const&);
    ScriptExtrudeInteractiveToolResult(ScriptExtrudeInteractiveToolResult const&);
    ScriptExtrudeInteractiveToolResult();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bindScript();
    // NOLINTEND
};

} // namespace Editor::ScriptModule

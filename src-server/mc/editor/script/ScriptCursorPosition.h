#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptCursorPosition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnkbfdcff;
    ::ll::UntypedStorage<1, 1>  mUnk55ad48;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptCursorPosition& operator=(ScriptCursorPosition const&);
    ScriptCursorPosition(ScriptCursorPosition const&);
    ScriptCursorPosition();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bindScript();
    // NOLINTEND
};

} // namespace Editor::ScriptModule

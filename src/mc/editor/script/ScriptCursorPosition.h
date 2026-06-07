#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Editor::Cursor { struct Position; }
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
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ScriptCursorPosition(::Editor::Cursor::Position const& position);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bindScript();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::Cursor::Position const& position);
    // NOLINTEND
};

} // namespace Editor::ScriptModule

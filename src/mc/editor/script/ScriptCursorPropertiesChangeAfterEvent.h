#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace Editor::ScriptModule {

struct ScriptCursorPropertiesChangeAfterEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 96> mUnk1d3d8d;
    ::ll::UntypedStorage<4, 20> mUnka51558;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptCursorPropertiesChangeAfterEvent& operator=(ScriptCursorPropertiesChangeAfterEvent const&);
    ScriptCursorPropertiesChangeAfterEvent(ScriptCursorPropertiesChangeAfterEvent const&);
    ScriptCursorPropertiesChangeAfterEvent();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND
};

} // namespace Editor::ScriptModule

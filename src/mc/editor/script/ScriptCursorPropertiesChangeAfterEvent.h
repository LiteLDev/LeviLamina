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
    ::ll::UntypedStorage<8, 96> mUnk1d3d8d;
    ::ll::UntypedStorage<4, 20> mUnka51558;
    ::ll::UntypedStorage<8, 40> mUnk9f621c;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptCursorPropertiesChangeAfterEvent& operator=(ScriptCursorPropertiesChangeAfterEvent const&);
    ScriptCursorPropertiesChangeAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptCursorPropertiesChangeAfterEvent(::Editor::ScriptModule::ScriptCursorPropertiesChangeAfterEvent&&);

    MCNAPI
    ScriptCursorPropertiesChangeAfterEvent(::Editor::ScriptModule::ScriptCursorPropertiesChangeAfterEvent const&);

    MCNAPI ::Editor::ScriptModule::ScriptCursorPropertiesChangeAfterEvent&
    operator=(::Editor::ScriptModule::ScriptCursorPropertiesChangeAfterEvent&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::ScriptModule::ScriptCursorPropertiesChangeAfterEvent&&);

    MCNAPI void* $ctor(::Editor::ScriptModule::ScriptCursorPropertiesChangeAfterEvent const&);
    // NOLINTEND
};

} // namespace Editor::ScriptModule

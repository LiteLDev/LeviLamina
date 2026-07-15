#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
    ScriptCursorPropertiesChangeAfterEvent(ScriptCursorPropertiesChangeAfterEvent const&);
    ScriptCursorPropertiesChangeAfterEvent();
};

} // namespace Editor::ScriptModule

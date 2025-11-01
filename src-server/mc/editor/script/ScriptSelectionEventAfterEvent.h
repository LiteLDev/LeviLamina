#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace Editor::ScriptModule {

struct ScriptSelectionEventAfterEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8> mUnk8e9ee1;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptSelectionEventAfterEvent& operator=(ScriptSelectionEventAfterEvent const&);
    ScriptSelectionEventAfterEvent(ScriptSelectionEventAfterEvent const&);
    ScriptSelectionEventAfterEvent();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

};

}

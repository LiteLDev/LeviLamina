#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace Editor::ScriptModule {

struct ScriptModeChangeAfterEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnka34d04;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptModeChangeAfterEvent& operator=(ScriptModeChangeAfterEvent const&);
    ScriptModeChangeAfterEvent(ScriptModeChangeAfterEvent const&);
    ScriptModeChangeAfterEvent();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND
};

} // namespace Editor::ScriptModule

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace Editor::ScriptModule {

struct ScriptSimulationStateChangeAfterEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnkf0dcf2;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptSimulationStateChangeAfterEvent& operator=(ScriptSimulationStateChangeAfterEvent const&);
    ScriptSimulationStateChangeAfterEvent(ScriptSimulationStateChangeAfterEvent const&);
    ScriptSimulationStateChangeAfterEvent();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND
};

} // namespace Editor::ScriptModule

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace Editor::ScriptModule {

class EditorSimulationState {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkee9dae;
    // NOLINTEND

public:
    // prevent constructor by default
    EditorSimulationState& operator=(EditorSimulationState const&);
    EditorSimulationState(EditorSimulationState const&);
    EditorSimulationState();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bindScript();
    // NOLINTEND
};

} // namespace Editor::ScriptModule

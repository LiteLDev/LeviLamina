#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
};

} // namespace Editor::ScriptModule

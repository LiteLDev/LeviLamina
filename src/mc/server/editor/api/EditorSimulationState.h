#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/deps/scripting/runtime/Result.h"

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
    // member functions
    // NOLINTBEGIN
    MCNAPI bool isPaused() const;

    MCNAPI ::Scripting::Result<void> setPaused(bool isPaused);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBindingBuilder<::Editor::ScriptModule::EditorSimulationState> bindScript();
    // NOLINTEND
};

} // namespace Editor::ScriptModule

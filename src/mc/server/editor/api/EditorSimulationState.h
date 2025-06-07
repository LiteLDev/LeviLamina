#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/Result_deprecated.h"

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
    // member functions
    // NOLINTBEGIN
    MCNAPI bool isPaused() const;

    MCNAPI ::Scripting::Result_deprecated<void> setPaused(bool isPaused);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bindScript();
    // NOLINTEND
};

} // namespace Editor::ScriptModule

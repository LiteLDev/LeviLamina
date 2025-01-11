#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::ScriptModule {

struct ScriptPrimarySelectionChangedEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnk78ef29;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPrimarySelectionChangedEvent& operator=(ScriptPrimarySelectionChangedEvent const&);
    ScriptPrimarySelectionChangedEvent(ScriptPrimarySelectionChangedEvent const&);
    ScriptPrimarySelectionChangedEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ScriptPrimarySelectionChangedEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace Editor::ScriptModule

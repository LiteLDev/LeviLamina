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
    MCNAPI ~ScriptPrimarySelectionChangedEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::ScriptModule

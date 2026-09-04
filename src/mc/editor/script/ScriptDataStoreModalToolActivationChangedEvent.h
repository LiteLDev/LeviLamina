#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::ScriptModule {

struct ScriptDataStoreModalToolActivationChangedEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnkc1b65e;
    ::ll::UntypedStorage<1, 1>  mUnkb7b492;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptDataStoreModalToolActivationChangedEvent& operator=(ScriptDataStoreModalToolActivationChangedEvent const&);
    ScriptDataStoreModalToolActivationChangedEvent(ScriptDataStoreModalToolActivationChangedEvent const&);
    ScriptDataStoreModalToolActivationChangedEvent();
};

} // namespace Editor::ScriptModule

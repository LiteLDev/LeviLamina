#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::ScriptModule {

struct ScriptDataStoreModalToolChangeRequestedEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnkbb3d36;
    ::ll::UntypedStorage<8, 40> mUnk6855c5;
    ::ll::UntypedStorage<1, 1>  mUnk4c84c1;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptDataStoreModalToolChangeRequestedEvent& operator=(ScriptDataStoreModalToolChangeRequestedEvent const&);
    ScriptDataStoreModalToolChangeRequestedEvent(ScriptDataStoreModalToolChangeRequestedEvent const&);
    ScriptDataStoreModalToolChangeRequestedEvent();
};

} // namespace Editor::ScriptModule

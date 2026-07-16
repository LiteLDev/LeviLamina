#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::ScriptModule {

struct ScriptDataStorePayloadAfterEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk561622;
    ::ll::UntypedStorage<8, 32> mUnk2e8738;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptDataStorePayloadAfterEvent& operator=(ScriptDataStorePayloadAfterEvent const&);
    ScriptDataStorePayloadAfterEvent(ScriptDataStorePayloadAfterEvent const&);
    ScriptDataStorePayloadAfterEvent();
};

} // namespace Editor::ScriptModule

#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::ScriptModule {

struct ScriptPrefabServiceInstanceInteractionEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkf29a3c;
    ::ll::UntypedStorage<4, 4>  mUnke7b712;
    ::ll::UntypedStorage<4, 16> mUnkdc6021;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPrefabServiceInstanceInteractionEvent& operator=(ScriptPrefabServiceInstanceInteractionEvent const&);
    ScriptPrefabServiceInstanceInteractionEvent(ScriptPrefabServiceInstanceInteractionEvent const&);
    ScriptPrefabServiceInstanceInteractionEvent();
};

} // namespace Editor::ScriptModule

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/events/ScriptBlockCustomComponentAfterEventIntermediateStorage.h"

namespace ScriptModuleMinecraft {

struct ScriptBlockCustomComponentPlayerDestroyAfterEventIntermediateStorage
: public ::ScriptModuleMinecraft::ScriptBlockCustomComponentAfterEventIntermediateStorage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk60b4d7;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBlockCustomComponentPlayerDestroyAfterEventIntermediateStorage&
    operator=(ScriptBlockCustomComponentPlayerDestroyAfterEventIntermediateStorage const&);
    ScriptBlockCustomComponentPlayerDestroyAfterEventIntermediateStorage(ScriptBlockCustomComponentPlayerDestroyAfterEventIntermediateStorage const&);
    ScriptBlockCustomComponentPlayerDestroyAfterEventIntermediateStorage();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ScriptBlockCustomComponentPlayerDestroyAfterEventIntermediateStorage();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft

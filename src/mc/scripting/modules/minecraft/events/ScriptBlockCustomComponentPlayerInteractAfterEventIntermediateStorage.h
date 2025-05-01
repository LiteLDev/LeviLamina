#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/events/ScriptBlockCustomComponentAfterEventIntermediateStorage.h"

namespace ScriptModuleMinecraft {

struct ScriptBlockCustomComponentPlayerInteractAfterEventIntermediateStorage
: public ::ScriptModuleMinecraft::ScriptBlockCustomComponentAfterEventIntermediateStorage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk6971d7;
    ::ll::UntypedStorage<1, 1>  mUnk6d13f7;
    ::ll::UntypedStorage<4, 16> mUnk6c0af7;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBlockCustomComponentPlayerInteractAfterEventIntermediateStorage&
    operator=(ScriptBlockCustomComponentPlayerInteractAfterEventIntermediateStorage const&);
    ScriptBlockCustomComponentPlayerInteractAfterEventIntermediateStorage(ScriptBlockCustomComponentPlayerInteractAfterEventIntermediateStorage const&);
    ScriptBlockCustomComponentPlayerInteractAfterEventIntermediateStorage();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ScriptBlockCustomComponentPlayerInteractAfterEventIntermediateStorage();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft

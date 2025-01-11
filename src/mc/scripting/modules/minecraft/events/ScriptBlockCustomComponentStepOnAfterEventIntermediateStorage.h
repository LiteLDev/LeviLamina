#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/events/ScriptBlockCustomComponentAfterEventIntermediateStorage.h"

namespace ScriptModuleMinecraft {

struct ScriptBlockCustomComponentStepOnAfterEventIntermediateStorage
: public ::ScriptModuleMinecraft::ScriptBlockCustomComponentAfterEventIntermediateStorage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnke8d221;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBlockCustomComponentStepOnAfterEventIntermediateStorage&
    operator=(ScriptBlockCustomComponentStepOnAfterEventIntermediateStorage const&);
    ScriptBlockCustomComponentStepOnAfterEventIntermediateStorage(ScriptBlockCustomComponentStepOnAfterEventIntermediateStorage const&);
    ScriptBlockCustomComponentStepOnAfterEventIntermediateStorage();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ScriptBlockCustomComponentStepOnAfterEventIntermediateStorage();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft

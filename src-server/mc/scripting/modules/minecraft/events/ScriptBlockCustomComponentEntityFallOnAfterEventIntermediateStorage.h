#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/events/ScriptBlockCustomComponentAfterEventIntermediateStorage.h"

namespace ScriptModuleMinecraft {

struct ScriptBlockCustomComponentEntityFallOnAfterEventIntermediateStorage
: public ::ScriptModuleMinecraft::ScriptBlockCustomComponentAfterEventIntermediateStorage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk5608c6;
    ::ll::UntypedStorage<4, 4>  mUnk23c7dd;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBlockCustomComponentEntityFallOnAfterEventIntermediateStorage&
    operator=(ScriptBlockCustomComponentEntityFallOnAfterEventIntermediateStorage const&);
    ScriptBlockCustomComponentEntityFallOnAfterEventIntermediateStorage(
        ScriptBlockCustomComponentEntityFallOnAfterEventIntermediateStorage const&
    );
    ScriptBlockCustomComponentEntityFallOnAfterEventIntermediateStorage();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ScriptBlockCustomComponentEntityFallOnAfterEventIntermediateStorage();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft

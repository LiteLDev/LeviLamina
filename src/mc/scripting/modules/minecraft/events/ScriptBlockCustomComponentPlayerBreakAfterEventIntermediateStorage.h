#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/events/ScriptBlockCustomComponentAfterEventIntermediateStorage.h"

namespace ScriptModuleMinecraft {

struct ScriptBlockCustomComponentPlayerBreakAfterEventIntermediateStorage
: public ::ScriptModuleMinecraft::ScriptBlockCustomComponentAfterEventIntermediateStorage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk777069;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBlockCustomComponentPlayerBreakAfterEventIntermediateStorage&
    operator=(ScriptBlockCustomComponentPlayerBreakAfterEventIntermediateStorage const&);
    ScriptBlockCustomComponentPlayerBreakAfterEventIntermediateStorage(
        ScriptBlockCustomComponentPlayerBreakAfterEventIntermediateStorage const&
    );
    ScriptBlockCustomComponentPlayerBreakAfterEventIntermediateStorage();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ScriptBlockCustomComponentPlayerBreakAfterEventIntermediateStorage();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft

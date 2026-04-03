#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/actor/ScriptActorData.h"
#include "mc/scripting/modules/minecraft/events/ScriptBlockCustomComponentAfterEventIntermediateStorage.h"

namespace ScriptModuleMinecraft {

struct ScriptBlockCustomComponentActorAfterEventIntermediateStorage
: public ::ScriptModuleMinecraft::ScriptBlockCustomComponentAfterEventIntermediateStorage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 96, ::ScriptModuleMinecraft::ScriptActorData const> mEntity;
    ::ll::TypedStorage<8, 32, ::std::string const>                            mName;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ScriptBlockCustomComponentActorAfterEventIntermediateStorage();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft

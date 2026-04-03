#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/actor/ScriptActorData.h"
#include "mc/world/actor/ActorHealCause.h"

namespace ScriptModuleMinecraft {

struct ScriptActorHealAfterEventIntermediateData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 96, ::ScriptModuleMinecraft::ScriptActorData> mHealedActor;
    ::ll::TypedStorage<1, 1, ::ActorHealCause>                          mHealCause;
    ::ll::TypedStorage<4, 4, float>                                     mHealing;
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft

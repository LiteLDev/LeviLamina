#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/actor/ActorDamageCause.h"
#include "mc/scripting/modules/minecraft/actor/ScriptActorData.h"

namespace ScriptModuleMinecraft {

struct ScriptActorHurtAfterEventIntermediateData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 96, ::ScriptModuleMinecraft::ScriptActorData>                   mHurtActor;
    ::ll::TypedStorage<4, 4, float>                                                       mDamage;
    ::ll::TypedStorage<8, 104, ::std::optional<::ScriptModuleMinecraft::ScriptActorData>> mDamagingActor;
    ::ll::TypedStorage<8, 104, ::std::optional<::ScriptModuleMinecraft::ScriptActorData>> mProjectileActor;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::ActorDamageCause>                     mCause;
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft

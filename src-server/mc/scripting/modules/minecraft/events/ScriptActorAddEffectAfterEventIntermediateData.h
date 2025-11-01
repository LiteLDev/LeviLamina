#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/scripting/modules/minecraft/actor/ScriptActorData.h"

// auto generated forward declare list
// clang-format off
class Actor;
class MobEffectInstance;
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptActorAddEffectAfterEventIntermediateData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::WeakEntityRef>                          mWeakActorRef;
    ::ll::TypedStorage<8, 96, ::ScriptModuleMinecraft::ScriptActorData> mActorData;
    ::ll::TypedStorage<4, 4, int>                                       mMobEffectId;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptActorAddEffectAfterEventIntermediateData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptActorAddEffectAfterEventIntermediateData(::Actor const& actor, ::MobEffectInstance mobEffect);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Actor const& actor, ::MobEffectInstance mobEffect);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft

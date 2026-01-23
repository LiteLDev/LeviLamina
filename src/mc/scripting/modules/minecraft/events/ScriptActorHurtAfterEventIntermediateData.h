#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/actor/ActorDamageCause.h"
#include "mc/scripting/modules/minecraft/actor/ScriptActorData.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Level;
struct ActorHurtEvent;
// clang-format on

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

public:
    // prevent constructor by default
    ScriptActorHurtAfterEventIntermediateData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptActorHurtAfterEventIntermediateData(
        ::ActorHurtEvent const& eventData,
        ::Actor const&          hurtActor,
        ::Level const&          level
    );

    MCAPI ~ScriptActorHurtAfterEventIntermediateData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ActorHurtEvent const& eventData, ::Actor const& hurtActor, ::Level const& level);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft

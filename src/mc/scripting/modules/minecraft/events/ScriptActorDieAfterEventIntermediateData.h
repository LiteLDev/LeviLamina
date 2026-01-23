#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/actor/ActorDamageCause.h"
#include "mc/scripting/modules/minecraft/actor/ScriptActorData.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Level;
struct ActorDiedEvent;
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptActorDieAfterEventIntermediateData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 96, ::ScriptModuleMinecraft::ScriptActorData>                   mDeadActor;
    ::ll::TypedStorage<8, 104, ::std::optional<::ScriptModuleMinecraft::ScriptActorData>> mDamagingActor;
    ::ll::TypedStorage<8, 104, ::std::optional<::ScriptModuleMinecraft::ScriptActorData>> mProjectileActor;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::ActorDamageCause>                     mCause;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptActorDieAfterEventIntermediateData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptActorDieAfterEventIntermediateData(
        ::ActorDiedEvent const& eventData,
        ::Actor const&          deadActor,
        ::Level const&          level
    );

    MCAPI ~ScriptActorDieAfterEventIntermediateData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ActorDiedEvent const& eventData, ::Actor const& deadActor, ::Level const& level);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft

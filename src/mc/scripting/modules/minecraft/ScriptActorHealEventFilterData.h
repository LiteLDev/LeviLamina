#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/actor/ScriptActorData.h"
#include "mc/world/actor/ActorHealCause.h"

namespace ScriptModuleMinecraft::EventFilters {

struct ScriptActorHealEventFilterData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 96, ::ScriptModuleMinecraft::ScriptActorData> mActorData;
    ::ll::TypedStorage<1, 1, ::ActorHealCause>                          mHealCause;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptActorHealEventFilterData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI
    ScriptActorHealEventFilterData(::ScriptModuleMinecraft::ScriptActorData actorData, ::ActorHealCause healCause);

    MCAPI ~ScriptActorHealEventFilterData();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::ScriptModuleMinecraft::EventFilters::ScriptActorHealEventFilterData
    create(::ScriptModuleMinecraft::ScriptActorData actorData, ::ActorHealCause healCause);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptActorData actorData, ::ActorHealCause healCause);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft::EventFilters

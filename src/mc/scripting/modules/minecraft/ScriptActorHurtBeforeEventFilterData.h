#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/actor/ActorDamageCause.h"
#include "mc/scripting/modules/minecraft/actor/ScriptActorData.h"

namespace ScriptModuleMinecraft::EventFilters {

struct ScriptActorHurtBeforeEventFilterData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 96, ::ScriptModuleMinecraft::ScriptActorData> mActorData;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::ActorDamageCause>   mDamageCause;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ScriptActorHurtBeforeEventFilterData();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::ScriptModuleMinecraft::EventFilters::ScriptActorHurtBeforeEventFilterData
    create(::ScriptModuleMinecraft::ScriptActorData actorData, ::SharedTypes::Legacy::ActorDamageCause damageCause);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft::EventFilters

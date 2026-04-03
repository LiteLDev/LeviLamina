#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/actor/ActorDamageCause.h"
#include "mc/scripting/modules/minecraft/ScriptActorFilter.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft::EventFilters { struct ScriptActorHurtBeforeEventFilterData; }
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft::EventFilters {

struct ScriptActorHurtBeforeEventFilter {
public:
    // ScriptActorHurtBeforeEventFilter inner types define
    using Data = ::ScriptModuleMinecraft::EventFilters::ScriptActorHurtBeforeEventFilterData;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 432, ::std::optional<::ScriptModuleMinecraft::ScriptActorFilter>> mActorFilter;
    ::ll::TypedStorage<8, 32, ::std::optional<::std::vector<::SharedTypes::Legacy::ActorDamageCause>>>
        mAllowedDamageCauses;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptActorHurtBeforeEventFilter(ScriptActorHurtBeforeEventFilter const&);
    ScriptActorHurtBeforeEventFilter();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::ScriptModuleMinecraft::EventFilters::ScriptActorHurtBeforeEventFilter&
    operator=(::ScriptModuleMinecraft::EventFilters::ScriptActorHurtBeforeEventFilter const&);

    MCAPI ~ScriptActorHurtBeforeEventFilter();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft::EventFilters

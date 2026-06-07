#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/ScriptActorFilter.h"
#include "mc/world/actor/ActorHealCause.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft::EventFilters { struct ScriptActorHealEventFilterData; }
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft::EventFilters {

struct ScriptActorHealEventFilter {
public:
    // ScriptActorHealEventFilter inner types define
    using Data = ::ScriptModuleMinecraft::EventFilters::ScriptActorHealEventFilterData;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 432, ::std::optional<::ScriptModuleMinecraft::ScriptActorFilter>> mActorFilter;
    ::ll::TypedStorage<8, 32, ::std::optional<::std::vector<::ActorHealCause>>>             mAllowedHealCauses;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptActorHealEventFilter();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptActorHealEventFilter(::ScriptModuleMinecraft::EventFilters::ScriptActorHealEventFilter const&);

    MCAPI ::ScriptModuleMinecraft::EventFilters::ScriptActorHealEventFilter&
    operator=(::ScriptModuleMinecraft::EventFilters::ScriptActorHealEventFilter const&);

    MCFOLD void process();

    MCAPI bool shouldAllow(::ScriptModuleMinecraft::EventFilters::ScriptActorHealEventFilterData const& data) const;

    MCAPI ~ScriptActorHealEventFilter();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ScriptModuleMinecraft::EventFilters::ScriptActorHealEventFilter const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft::EventFilters

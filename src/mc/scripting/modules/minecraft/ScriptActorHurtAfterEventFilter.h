#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/actor/ActorDamageCause.h"
#include "mc/scripting/modules/minecraft/ScriptActorEventFilter.h"
#include "mc/scripting/modules/minecraft/ScriptActorFilter.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft::EventFilters { struct ScriptActorEventFilterData; }
namespace ScriptModuleMinecraft::EventFilters { struct ScriptActorHurtAfterEventFilterData; }
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft::EventFilters {

struct ScriptActorHurtAfterEventFilter : public ::ScriptModuleMinecraft::EventFilters::ScriptActorEventFilter {
public:
    // ScriptActorHurtAfterEventFilter inner types define
    using Data = ::ScriptModuleMinecraft::EventFilters::ScriptActorHurtAfterEventFilterData;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 432, ::std::optional<::ScriptModuleMinecraft::ScriptActorFilter>> mActorFilter;
    ::ll::TypedStorage<8, 32, ::std::optional<::std::vector<::SharedTypes::Legacy::ActorDamageCause>>>
        mAllowedDamageCauses;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptActorHurtAfterEventFilter();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool
    shouldAllow(::ScriptModuleMinecraft::EventFilters::ScriptActorEventFilterData const& filterData) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI
    ScriptActorHurtAfterEventFilter(::ScriptModuleMinecraft::EventFilters::ScriptActorHurtAfterEventFilter const&);

    MCNAPI ::ScriptModuleMinecraft::EventFilters::ScriptActorHurtAfterEventFilter&
    operator=(::ScriptModuleMinecraft::EventFilters::ScriptActorHurtAfterEventFilter const&);

    MCNAPI bool shouldAllow(::ScriptModuleMinecraft::EventFilters::ScriptActorHurtAfterEventFilterData const& data);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraft::EventFilters::ScriptActorHurtAfterEventFilter const&);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $shouldAllow(::ScriptModuleMinecraft::EventFilters::ScriptActorEventFilterData const& filterData);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft::EventFilters

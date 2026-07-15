#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/ScriptActorEventFilter.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft::EventFilters { struct ScriptActorEventFilterData; }
namespace ScriptModuleMinecraft::EventFilters { struct ScriptDataDrivenActorTriggerEventFilterData; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft::EventFilters {

struct ScriptDataDrivenActorTriggerEventFilter : public ::ScriptModuleMinecraft::EventFilters::ScriptActorEventFilter {
public:
    // ScriptDataDrivenActorTriggerEventFilter inner types define
    using Data = ::ScriptModuleMinecraft::EventFilters::ScriptDataDrivenActorTriggerEventFilterData;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::optional<::std::vector<::std::string>>> mEventTypes;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptDataDrivenActorTriggerEventFilter() /*override*/;

    virtual bool
    shouldAllow(::ScriptModuleMinecraft::EventFilters::ScriptActorEventFilterData const& filterData) /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::InterfaceBinding bind();

    MCAPI static ::Scripting::ClassBinding bindV010();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $shouldAllow(::ScriptModuleMinecraft::EventFilters::ScriptActorEventFilterData const& filterData);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft::EventFilters

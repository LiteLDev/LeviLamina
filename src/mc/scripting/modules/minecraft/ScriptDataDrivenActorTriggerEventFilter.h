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
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnke9470c;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptDataDrivenActorTriggerEventFilter();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptDataDrivenActorTriggerEventFilter() /*override*/;

    virtual bool
    shouldAllow(::ScriptModuleMinecraft::EventFilters::ScriptActorEventFilterData const& filterData) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptDataDrivenActorTriggerEventFilter(
        ::ScriptModuleMinecraft::EventFilters::ScriptDataDrivenActorTriggerEventFilter const&
    );

    MCNAPI ::ScriptModuleMinecraft::EventFilters::ScriptDataDrivenActorTriggerEventFilter&
    operator=(::ScriptModuleMinecraft::EventFilters::ScriptDataDrivenActorTriggerEventFilter const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bind();

    MCNAPI static ::Scripting::ClassBinding bindV010();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraft::EventFilters::ScriptDataDrivenActorTriggerEventFilter const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
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

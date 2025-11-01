#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct ActorUniqueID;
namespace ScriptModuleMinecraft::EventFilters { struct ScriptActorEventFilterData; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft::EventFilters {

struct ScriptActorEventFilter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkbd2ff5;
    ::ll::UntypedStorage<8, 32> mUnkfa0a1c;
    ::ll::UntypedStorage<8, 32> mUnkc4466f;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptActorEventFilter();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptActorEventFilter();

    // vIndex: 1
    virtual bool shouldAllow(::ScriptModuleMinecraft::EventFilters::ScriptActorEventFilterData const& filterData);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptActorEventFilter(::ScriptModuleMinecraft::EventFilters::ScriptActorEventFilter const&);

    MCNAPI ::ScriptModuleMinecraft::EventFilters::ScriptActorEventFilter& operator=(::ScriptModuleMinecraft::EventFilters::ScriptActorEventFilter const&);

    MCNAPI void process();
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
    MCNAPI void* $ctor(::ScriptModuleMinecraft::EventFilters::ScriptActorEventFilter const&);
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

}

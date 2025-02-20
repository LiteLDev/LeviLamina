#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/deps/scripting/binding_type/InterfaceBindingBuilder.h"

// auto generated forward declare list
// clang-format off
struct ActorUniqueID;
namespace ScriptModuleMinecraft::EventFilters { struct ScriptActorEventFilterData; }
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
    MCAPI ScriptActorEventFilter(::ScriptModuleMinecraft::EventFilters::ScriptActorEventFilter const&);

    MCAPI ::ScriptModuleMinecraft::EventFilters::ScriptActorEventFilter&
    operator=(::ScriptModuleMinecraft::EventFilters::ScriptActorEventFilter const&);

    MCAPI void process();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::InterfaceBindingBuilder<::ScriptModuleMinecraft::EventFilters::ScriptActorEventFilter>
    bind();

    MCAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::EventFilters::ScriptActorEventFilter>
    bindV010();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ScriptModuleMinecraft::EventFilters::ScriptActorEventFilter const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $shouldAllow(::ScriptModuleMinecraft::EventFilters::ScriptActorEventFilterData const& filterData);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft::EventFilters

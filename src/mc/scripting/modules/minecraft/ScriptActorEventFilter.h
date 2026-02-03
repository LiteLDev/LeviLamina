#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
struct ActorUniqueID;
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace ScriptModuleMinecraft::EventFilters { struct ScriptActorEventFilterData; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft::EventFilters {

struct ScriptActorEventFilter {
public:
    // ScriptActorEventFilter inner types define
    using Data = ::ScriptModuleMinecraft::EventFilters::ScriptActorEventFilterData;

    using Invalidator = ::ActorUniqueID;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        32,
        ::std::optional<::std::vector<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>>>>
                                                                               mSpecificActors;
    ::ll::TypedStorage<8, 32, ::std::optional<::std::vector<::std::string>>>   mActorTypes;
    ::ll::TypedStorage<8, 32, ::std::optional<::std::vector<::ActorUniqueID>>> mProcessedUniqueIds;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptActorEventFilter();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptActorEventFilter();

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
    MCAPI static ::Scripting::InterfaceBinding bind();

    MCAPI static ::Scripting::ClassBinding bindV010();
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
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft::EventFilters

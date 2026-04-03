#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/ScriptActorFilter.h"
#include "mc/scripting/modules/minecraft/ScriptItemFilter.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft::EventFilters { struct ScriptActorItemPickupEventFilterData; }
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft::EventFilters {

struct ScriptActorItemPickupEventFilter {
public:
    // ScriptActorItemPickupEventFilter inner types define
    using Data = ::ScriptModuleMinecraft::EventFilters::ScriptActorItemPickupEventFilterData;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 432, ::std::optional<::ScriptModuleMinecraft::ScriptActorFilter>> mActorFilter;
    ::ll::TypedStorage<8, 80, ::std::optional<::ScriptModuleMinecraft::ScriptItemFilter>>   mItemFilter;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptActorItemPickupEventFilter& operator=(ScriptActorItemPickupEventFilter const&);
    ScriptActorItemPickupEventFilter(ScriptActorItemPickupEventFilter const&);
    ScriptActorItemPickupEventFilter();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptActorItemPickupEventFilter(::ScriptModuleMinecraft::EventFilters::ScriptActorItemPickupEventFilter&&);

    MCFOLD bool shouldAllow(::ScriptModuleMinecraft::EventFilters::ScriptActorItemPickupEventFilterData const& data);

    MCAPI ~ScriptActorItemPickupEventFilter();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::ScriptModuleMinecraft::EventFilters::ScriptActorItemPickupEventFilter&&);

    MCFOLD_C void* $ctor(::ScriptModuleMinecraft::EventFilters::ScriptActorItemPickupEventFilter const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft::EventFilters

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
    // member functions
    // NOLINTBEGIN
    MCFOLD bool shouldAllow(::ScriptModuleMinecraft::EventFilters::ScriptActorItemPickupEventFilterData const& data);

    MCAPI ~ScriptActorItemPickupEventFilter();
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

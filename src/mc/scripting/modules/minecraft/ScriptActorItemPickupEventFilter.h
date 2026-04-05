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

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    ScriptActorItemPickupEventFilter& operator=(ScriptActorItemPickupEventFilter const&);
    ScriptActorItemPickupEventFilter(ScriptActorItemPickupEventFilter const&);
    ScriptActorItemPickupEventFilter();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    ScriptActorItemPickupEventFilter& operator=(ScriptActorItemPickupEventFilter const&);
    ScriptActorItemPickupEventFilter();

#endif
public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptActorItemPickupEventFilter(::ScriptModuleMinecraft::EventFilters::ScriptActorItemPickupEventFilter&&);

#ifdef LL_PLAT_C
    MCAPI
    ScriptActorItemPickupEventFilter(::ScriptModuleMinecraft::EventFilters::ScriptActorItemPickupEventFilter const&);
#endif

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

#ifdef LL_PLAT_C
    MCFOLD void* $ctor(::ScriptModuleMinecraft::EventFilters::ScriptActorItemPickupEventFilter const&);
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft::EventFilters

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/ScriptActorFilter.h"
#include "mc/scripting/modules/minecraft/ScriptBlockFilter.h"
#include "mc/scripting/modules/minecraft/ScriptItemFilter.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft::EventFilters { struct ScriptPlayerCraftRecipeEventFilterData; }
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft::EventFilters {

struct ScriptPlayerCraftRecipeEventFilter {
public:
    // ScriptPlayerCraftRecipeEventFilter inner types define
    using Data = ::ScriptModuleMinecraft::EventFilters::ScriptPlayerCraftRecipeEventFilterData;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 432, ::std::optional<::ScriptModuleMinecraft::ScriptActorFilter>> mPlayerFilter;
    ::ll::TypedStorage<8, 168, ::std::optional<::ScriptModuleMinecraft::ScriptBlockFilter>> mBlockFilter;
    ::ll::TypedStorage<8, 80, ::std::optional<::ScriptModuleMinecraft::ScriptItemFilter>>   mItemFilter;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPlayerCraftRecipeEventFilter();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptPlayerCraftRecipeEventFilter(
        ::ScriptModuleMinecraft::EventFilters::ScriptPlayerCraftRecipeEventFilter const&
    );

    MCAPI ::ScriptModuleMinecraft::EventFilters::ScriptPlayerCraftRecipeEventFilter&
    operator=(::ScriptModuleMinecraft::EventFilters::ScriptPlayerCraftRecipeEventFilter const&);

    MCAPI bool shouldAllow(::ScriptModuleMinecraft::EventFilters::ScriptPlayerCraftRecipeEventFilterData const& data);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ScriptModuleMinecraft::EventFilters::ScriptPlayerCraftRecipeEventFilter const&);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft::EventFilters

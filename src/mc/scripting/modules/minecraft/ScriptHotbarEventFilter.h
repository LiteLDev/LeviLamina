#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/ScriptHotbarEventFilterProcessedData.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft::EventFilters { struct ScriptHotbarEventFilterData; }
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft::EventFilters {

struct ScriptHotbarEventFilter {
public:
    // ScriptHotbarEventFilter inner types define
    using Data = ::ScriptModuleMinecraft::EventFilters::ScriptHotbarEventFilterData;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::ScriptModuleMinecraft::EventFilters::ScriptHotbarEventFilterProcessedData>
                                                                   mProcessedData;
    ::ll::TypedStorage<8, 32, ::std::optional<::std::vector<int>>> mAllowedSlots;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptHotbarEventFilter();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptHotbarEventFilter(::ScriptModuleMinecraft::EventFilters::ScriptHotbarEventFilter const&);

    MCAPI ::ScriptModuleMinecraft::EventFilters::ScriptHotbarEventFilter&
    operator=(::ScriptModuleMinecraft::EventFilters::ScriptHotbarEventFilter&&);

    MCAPI ::ScriptModuleMinecraft::EventFilters::ScriptHotbarEventFilter&
    operator=(::ScriptModuleMinecraft::EventFilters::ScriptHotbarEventFilter const&);

    MCAPI ~ScriptHotbarEventFilter();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ScriptModuleMinecraft::EventFilters::ScriptHotbarEventFilter const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft::EventFilters

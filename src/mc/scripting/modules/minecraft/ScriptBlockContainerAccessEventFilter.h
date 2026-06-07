#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/ScriptBlockFilter.h"
#include "mc/scripting/modules/minecraft/ScriptContainerAccessSourceFilter.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft::EventFilters { struct ScriptBlockContainerAccessEventFilterData; }
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft::EventFilters {

struct ScriptBlockContainerAccessEventFilter {
public:
    // ScriptBlockContainerAccessEventFilter inner types define
    using Data = ::ScriptModuleMinecraft::EventFilters::ScriptBlockContainerAccessEventFilterData;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 168, ::std::optional<::ScriptModuleMinecraft::ScriptBlockFilter>> mBlockFilter;
    ::ll::
        TypedStorage<8, 440, ::std::optional<::ScriptModuleMinecraft::EventFilters::ScriptContainerAccessSourceFilter>>
            mAccessSourceFilter;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD void process();

    MCAPI bool
    shouldAllow(::ScriptModuleMinecraft::EventFilters::ScriptBlockContainerAccessEventFilterData const& data) const;

    MCAPI ~ScriptBlockContainerAccessEventFilter();
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

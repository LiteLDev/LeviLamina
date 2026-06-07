#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/ScriptActorFilter.h"
#include "mc/scripting/modules/minecraft/ScriptContainerAccessSourceFilter.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft::EventFilters { struct ScriptActorContainerAccessEventFilterData; }
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft::EventFilters {

struct ScriptActorContainerAccessEventFilter {
public:
    // ScriptActorContainerAccessEventFilter inner types define
    using Data = ::ScriptModuleMinecraft::EventFilters::ScriptActorContainerAccessEventFilterData;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 432, ::std::optional<::ScriptModuleMinecraft::ScriptActorFilter>> mActorFilter;
    ::ll::
        TypedStorage<8, 440, ::std::optional<::ScriptModuleMinecraft::EventFilters::ScriptContainerAccessSourceFilter>>
            mAccessSourceFilter;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD void process();

    MCAPI bool
    shouldAllow(::ScriptModuleMinecraft::EventFilters::ScriptActorContainerAccessEventFilterData const& data) const;

    MCAPI ~ScriptActorContainerAccessEventFilter();
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

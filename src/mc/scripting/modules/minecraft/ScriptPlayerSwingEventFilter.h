#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/items/ScriptHeldItemOption.h"
#include "mc/world/actor/ActorSwingSource.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft::EventFilters { struct ScriptPlayerSwingEventFilterData; }
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft::EventFilters {

struct ScriptPlayerSwingEventFilter {
public:
    // ScriptPlayerSwingEventFilter inner types define
    using Data = ::ScriptModuleMinecraft::EventFilters::ScriptPlayerSwingEventFilterData;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 2, ::std::optional<::ScriptModuleMinecraft::ScriptHeldItemOption>> mHeldItemOption;
    ::ll::TypedStorage<1, 2, ::std::optional<::ActorSwingSource>>                            mSwingSource;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft::EventFilters

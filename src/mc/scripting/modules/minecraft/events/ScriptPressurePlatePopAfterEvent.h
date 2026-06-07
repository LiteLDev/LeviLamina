#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/events/ScriptBlockEvent.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { struct ScriptPressurePlatePopAfterEventIntermediateData; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptPressurePlatePopAfterEvent : public ::ScriptModuleMinecraft::ScriptBlockEvent {
public:
    // ScriptPressurePlatePopAfterEvent inner types define
    using QueueType = ::ScriptModuleMinecraft::ScriptPressurePlatePopAfterEventIntermediateData;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mPreviousRedstonePower;
    ::ll::TypedStorage<4, 4, int> mRedstonePower;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPressurePlatePopAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptPressurePlatePopAfterEvent(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPressurePlatePopAfterEventIntermediateData> const& eventData,
        ::Scripting::WeakLifetimeScope const&                                                               scope
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPressurePlatePopAfterEventIntermediateData> const& eventData,
        ::Scripting::WeakLifetimeScope const&                                                               scope
    );
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft

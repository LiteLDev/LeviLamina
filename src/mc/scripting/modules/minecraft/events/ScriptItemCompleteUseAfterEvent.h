#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/events/ScriptItemCompleteUseEvent.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { struct ScriptItemCompleteUseIntermediateData; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptItemCompleteUseAfterEvent : public ::ScriptModuleMinecraft::ScriptItemCompleteUseEvent {
public:
    // ScriptItemCompleteUseAfterEvent inner types define
    using QueueType = ::ScriptModuleMinecraft::ScriptItemCompleteUseIntermediateData;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mUseDuration;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptItemCompleteUseAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptItemCompleteUseAfterEvent(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptItemCompleteUseIntermediateData> const& evtData,
        ::Scripting::WeakLifetimeScope const&                                                    scope
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();

    MCAPI static ::Scripting::ClassBinding bindV010();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptItemCompleteUseIntermediateData> const& evtData,
        ::Scripting::WeakLifetimeScope const&                                                    scope
    );
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft

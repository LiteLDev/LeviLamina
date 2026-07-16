#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/events/ScriptBlockEvent.h"
#include "mc/scripting/modules/minecraft/events/ScriptCustomComponentAfterEvent.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { struct ScriptBlockCustomComponentRedstoneUpdateEventIntermediateStorage; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptBlockCustomComponentRedstoneUpdateEvent : public ::ScriptModuleMinecraft::ScriptBlockEvent,
                                                       public ::ScriptModuleMinecraft::ScriptCustomComponentAfterEvent {
public:
    // ScriptBlockCustomComponentRedstoneUpdateEvent inner types define
    using IntermediateStorage =
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentRedstoneUpdateEventIntermediateStorage;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, short> mSignalLevel;
    ::ll::TypedStorage<2, 2, short> mPreviousSignalLevel;
    ::ll::TypedStorage<1, 1, bool>  mIsFirstUpdate;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBlockCustomComponentRedstoneUpdateEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptBlockCustomComponentRedstoneUpdateEvent(
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentRedstoneUpdateEventIntermediateStorage const& storage,
        ::Scripting::WeakLifetimeScope const&                                                            scope
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
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentRedstoneUpdateEventIntermediateStorage const& storage,
        ::Scripting::WeakLifetimeScope const&                                                            scope
    );
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft

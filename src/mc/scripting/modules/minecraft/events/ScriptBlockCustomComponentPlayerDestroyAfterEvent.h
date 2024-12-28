#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/events/ScriptBlockEvent.h"
#include "mc/scripting/modules/minecraft/events/ScriptCustomComponentAfterEvent.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptBlockCustomComponentInterface; }
namespace ScriptModuleMinecraft { struct ScriptBlockCustomComponentPlayerDestroyAfterEventIntermediateStorage; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptBlockCustomComponentPlayerDestroyAfterEvent
: public ::ScriptModuleMinecraft::ScriptBlockEvent,
  public ::ScriptModuleMinecraft::ScriptCustomComponentAfterEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnkc121be;
    ::ll::UntypedStorage<8, 32> mUnk6d1488;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBlockCustomComponentPlayerDestroyAfterEvent&
    operator=(ScriptBlockCustomComponentPlayerDestroyAfterEvent const&);
    ScriptBlockCustomComponentPlayerDestroyAfterEvent(ScriptBlockCustomComponentPlayerDestroyAfterEvent const&);
    ScriptBlockCustomComponentPlayerDestroyAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptBlockCustomComponentPlayerDestroyAfterEvent(
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentPlayerDestroyAfterEventIntermediateStorage const& eventData,
        ::Scripting::WeakLifetimeScope const&                                                                scope
    );

    MCAPI ::ScriptModuleMinecraft::ScriptBlockCustomComponentPlayerDestroyAfterEvent&
    operator=(::ScriptModuleMinecraft::ScriptBlockCustomComponentPlayerDestroyAfterEvent&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();

    MCAPI static ::std::vector<::gsl::not_null<::ScriptModuleMinecraft::ScriptBlockCustomComponentInterface const*>>
    tryGetComponentsToExecute(
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentPlayerDestroyAfterEventIntermediateStorage const& eventData
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentPlayerDestroyAfterEventIntermediateStorage const& eventData,
        ::Scripting::WeakLifetimeScope const&                                                                scope
    );
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft

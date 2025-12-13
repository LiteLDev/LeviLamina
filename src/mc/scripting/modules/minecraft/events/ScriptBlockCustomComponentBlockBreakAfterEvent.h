#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/events/ScriptBlockEvent.h"
#include "mc/scripting/modules/minecraft/events/ScriptCustomComponentAfterEvent.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { struct ScriptBlockCustomComponentBlockBreakAfterEventIntermediateStorage; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptBlockCustomComponentBlockBreakAfterEvent
: public ::ScriptModuleMinecraft::ScriptBlockEvent,
  public ::ScriptModuleMinecraft::ScriptCustomComponentAfterEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnk8fd353;
    ::ll::UntypedStorage<8, 40> mUnk4fb130;
    ::ll::UntypedStorage<8, 32> mUnk42b233;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBlockCustomComponentBlockBreakAfterEvent& operator=(ScriptBlockCustomComponentBlockBreakAfterEvent const&);
    ScriptBlockCustomComponentBlockBreakAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptBlockCustomComponentBlockBreakAfterEvent(
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentBlockBreakAfterEvent&&
    );

    MCNAPI ScriptBlockCustomComponentBlockBreakAfterEvent(
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentBlockBreakAfterEvent const&
    );

    MCNAPI ScriptBlockCustomComponentBlockBreakAfterEvent(
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentBlockBreakAfterEventIntermediateStorage const& eventData,
        ::Scripting::WeakLifetimeScope const&                                                             scope
    );

    MCNAPI ~ScriptBlockCustomComponentBlockBreakAfterEvent();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptBlockCustomComponentBlockBreakAfterEvent&&);

    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptBlockCustomComponentBlockBreakAfterEvent const&);

    MCNAPI void* $ctor(
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentBlockBreakAfterEventIntermediateStorage const& eventData,
        ::Scripting::WeakLifetimeScope const&                                                             scope
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft

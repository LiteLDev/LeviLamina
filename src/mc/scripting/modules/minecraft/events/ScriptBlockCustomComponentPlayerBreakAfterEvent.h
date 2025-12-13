#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/events/ScriptBlockEvent.h"
#include "mc/scripting/modules/minecraft/events/ScriptCustomComponentAfterEvent.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { struct ScriptBlockCustomComponentPlayerBreakAfterEventIntermediateStorage; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptBlockCustomComponentPlayerBreakAfterEvent
: public ::ScriptModuleMinecraft::ScriptBlockEvent,
  public ::ScriptModuleMinecraft::ScriptCustomComponentAfterEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnk7a142c;
    ::ll::UntypedStorage<8, 32> mUnk195c4f;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBlockCustomComponentPlayerBreakAfterEvent& operator=(ScriptBlockCustomComponentPlayerBreakAfterEvent const&);
    ScriptBlockCustomComponentPlayerBreakAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptBlockCustomComponentPlayerBreakAfterEvent(
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentPlayerBreakAfterEvent&&
    );

    MCNAPI ScriptBlockCustomComponentPlayerBreakAfterEvent(
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentPlayerBreakAfterEvent const&
    );

    MCNAPI ~ScriptBlockCustomComponentPlayerBreakAfterEvent();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();

    MCNAPI static ::Scripting::ClassBinding bindV1();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptBlockCustomComponentPlayerBreakAfterEvent&&);

    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptBlockCustomComponentPlayerBreakAfterEvent const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft

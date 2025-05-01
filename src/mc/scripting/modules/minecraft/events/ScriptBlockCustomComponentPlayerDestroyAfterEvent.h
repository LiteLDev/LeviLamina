#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/events/ScriptBlockEvent.h"
#include "mc/scripting/modules/minecraft/events/ScriptCustomComponentAfterEvent.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { struct ScriptBlockCustomComponentPlayerDestroyAfterEventIntermediateStorage; }
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
    ScriptBlockCustomComponentPlayerDestroyAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptBlockCustomComponentPlayerDestroyAfterEvent(::ScriptModuleMinecraft::
                                                                 ScriptBlockCustomComponentPlayerDestroyAfterEvent&&);

    MCNAPI
    ScriptBlockCustomComponentPlayerDestroyAfterEvent(::ScriptModuleMinecraft::
                                                          ScriptBlockCustomComponentPlayerDestroyAfterEvent const&);

    MCNAPI ~ScriptBlockCustomComponentPlayerDestroyAfterEvent();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptBlockCustomComponentPlayerDestroyAfterEvent&&);

    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptBlockCustomComponentPlayerDestroyAfterEvent const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft

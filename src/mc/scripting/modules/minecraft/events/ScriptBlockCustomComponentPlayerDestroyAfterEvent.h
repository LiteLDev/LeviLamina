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
    MCAPI ScriptBlockCustomComponentPlayerDestroyAfterEvent(::ScriptModuleMinecraft::
                                                                ScriptBlockCustomComponentPlayerDestroyAfterEvent&&);

    MCAPI
    ScriptBlockCustomComponentPlayerDestroyAfterEvent(::ScriptModuleMinecraft::
                                                          ScriptBlockCustomComponentPlayerDestroyAfterEvent const&);

    MCAPI ~ScriptBlockCustomComponentPlayerDestroyAfterEvent();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::ScriptModuleMinecraft::ScriptBlockCustomComponentPlayerDestroyAfterEvent&&);

    MCFOLD void* $ctor(::ScriptModuleMinecraft::ScriptBlockCustomComponentPlayerDestroyAfterEvent const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft

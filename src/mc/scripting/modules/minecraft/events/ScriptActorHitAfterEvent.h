#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptActorHitAfterEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkb17479;
    ::ll::UntypedStorage<8, 40> mUnk63b410;
    ::ll::UntypedStorage<8, 40> mUnkf4cca9;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptActorHitAfterEvent& operator=(ScriptActorHitAfterEvent const&);
    ScriptActorHitAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptActorHitAfterEvent(::ScriptModuleMinecraft::ScriptActorHitAfterEvent&&);

    MCNAPI ScriptActorHitAfterEvent(::ScriptModuleMinecraft::ScriptActorHitAfterEvent const&);

    MCNAPI ~ScriptActorHitAfterEvent();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bindV010();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptActorHitAfterEvent&&);

    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptActorHitAfterEvent const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft

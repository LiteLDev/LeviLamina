#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptActorHurtAfterEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk8e9c39;
    ::ll::UntypedStorage<8, 88> mUnkd8fc28;
    ::ll::UntypedStorage<4, 4>  mUnkbc914a;
    ::ll::UntypedStorage<8, 40> mUnk2ac240;
    ::ll::UntypedStorage<8, 40> mUnk4c5039;
    ::ll::UntypedStorage<4, 4>  mUnk829ec8;
    ::ll::UntypedStorage<8, 32> mUnk3edad4;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptActorHurtAfterEvent& operator=(ScriptActorHurtAfterEvent const&);
    ScriptActorHurtAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptActorHurtAfterEvent(::ScriptModuleMinecraft::ScriptActorHurtAfterEvent const&);

    MCNAPI ScriptActorHurtAfterEvent(::ScriptModuleMinecraft::ScriptActorHurtAfterEvent&&);

    MCNAPI ::ScriptModuleMinecraft::ScriptActorHurtAfterEvent&
    operator=(::ScriptModuleMinecraft::ScriptActorHurtAfterEvent&&);

    MCNAPI ~ScriptActorHurtAfterEvent();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();

    MCNAPI static ::Scripting::ClassBinding bindV010();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptActorHurtAfterEvent const&);

    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptActorHurtAfterEvent&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft

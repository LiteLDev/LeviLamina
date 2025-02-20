#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/ClassBindingBuilderReadOnly.h"

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
    MCAPI ScriptActorHurtAfterEvent(::ScriptModuleMinecraft::ScriptActorHurtAfterEvent const&);

    MCAPI ScriptActorHurtAfterEvent(::ScriptModuleMinecraft::ScriptActorHurtAfterEvent&&);

    MCAPI ::ScriptModuleMinecraft::ScriptActorHurtAfterEvent&
    operator=(::ScriptModuleMinecraft::ScriptActorHurtAfterEvent&&);

    MCAPI ~ScriptActorHurtAfterEvent();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilderReadOnly<::ScriptModuleMinecraft::ScriptActorHurtAfterEvent> bind();

    MCAPI static ::Scripting::ClassBindingBuilderReadOnly<::ScriptModuleMinecraft::ScriptActorHurtAfterEvent>
    bindV010();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptActorHurtAfterEvent const&);

    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptActorHurtAfterEvent&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft

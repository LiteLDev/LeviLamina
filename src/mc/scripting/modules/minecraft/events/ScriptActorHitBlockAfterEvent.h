#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/ClassBindingBuilderReadOnly.h"

namespace ScriptModuleMinecraft {

struct ScriptActorHitBlockAfterEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkcd8329;
    ::ll::UntypedStorage<8, 32> mUnk5e0976;
    ::ll::UntypedStorage<8, 32> mUnk86abd5;
    ::ll::UntypedStorage<4, 4>  mUnkd4a138;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptActorHitBlockAfterEvent& operator=(ScriptActorHitBlockAfterEvent const&);
    ScriptActorHitBlockAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptActorHitBlockAfterEvent(::ScriptModuleMinecraft::ScriptActorHitBlockAfterEvent const&);

    MCAPI ~ScriptActorHitBlockAfterEvent();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilderReadOnly<::ScriptModuleMinecraft::ScriptActorHitBlockAfterEvent>
    bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptActorHitBlockAfterEvent const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft

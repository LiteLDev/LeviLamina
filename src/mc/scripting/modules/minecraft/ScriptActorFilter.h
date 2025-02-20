#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/InterfaceBindingBuilder.h"

namespace ScriptModuleMinecraft {

class ScriptActorFilter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8>  mUnkca00de;
    ::ll::UntypedStorage<4, 8>  mUnkf2e62c;
    ::ll::UntypedStorage<4, 8>  mUnk3a68a5;
    ::ll::UntypedStorage<4, 8>  mUnkb51740;
    ::ll::UntypedStorage<4, 8>  mUnkadb959;
    ::ll::UntypedStorage<4, 8>  mUnkabce4a;
    ::ll::UntypedStorage<8, 40> mUnk4a7187;
    ::ll::UntypedStorage<8, 32> mUnk9f91ec;
    ::ll::UntypedStorage<8, 32> mUnk3e4f93;
    ::ll::UntypedStorage<8, 40> mUnk236f47;
    ::ll::UntypedStorage<4, 8>  mUnk87bfb7;
    ::ll::UntypedStorage<8, 32> mUnke28c0f;
    ::ll::UntypedStorage<8, 32> mUnk3820c7;
    ::ll::UntypedStorage<8, 32> mUnk9a2af1;
    ::ll::UntypedStorage<8, 32> mUnka036c0;
    ::ll::UntypedStorage<8, 32> mUnk99044e;
    ::ll::UntypedStorage<8, 32> mUnk831225;
    ::ll::UntypedStorage<8, 32> mUnkcbb533;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptActorFilter();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptActorFilter(::ScriptModuleMinecraft::ScriptActorFilter&&);

    MCAPI ScriptActorFilter(::ScriptModuleMinecraft::ScriptActorFilter const&);

    MCAPI ::ScriptModuleMinecraft::ScriptActorFilter& operator=(::ScriptModuleMinecraft::ScriptActorFilter const&);

    MCAPI ::ScriptModuleMinecraft::ScriptActorFilter& operator=(::ScriptModuleMinecraft::ScriptActorFilter&&);

    MCAPI ~ScriptActorFilter();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::InterfaceBindingBuilder<::ScriptModuleMinecraft::ScriptActorFilter> bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptActorFilter&&);

    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptActorFilter const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft

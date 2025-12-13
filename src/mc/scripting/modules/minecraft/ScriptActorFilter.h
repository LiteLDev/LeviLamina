#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

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
    MCNAPI ScriptActorFilter(::ScriptModuleMinecraft::ScriptActorFilter&&);

    MCNAPI ScriptActorFilter(::ScriptModuleMinecraft::ScriptActorFilter const&);

    MCNAPI ::ScriptModuleMinecraft::ScriptActorFilter& operator=(::ScriptModuleMinecraft::ScriptActorFilter&&);

    MCNAPI ::ScriptModuleMinecraft::ScriptActorFilter& operator=(::ScriptModuleMinecraft::ScriptActorFilter const&);

    MCNAPI ~ScriptActorFilter();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptActorFilter&&);

    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptActorFilter const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft

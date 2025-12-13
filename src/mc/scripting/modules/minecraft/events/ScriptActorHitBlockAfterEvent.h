#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

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
    MCNAPI ScriptActorHitBlockAfterEvent(::ScriptModuleMinecraft::ScriptActorHitBlockAfterEvent const&);

    MCNAPI ~ScriptActorHitBlockAfterEvent();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptActorHitBlockAfterEvent const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptActorHitEntityAfterEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnke3c265;
    ::ll::UntypedStorage<8, 32> mUnk188afe;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptActorHitEntityAfterEvent& operator=(ScriptActorHitEntityAfterEvent const&);
    ScriptActorHitEntityAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptActorHitEntityAfterEvent(::ScriptModuleMinecraft::ScriptActorHitEntityAfterEvent const&);

    MCNAPI ~ScriptActorHitEntityAfterEvent();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptActorHitEntityAfterEvent const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft

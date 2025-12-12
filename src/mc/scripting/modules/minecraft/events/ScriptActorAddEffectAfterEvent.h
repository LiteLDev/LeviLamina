#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { struct ScriptActorAddEffectAfterEventIntermediateData; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptActorAddEffectAfterEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk3b0c4e;
    ::ll::UntypedStorage<8, 32> mUnke1bb0a;
    ::ll::UntypedStorage<8, 32> mUnk30529e;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptActorAddEffectAfterEvent& operator=(ScriptActorAddEffectAfterEvent const&);
    ScriptActorAddEffectAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptActorAddEffectAfterEvent(::ScriptModuleMinecraft::ScriptActorAddEffectAfterEvent const&);

    MCNAPI ~ScriptActorAddEffectAfterEvent();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptActorAddEffectAfterEvent const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptActorAddEffectBeforeEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk16e3d4;
    ::ll::UntypedStorage<8, 32> mUnk47c299;
    ::ll::UntypedStorage<4, 4>  mUnka997a7;
    ::ll::UntypedStorage<1, 1>  mUnk651043;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptActorAddEffectBeforeEvent& operator=(ScriptActorAddEffectBeforeEvent const&);
    ScriptActorAddEffectBeforeEvent(ScriptActorAddEffectBeforeEvent const&);
    ScriptActorAddEffectBeforeEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::ScriptModuleMinecraft::ScriptActorAddEffectBeforeEvent&
    operator=(::ScriptModuleMinecraft::ScriptActorAddEffectBeforeEvent&&);

    MCNAPI ~ScriptActorAddEffectBeforeEvent();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft

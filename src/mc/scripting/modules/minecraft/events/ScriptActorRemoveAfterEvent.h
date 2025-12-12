#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptActorRemoveAfterEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkec1221;
    ::ll::UntypedStorage<8, 32> mUnkb5b28c;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptActorRemoveAfterEvent& operator=(ScriptActorRemoveAfterEvent const&);
    ScriptActorRemoveAfterEvent(ScriptActorRemoveAfterEvent const&);
    ScriptActorRemoveAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::ScriptModuleMinecraft::ScriptActorRemoveAfterEvent&
    operator=(::ScriptModuleMinecraft::ScriptActorRemoveAfterEvent&&);

    MCNAPI ~ScriptActorRemoveAfterEvent();
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

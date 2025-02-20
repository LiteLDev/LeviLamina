#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/ClassBindingBuilderReadOnly.h"

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
    MCFOLD ::ScriptModuleMinecraft::ScriptActorRemoveAfterEvent&
    operator=(::ScriptModuleMinecraft::ScriptActorRemoveAfterEvent&&);

    MCAPI ~ScriptActorRemoveAfterEvent();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilderReadOnly<::ScriptModuleMinecraft::ScriptActorRemoveAfterEvent> bind();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft

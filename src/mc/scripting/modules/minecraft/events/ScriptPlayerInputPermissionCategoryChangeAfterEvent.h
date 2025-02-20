#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/ClassBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptPlayerInputPermissionCategoryChangeAfterEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk582b07;
    ::ll::UntypedStorage<1, 1>  mUnk85edce;
    ::ll::UntypedStorage<1, 1>  mUnkcfc97a;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPlayerInputPermissionCategoryChangeAfterEvent&
    operator=(ScriptPlayerInputPermissionCategoryChangeAfterEvent const&);
    ScriptPlayerInputPermissionCategoryChangeAfterEvent(ScriptPlayerInputPermissionCategoryChangeAfterEvent const&);
    ScriptPlayerInputPermissionCategoryChangeAfterEvent();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<
        ::ScriptModuleMinecraft::ScriptPlayerInputPermissionCategoryChangeAfterEvent>
    bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft

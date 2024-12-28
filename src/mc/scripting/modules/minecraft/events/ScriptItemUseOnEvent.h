#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptItemUseOnEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnke9534a;
    ::ll::UntypedStorage<4, 4>  mUnk90638f;
    ::ll::UntypedStorage<4, 12> mUnk62f204;
    ::ll::UntypedStorage<8, 32> mUnk259048;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptItemUseOnEvent& operator=(ScriptItemUseOnEvent const&);
    ScriptItemUseOnEvent(ScriptItemUseOnEvent const&);
    ScriptItemUseOnEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ScriptItemUseOnEvent();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptItemUseOnEvent> bind();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft

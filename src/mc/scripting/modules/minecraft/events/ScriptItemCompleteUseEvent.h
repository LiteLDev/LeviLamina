#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptItemStack; }
namespace ScriptModuleMinecraft { class ScriptPlayer; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptItemCompleteUseEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk5ba2ff;
    ::ll::UntypedStorage<8, 32> mUnk775e66;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptItemCompleteUseEvent& operator=(ScriptItemCompleteUseEvent const&);
    ScriptItemCompleteUseEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptItemCompleteUseEvent(::ScriptModuleMinecraft::ScriptItemCompleteUseEvent const&);

    MCAPI ScriptItemCompleteUseEvent(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack> item,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayer>    player
    );

    MCAPI ~ScriptItemCompleteUseEvent();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptItemCompleteUseEvent> bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::ScriptModuleMinecraft::ScriptItemCompleteUseEvent const&);

    MCAPI void* $ctor(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack> item,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayer>    player
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft

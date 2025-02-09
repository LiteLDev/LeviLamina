#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/lifetime_registry/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptBlockComponentRegistry; }
namespace ScriptModuleMinecraft { class ScriptItemComponentRegistry; }
namespace ScriptModuleMinecraft { class ScriptPropertyRegistry; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

struct ScriptingWorldInitializeEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPropertyRegistry>>
        mRegistry;
    ::ll::
        TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockComponentRegistry>>
            mBlockComponentRegistry;
    ::ll::
        TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemComponentRegistry>>
                                                              mItemComponentRegistry;
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope> mScope;
    ::ll::TypedStorage<1, 1, bool>                            mFinalEvent;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ScriptingWorldInitializeEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/lifetime_registry/WeakLifetimeScope.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptBlockComponentRegistry; }
namespace ScriptModuleMinecraft { class ScriptItemComponentRegistry; }
namespace ScriptModuleMinecraft { class ScriptPropertyRegistry; }
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
    // prevent constructor by default
    ScriptingWorldInitializeEvent& operator=(ScriptingWorldInitializeEvent const&);
    ScriptingWorldInitializeEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptingWorldInitializeEvent(::ScriptingWorldInitializeEvent const&);

    MCNAPI ~ScriptingWorldInitializeEvent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptingWorldInitializeEvent const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

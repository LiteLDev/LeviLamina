#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptDimension; }
namespace ScriptModuleMinecraft { class ScriptPlayer; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptPlayerDimensionChangeAfterEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayer>> mPlayerHandle;
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptDimension>> mFromDimension;
    ::ll::TypedStorage<4, 12, ::Vec3> mFromLocation;
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptDimension>> mToDimension;
    ::ll::TypedStorage<4, 12, ::Vec3> mToLocation;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPlayerDimensionChangeAfterEvent& operator=(ScriptPlayerDimensionChangeAfterEvent const&);
    ScriptPlayerDimensionChangeAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptPlayerDimensionChangeAfterEvent(::ScriptModuleMinecraft::ScriptPlayerDimensionChangeAfterEvent const&);

    MCAPI ScriptPlayerDimensionChangeAfterEvent(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayer> playerHandle, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptDimension> fromDimension, ::Vec3 fromLocation, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptDimension> toDimension, ::Vec3 toLocation);

    MCAPI ~ScriptPlayerDimensionChangeAfterEvent();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptPlayerDimensionChangeAfterEvent const&);

    MCAPI void* $ctor(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayer> playerHandle, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptDimension> fromDimension, ::Vec3 fromLocation, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptDimension> toDimension, ::Vec3 toLocation);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

};

}

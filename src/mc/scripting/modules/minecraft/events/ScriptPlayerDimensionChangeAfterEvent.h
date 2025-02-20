#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class Vec3;
namespace ScriptModuleMinecraft { class ScriptDimension; }
namespace ScriptModuleMinecraft { class ScriptPlayer; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptPlayerDimensionChangeAfterEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk2f3b64;
    ::ll::UntypedStorage<8, 32> mUnk5326b7;
    ::ll::UntypedStorage<4, 12> mUnk6edd65;
    ::ll::UntypedStorage<8, 32> mUnk2f364e;
    ::ll::UntypedStorage<4, 12> mUnke1ab96;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPlayerDimensionChangeAfterEvent& operator=(ScriptPlayerDimensionChangeAfterEvent const&);
    ScriptPlayerDimensionChangeAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptPlayerDimensionChangeAfterEvent(::ScriptModuleMinecraft::ScriptPlayerDimensionChangeAfterEvent const&);

    MCAPI ScriptPlayerDimensionChangeAfterEvent(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayer>    playerHandle,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptDimension> fromDimension,
        ::Vec3                                                                         fromLocation,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptDimension> toDimension,
        ::Vec3                                                                         toLocation
    );

    MCAPI ~ScriptPlayerDimensionChangeAfterEvent();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptPlayerDimensionChangeAfterEvent>
    bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptPlayerDimensionChangeAfterEvent const&);

    MCAPI void* $ctor(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayer>    playerHandle,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptDimension> fromDimension,
        ::Vec3                                                                         fromLocation,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptDimension> toDimension,
        ::Vec3                                                                         toLocation
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft

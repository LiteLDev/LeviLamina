#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class Vec3;
struct WorldPosition;
namespace ScriptModuleMinecraft { class ScriptDimension; }
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptDimensionLocation {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptDimension>>
                                    mDimension;
    ::ll::TypedStorage<4, 4, float> mX;
    ::ll::TypedStorage<4, 4, float> mY;
    ::ll::TypedStorage<4, 4, float> mZ;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptDimensionLocation();

    MCAPI ScriptDimensionLocation(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptDimension> const& dimension,
        float                                                                                 x,
        float                                                                                 y,
        float                                                                                 z
    );

    MCAPI ::Vec3 getLocation() const;

    MCAPI ::WorldPosition getWorldPosition() const;

    MCAPI bool operator==(::ScriptModuleMinecraft::ScriptDimensionLocation const& other) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptDimension> const& dimension,
        float                                                                                 x,
        float                                                                                 y,
        float                                                                                 z
    );
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft

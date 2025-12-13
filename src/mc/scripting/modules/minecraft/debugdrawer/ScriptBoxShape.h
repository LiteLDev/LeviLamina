#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/scripting/modules/minecraft/debugdrawer/ScriptDebugShape.h"

// auto generated forward declare list
// clang-format off
struct ShapeDataPayload;
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleDebugUtilities {

class ScriptBoxShape : public ::ScriptModuleDebugUtilities::ScriptDebugShape {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::Vec3> mBoxBound;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBoxShape();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void populatePacketData(::ShapeDataPayload& packet) const /*override*/;

    virtual void applyUpdatedData(::ShapeDataPayload const& packet) /*override*/;

    virtual ~ScriptBoxShape() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptBoxShape(::ScriptModuleDebugUtilities::ScriptBoxShape const&);

    MCFOLD ::ScriptModuleDebugUtilities::ScriptBoxShape& operator=(::ScriptModuleDebugUtilities::ScriptBoxShape const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ScriptModuleDebugUtilities::ScriptBoxShape const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $populatePacketData(::ShapeDataPayload& packet) const;

    MCAPI void $applyUpdatedData(::ShapeDataPayload const& packet);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleDebugUtilities

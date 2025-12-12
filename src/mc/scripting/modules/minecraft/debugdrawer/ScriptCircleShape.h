#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/debugdrawer/ScriptDebugShape.h"

// auto generated forward declare list
// clang-format off
struct ShapeDataPayload;
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleDebugUtilities {

class ScriptCircleShape : public ::ScriptModuleDebugUtilities::ScriptDebugShape {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mSegments;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptCircleShape();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void populatePacketData(::ShapeDataPayload& packet) const /*override*/;

    virtual void applyUpdatedData(::ShapeDataPayload const& packet) /*override*/;

    virtual ~ScriptCircleShape() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptCircleShape(::ScriptModuleDebugUtilities::ScriptCircleShape const&);

    MCFOLD ::ScriptModuleDebugUtilities::ScriptCircleShape&
    operator=(::ScriptModuleDebugUtilities::ScriptCircleShape const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::ScriptModuleDebugUtilities::ScriptCircleShape const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $populatePacketData(::ShapeDataPayload& packet) const;

    MCFOLD void $applyUpdatedData(::ShapeDataPayload const& packet);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleDebugUtilities

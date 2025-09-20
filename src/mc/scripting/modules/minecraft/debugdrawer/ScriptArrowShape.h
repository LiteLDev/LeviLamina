#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/debugdrawer/ScriptLineShape.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleDebugUtilities { struct PacketShapeData; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleDebugUtilities {

class ScriptArrowShape : public ::ScriptModuleDebugUtilities::ScriptLineShape {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mHeadRadius;
    ::ll::TypedStorage<4, 4, float> mHeadLength;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptArrowShape(ScriptArrowShape const&);
    ScriptArrowShape();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void populatePacketData(::ScriptModuleDebugUtilities::PacketShapeData& packet) const /*override*/;

    // vIndex: 2
    virtual void applyUpdatedData(::ScriptModuleDebugUtilities::PacketShapeData const& packet) /*override*/;

    // vIndex: 0
    virtual ~ScriptArrowShape() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::ScriptModuleDebugUtilities::ScriptArrowShape&
    operator=(::ScriptModuleDebugUtilities::ScriptArrowShape const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $populatePacketData(::ScriptModuleDebugUtilities::PacketShapeData& packet) const;

    MCAPI void $applyUpdatedData(::ScriptModuleDebugUtilities::PacketShapeData const& packet);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleDebugUtilities

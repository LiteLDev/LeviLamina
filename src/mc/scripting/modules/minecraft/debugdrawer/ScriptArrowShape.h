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
    ::ll::UntypedStorage<4, 4> mUnkf0ce43;
    ::ll::UntypedStorage<4, 4> mUnkb3728f;
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
    MCNAPI ::ScriptModuleDebugUtilities::ScriptArrowShape&
    operator=(::ScriptModuleDebugUtilities::ScriptArrowShape const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $populatePacketData(::ScriptModuleDebugUtilities::PacketShapeData& packet) const;

    MCNAPI void $applyUpdatedData(::ScriptModuleDebugUtilities::PacketShapeData const& packet);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleDebugUtilities

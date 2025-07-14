#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/debugdrawer/ScriptDebugShape.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleDebugUtilities { struct PacketShapeData; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleDebugUtilities {

class ScriptLineShape : public ::ScriptModuleDebugUtilities::ScriptDebugShape {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnkab04f0;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptLineShape();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void populatePacketData(::ScriptModuleDebugUtilities::PacketShapeData& packet) const /*override*/;

    // vIndex: 2
    virtual void applyUpdatedData(::ScriptModuleDebugUtilities::PacketShapeData const& packet) /*override*/;

    // vIndex: 0
    virtual ~ScriptLineShape() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptLineShape(::ScriptModuleDebugUtilities::ScriptLineShape const&);

    MCNAPI ::ScriptModuleDebugUtilities::ScriptLineShape&
    operator=(::ScriptModuleDebugUtilities::ScriptLineShape const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleDebugUtilities::ScriptLineShape const&);
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

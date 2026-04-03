#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/ServerWaypoint.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { struct ScriptWaypointTextureBounds; }
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptWaypointTextureSelector {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::ScriptModuleMinecraft::ScriptWaypointTextureBounds>> mTextureBoundsList;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::ServerWaypoint::TextureSelector getNative() const;

    MCAPI ~ScriptWaypointTextureSelector();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft

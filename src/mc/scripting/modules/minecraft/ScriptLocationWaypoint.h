#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/Result.h"
#include "mc/scripting/modules/minecraft/ScriptDimensionLocation.h"
#include "mc/scripting/modules/minecraft/ScriptWaypoint.h"

// auto generated forward declare list
// clang-format off
class ServerWaypoint;
namespace ScriptModuleMinecraft { struct ScriptInvalidWaypointError; }
namespace ScriptModuleMinecraft { struct ScriptInvalidWaypointTextureSelectorError; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptLocationWaypoint : public ::ScriptModuleMinecraft::ScriptWaypoint {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::ScriptModuleMinecraft::ScriptDimensionLocation> mLocation;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool isValid() const /*override*/;

    virtual ::Scripting::Result<
        ::ScriptModuleMinecraft::ScriptDimensionLocation,
        ::ScriptModuleMinecraft::ScriptInvalidWaypointError,
        ::ScriptModuleMinecraft::ScriptInvalidWaypointTextureSelectorError>
    getDimensionLocation() const /*override*/;

    virtual ::std::unique_ptr<::ServerWaypoint> createWaypoint() const /*override*/;

    virtual ~ScriptLocationWaypoint() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void setDimensionLocation(::ScriptModuleMinecraft::ScriptDimensionLocation const& dimensionLocation);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $isValid() const;

    MCAPI ::Scripting::Result<
        ::ScriptModuleMinecraft::ScriptDimensionLocation,
        ::ScriptModuleMinecraft::ScriptInvalidWaypointError,
        ::ScriptModuleMinecraft::ScriptInvalidWaypointTextureSelectorError>
    $getDimensionLocation() const;

    MCAPI ::std::unique_ptr<::ServerWaypoint> $createWaypoint() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft

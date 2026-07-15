#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/runtime/scripting/Result.h"
#include "mc/scripting/modules/minecraft/ScriptEntityVisibilityRules.h"
#include "mc/scripting/modules/minecraft/ScriptWaypoint.h"

// auto generated forward declare list
// clang-format off
class ServerWaypoint;
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace ScriptModuleMinecraft { struct ScriptDimensionLocation; }
namespace ScriptModuleMinecraft { struct ScriptInvalidWaypointError; }
namespace ScriptModuleMinecraft { struct ScriptInvalidWaypointTextureSelectorError; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptEntityWaypoint : public ::ScriptModuleMinecraft::ScriptWaypoint {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::ScriptModuleMinecraft::ScriptEntityVisibilityRules const> mEntityRules;
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor> const> mEntity;
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
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace ScriptModuleMinecraft

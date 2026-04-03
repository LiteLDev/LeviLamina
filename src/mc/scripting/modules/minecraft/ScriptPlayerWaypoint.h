#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/runtime/Result.h"
#include "mc/scripting/modules/minecraft/ScriptEntityWaypoint.h"
#include "mc/scripting/modules/minecraft/ScriptPlayerVisibilityRules.h"

// auto generated forward declare list
// clang-format off
class ServerWaypoint;
namespace ScriptModuleMinecraft { class ScriptPlayer; }
namespace ScriptModuleMinecraft { class ScriptRGB; }
namespace ScriptModuleMinecraft { struct ScriptInvalidWaypointError; }
namespace ScriptModuleMinecraft { struct ScriptInvalidWaypointTextureSelectorError; }
namespace ScriptModuleMinecraft { struct ScriptWaypointTextureSelector; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptPlayerWaypoint : public ::ScriptModuleMinecraft::ScriptEntityWaypoint {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 2, ::ScriptModuleMinecraft::ScriptPlayerVisibilityRules const> mPlayerRules;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPlayerWaypoint();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::unique_ptr<::ServerWaypoint> createWaypoint() const /*override*/;

    virtual ~ScriptPlayerWaypoint() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptPlayerWaypoint(
        ::Scripting::WeakLifetimeScope const&                                       scope,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayer> player,
        ::ScriptModuleMinecraft::ScriptWaypointTextureSelector                      textureSelector,
        ::ScriptModuleMinecraft::ScriptPlayerVisibilityRules const&                 playerRules,
        ::std::optional<::ScriptModuleMinecraft::ScriptRGB> const&                  color
    );

    MCAPI ::Scripting::Result<
        ::ScriptModuleMinecraft::ScriptPlayerVisibilityRules,
        ::ScriptModuleMinecraft::ScriptInvalidWaypointError,
        ::ScriptModuleMinecraft::ScriptInvalidWaypointTextureSelectorError>
    getPlayerRules();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Scripting::WeakLifetimeScope const&                                       scope,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayer> player,
        ::ScriptModuleMinecraft::ScriptWaypointTextureSelector                      textureSelector,
        ::ScriptModuleMinecraft::ScriptPlayerVisibilityRules const&                 playerRules,
        ::std::optional<::ScriptModuleMinecraft::ScriptRGB> const&                  color
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::unique_ptr<::ServerWaypoint> $createWaypoint() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft

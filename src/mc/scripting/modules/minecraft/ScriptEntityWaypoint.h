#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/runtime/Result.h"
#include "mc/scripting/modules/minecraft/ScriptEntityVisibilityRules.h"
#include "mc/scripting/modules/minecraft/ScriptWaypoint.h"

// auto generated forward declare list
// clang-format off
class ServerWaypoint;
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace ScriptModuleMinecraft { class ScriptRGB; }
namespace ScriptModuleMinecraft { struct ScriptDimensionLocation; }
namespace ScriptModuleMinecraft { struct ScriptInvalidWaypointError; }
namespace ScriptModuleMinecraft { struct ScriptInvalidWaypointTextureSelectorError; }
namespace ScriptModuleMinecraft { struct ScriptWaypointTextureSelector; }
namespace Scripting { class WeakLifetimeScope; }
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
    // prevent constructor by default
    ScriptEntityWaypoint();

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

    virtual ~ScriptEntityWaypoint() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptEntityWaypoint(
        ::Scripting::WeakLifetimeScope const&                                      scope,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor> entity,
        ::ScriptModuleMinecraft::ScriptWaypointTextureSelector const&              textureSelector,
        ::ScriptModuleMinecraft::ScriptEntityVisibilityRules const&                entityRules,
        ::std::optional<::ScriptModuleMinecraft::ScriptRGB> const&                 color
    );

    MCAPI ::Scripting::Result<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>,
        ::ScriptModuleMinecraft::ScriptInvalidWaypointError,
        ::ScriptModuleMinecraft::ScriptInvalidWaypointTextureSelectorError>
    getEntity();

    MCAPI ::Scripting::Result<
        ::ScriptModuleMinecraft::ScriptEntityVisibilityRules,
        ::ScriptModuleMinecraft::ScriptInvalidWaypointError,
        ::ScriptModuleMinecraft::ScriptInvalidWaypointTextureSelectorError>
    getEntityRules();
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
        ::Scripting::WeakLifetimeScope const&                                      scope,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor> entity,
        ::ScriptModuleMinecraft::ScriptWaypointTextureSelector const&              textureSelector,
        ::ScriptModuleMinecraft::ScriptEntityVisibilityRules const&                entityRules,
        ::std::optional<::ScriptModuleMinecraft::ScriptRGB> const&                 color
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $isValid() const;

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

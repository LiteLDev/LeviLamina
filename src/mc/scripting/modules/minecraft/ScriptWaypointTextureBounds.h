#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/Result.h"
#include "mc/world/ServerWaypoint.h"
#include "mc/world/actor/player/vanilla_waypoint_manager_constants/ImageType.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct EngineError; }
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptWaypointTextureBounds {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 16, ::ServerWaypoint::Texture> mTexture;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::Scripting::Result<::VanillaWaypointManagerConstants::ImageType, ::Scripting::EngineError>
    getTexture() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft

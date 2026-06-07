#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/Result.h"
#include "mc/world/ServerWaypoint.h"
#include "mc/world/actor/player/vanilla_waypoint_manager_constants/ImageType.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { struct ScriptCustomTexture; }
namespace Scripting { struct EngineError; }
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptWaypointTextureBounds {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 56, ::ServerWaypoint::Texture>                                    mTexture;
    ::ll::TypedStorage<4, 8, ::std::optional<::VanillaWaypointManagerConstants::ImageType>> mImageType;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::Scripting::Result<
        ::std::variant<::VanillaWaypointManagerConstants::ImageType, ::ScriptModuleMinecraft::ScriptCustomTexture>,
        ::Scripting::EngineError>
    getTexture() const;

    MCAPI void setTexture(
        ::std::variant<::VanillaWaypointManagerConstants::ImageType, ::ScriptModuleMinecraft::ScriptCustomTexture>&
            textureInfo
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft

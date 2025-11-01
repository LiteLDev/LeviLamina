#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/Result.h"
#include "mc/legacy/facing/Name.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class BlockSource;
class Vec3;
namespace ScriptModuleMinecraft { struct ScriptBlockRaycastOptions; }
namespace ScriptModuleMinecraft { struct ScriptEntityRaycastOptions; }
namespace ScriptModuleMinecraft::ScriptRaycasting { struct BlockHitInfo; }
namespace ScriptModuleMinecraft::ScriptRaycasting { struct EntityHitInfo; }
namespace Scripting { struct EngineError; }
namespace Scripting { struct InvalidArgumentError; }
namespace Scripting { struct UnsupportedAPIError; }
// clang-format on

namespace ScriptModuleMinecraft::ScriptRaycasting {
// functions
// NOLINTBEGIN
MCNAPI ::std::optional<::BlockPos> getBlockFromAxisRay(::BlockSource const& region, ::BlockPos const& pos, ::Facing::Name direction, ::ScriptModuleMinecraft::ScriptBlockRaycastOptions const& blockOptions);

MCNAPI ::std::optional<::ScriptModuleMinecraft::ScriptRaycasting::BlockHitInfo> getBlockFromRay(::BlockSource const& region, ::Vec3 const& pos, ::Vec3 const& vector, ::ScriptModuleMinecraft::ScriptBlockRaycastOptions const& blockOptions);

MCNAPI ::Scripting::Result<::std::vector<::ScriptModuleMinecraft::ScriptRaycasting::EntityHitInfo>, ::Scripting::InvalidArgumentError, ::Scripting::EngineError, ::Scripting::UnsupportedAPIError> getEntitiesFromRay(::BlockSource& region, ::Vec3 const& pos, ::Vec3 const& direction, ::ScriptModuleMinecraft::ScriptEntityRaycastOptions const& entityOptions, ::std::optional<::Actor const*> except);
// NOLINTEND

}

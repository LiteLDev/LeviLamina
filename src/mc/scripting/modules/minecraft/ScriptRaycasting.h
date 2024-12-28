#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/facing/Name.h"
#include "mc/external/scripting/runtime/Result_deprecated.h"

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
// clang-format on

namespace ScriptModuleMinecraft::ScriptRaycasting {
// functions
// NOLINTBEGIN
MCAPI ::std::optional<::BlockPos> getBlockFromAxisRay(
    ::BlockSource const&                                      region,
    ::BlockPos const&                                         pos,
    ::Facing::Name                                            direction,
    ::ScriptModuleMinecraft::ScriptBlockRaycastOptions const& blockOptions
);

MCAPI ::std::optional<::ScriptModuleMinecraft::ScriptRaycasting::BlockHitInfo> getBlockFromRay(
    ::BlockSource const&                                      region,
    ::Vec3 const&                                             pos,
    ::Vec3 const&                                             vector,
    ::ScriptModuleMinecraft::ScriptBlockRaycastOptions const& blockOptions
);

MCAPI ::Scripting::Result_deprecated<::std::vector<::ScriptModuleMinecraft::ScriptRaycasting::EntityHitInfo>>
getEntitiesFromRay(
    ::BlockSource&                                             region,
    ::Vec3 const&                                              pos,
    ::Vec3 const&                                              direction,
    ::ScriptModuleMinecraft::ScriptEntityRaycastOptions const& entityOptions,
    ::std::optional<::Actor const*>                            except
);
// NOLINTEND

} // namespace ScriptModuleMinecraft::ScriptRaycasting

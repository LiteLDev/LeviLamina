#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/runtime/Result.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockSource;
class Vec3;
namespace ScriptModuleMinecraft { struct ScriptBlockRaycastOptions; }
namespace ScriptModuleMinecraft { struct ScriptEntityRaycastOptions; }
namespace ScriptModuleMinecraft::ScriptRaycasting { struct BlockHitInfo; }
namespace ScriptModuleMinecraft::ScriptRaycasting { struct EntityHitInfo; }
// clang-format on

namespace ScriptModuleMinecraft::ScriptRaycasting {
// NOLINTBEGIN
MCAPI std::optional<struct ScriptModuleMinecraft::ScriptRaycasting::BlockHitInfo> getBlockFromRay(
    class BlockSource const&                                       region,
    class Vec3 const&                                              pos,
    class Vec3 const&                                              vector,
    struct ScriptModuleMinecraft::ScriptBlockRaycastOptions const& blockOptions
);

MCAPI class Scripting::Result<std::vector<struct ScriptModuleMinecraft::ScriptRaycasting::EntityHitInfo>>
getEntitiesFromRay(
    class BlockSource&                                              region,
    class Vec3 const&                                               pos,
    class Vec3 const&                                               direction,
    struct ScriptModuleMinecraft::ScriptEntityRaycastOptions const& entityOptions,
    std::optional<class Actor const*>                               except
);
// NOLINTEND

}; // namespace ScriptModuleMinecraft::ScriptRaycasting

#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
// symbol:
// ?getBlockFromRay@ScriptRaycasting@ScriptModuleMinecraft@@YA?AV?$optional@UBlockHitInfo@ScriptRaycasting@ScriptModuleMinecraft@@@std@@AEBVBlockSource@@AEBVVec3@@1AEBUScriptBlockRaycastOptions@2@@Z
MCAPI std::optional<struct ScriptModuleMinecraft::ScriptRaycasting::BlockHitInfo>
getBlockFromRay(class BlockSource const& region, class Vec3 const& pos, class Vec3 const& vector, struct ScriptModuleMinecraft::ScriptBlockRaycastOptions const&);

// symbol:
// ?getEntitiesFromRay@ScriptRaycasting@ScriptModuleMinecraft@@YA?AV?$vector@UEntityHitInfo@ScriptRaycasting@ScriptModuleMinecraft@@V?$allocator@UEntityHitInfo@ScriptRaycasting@ScriptModuleMinecraft@@@std@@@std@@AEAVBlockSource@@AEBVVec3@@1AEBUScriptEntityRaycastOptions@2@V?$optional@PEBVActor@@@4@@Z
MCAPI std::vector<struct ScriptModuleMinecraft::ScriptRaycasting::EntityHitInfo>
getEntitiesFromRay(class BlockSource&, class Vec3 const&, class Vec3 const&, struct ScriptModuleMinecraft::ScriptEntityRaycastOptions const&, std::optional<class Actor const*>);
// NOLINTEND

}; // namespace ScriptModuleMinecraft::ScriptRaycasting

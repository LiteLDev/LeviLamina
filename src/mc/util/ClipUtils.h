#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/ShapeType.h"

namespace ClipUtils {
// NOLINTBEGIN
// symbol:
// ?getAABB@ClipUtils@@YAAEBVAABB@@AEBVIConstBlockSource@@AEBVBlockPos@@AEBVBlock@@AEAV2@W4ShapeType@@V?$optional_ref@$$CBVGetCollisionShapeInterface@@@@@Z
MCAPI class AABB const&
getAABB(class IConstBlockSource const&, class BlockPos const&, class Block const&, class AABB&, ::ShapeType, class optional_ref<class GetCollisionShapeInterface const>);
// NOLINTEND

}; // namespace ClipUtils

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/world/AutomaticID.h"

namespace VillageManagerComponentUtils {
// NOLINTBEGIN
// symbol:
// ?addVillageManager@VillageManagerComponentUtils@@YAXAEAUVillageManagerComponent@@V?$AutomaticID@VDimension@@H@@PEAVIVillageManager@@@Z
MCAPI void addVillageManager(struct VillageManagerComponent&, DimensionType type, class IVillageManager* manager);

// symbol:
// ?getVillageManager@VillageManagerComponentUtils@@YA?AV?$NonOwnerPointer@VIVillageManager@@@Bedrock@@AEBUVillageManagerComponent@@V?$AutomaticID@VDimension@@H@@@Z
MCAPI class Bedrock::NonOwnerPointer<class IVillageManager>
getVillageManager(struct VillageManagerComponent const&, DimensionType type);
// NOLINTEND

}; // namespace VillageManagerComponentUtils

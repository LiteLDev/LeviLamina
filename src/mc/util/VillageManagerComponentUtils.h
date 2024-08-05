#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/world/AutomaticID.h"

namespace VillageManagerComponentUtils {
// NOLINTBEGIN
MCAPI void addVillageManager(struct VillageManagerComponent&, DimensionType type, class IVillageManager* manager);

MCAPI class Bedrock::NonOwnerPointer<class IVillageManager>
getVillageManager(struct VillageManagerComponent const&, DimensionType type);
// NOLINTEND

}; // namespace VillageManagerComponentUtils

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

namespace VillageManagerComponentUtils {
// NOLINTBEGIN
MCAPI void addVillageManager(
    struct VillageManagerComponent& villageManagerComponent,
    DimensionType                   type,
    class IVillageManager*          manager
);

MCAPI class Bedrock::NonOwnerPointer<class IVillageManager>
getVillageManager(struct VillageManagerComponent const& villageManagerComponent, DimensionType type);
// NOLINTEND

}; // namespace VillageManagerComponentUtils

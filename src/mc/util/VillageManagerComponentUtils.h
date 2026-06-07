#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IVillageManager;
struct VillageManagerComponent;
// clang-format on

namespace VillageManagerComponentUtils {
// functions
// NOLINTBEGIN
MCNAPI void
addVillageManager(::VillageManagerComponent& villageManagerComponent, ::DimensionType type, ::IVillageManager* manager);

MCNAPI ::Bedrock::NonOwnerPointer<::IVillageManager>
getVillageManager(::VillageManagerComponent const& villageManagerComponent, ::DimensionType type);
// NOLINTEND

} // namespace VillageManagerComponentUtils

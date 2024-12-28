#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class Dimension;
class IVillageManager;
struct VillageManagerComponent;
// clang-format on

namespace VillageManagerComponentUtils {
// functions
// NOLINTBEGIN
MCAPI void
addVillageManager(::VillageManagerComponent& villageManagerComponent, ::DimensionType type, ::IVillageManager* manager);

MCAPI ::Bedrock::NonOwnerPointer<::IVillageManager>
getVillageManager(::VillageManagerComponent const& villageManagerComponent, ::DimensionType type);
// NOLINTEND

} // namespace VillageManagerComponentUtils

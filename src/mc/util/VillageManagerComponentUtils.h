#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { template<typename T0> class NonOwnerPointer; }
template<typename T0, typename T1> class AutomaticID;
// clang-format on

namespace VillageManagerComponentUtils {
/**
 * @symbol
 * ?addVillageManager\@VillageManagerComponentUtils\@\@YAXAEAUVillageManagerComponent\@\@V?$AutomaticID\@VDimension\@\@H\@\@PEAVIVillageManager\@\@\@Z
 */
MCAPI void
addVillageManager(struct VillageManagerComponent&, class AutomaticID<class Dimension, int>, class IVillageManager*); // NOLINT
/**
 * @symbol
 * ?getVillageManager\@VillageManagerComponentUtils\@\@YA?AV?$NonOwnerPointer\@VIVillageManager\@\@\@Bedrock\@\@AEBUVillageManagerComponent\@\@V?$AutomaticID\@VDimension\@\@H\@\@\@Z
 */
MCAPI class Bedrock::NonOwnerPointer<class IVillageManager>
getVillageManager(struct VillageManagerComponent const&, class AutomaticID<class Dimension, int>); // NOLINT

}; // namespace VillageManagerComponentUtils

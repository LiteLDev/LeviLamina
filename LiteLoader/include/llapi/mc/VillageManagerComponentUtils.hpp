/**
 * @file  VillageManagerComponentUtils.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Bedrock.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


namespace VillageManagerComponentUtils {

#define AFTER_EXTRA

#undef AFTER_EXTRA
    /**
     * @symbol  ?addVillageManager\@VillageManagerComponentUtils\@\@YAXAEAUVillageManagerComponent\@\@V?$AutomaticID\@VDimension\@\@H\@\@PEAVIVillageManager\@\@\@Z
     */
    MCAPI void addVillageManager(struct VillageManagerComponent &, class AutomaticID<class Dimension, int>, class IVillageManager *);
    /**
     * @symbol  ?getVillageManager\@VillageManagerComponentUtils\@\@YA?AV?$NonOwnerPointer\@VIVillageManager\@\@\@Bedrock\@\@AEBUVillageManagerComponent\@\@V?$AutomaticID\@VDimension\@\@H\@\@\@Z
     */
    MCAPI class Bedrock::NonOwnerPointer<class IVillageManager> getVillageManager(struct VillageManagerComponent const &, class AutomaticID<class Dimension, int>);

};
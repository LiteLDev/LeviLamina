/**
 * @file  MobTravelPlaceholderFilterSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class MobTravelPlaceholderFilterSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOBTRAVELPLACEHOLDERFILTERSYSTEM
public:
    class MobTravelPlaceholderFilterSystem& operator=(class MobTravelPlaceholderFilterSystem const &) = delete;
    MobTravelPlaceholderFilterSystem(class MobTravelPlaceholderFilterSystem const &) = delete;
    MobTravelPlaceholderFilterSystem() = delete;
#endif

public:
    /**
     * @symbol ?create\@MobTravelPlaceholderFilterSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo create();
    /**
     * @symbol ?createSideBySide\@MobTravelPlaceholderFilterSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSideBySide();
    /**
     * @symbol ?tick\@MobTravelPlaceholderFilterSystem\@\@SAXAEBVStrictEntityContext\@\@AEAUStateVectorComponent\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@UMobTravelComponent\@\@\@\@AEBVIConstBlockSource\@\@\@Z
     */
    MCAPI static void tick(class StrictEntityContext const &, struct StateVectorComponent &, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct MobTravelComponent>, class IConstBlockSource const &);

};

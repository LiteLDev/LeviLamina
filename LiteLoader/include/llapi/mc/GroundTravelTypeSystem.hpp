/**
 * @file  GroundTravelTypeSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class GroundTravelTypeSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GROUNDTRAVELTYPESYSTEM
public:
    class GroundTravelTypeSystem& operator=(class GroundTravelTypeSystem const &) = delete;
    GroundTravelTypeSystem(class GroundTravelTypeSystem const &) = delete;
    GroundTravelTypeSystem() = delete;
#endif

public:
    /**
     * @symbol ?create\@GroundTravelTypeSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo create();
    /**
     * @symbol ?createSideBySide\@GroundTravelTypeSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSideBySide();
    /**
     * @symbol ?tick\@GroundTravelTypeSystem\@\@SAXAEBVStrictEntityContext\@\@AEBUAABBShapeComponent\@\@AEBUStateVectorComponent\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@$$CBUAttributesComponent\@\@$$CBUMovementSpeedComponent\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UPlayerComponentFlag\@\@\@\@\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@$$CBV?$FlagComponent\@USoulSpeedEnchantFlag\@\@\@\@\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@UMobTravelComponent\@\@\@\@AEBVIConstBlockSource\@\@\@Z
     */
    MCAPI static void tick(class StrictEntityContext const &, struct AABBShapeComponent const &, struct StateVectorComponent const &, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct AttributesComponent const, struct MovementSpeedComponent const>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct PlayerComponentFlag>>>, class ViewT<class StrictEntityContext, class EntityRegistryBase, class FlagComponent<struct SoulSpeedEnchantFlag> const>, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct MobTravelComponent>, class IConstBlockSource const &);

};

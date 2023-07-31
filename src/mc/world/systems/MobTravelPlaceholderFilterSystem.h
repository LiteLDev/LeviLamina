#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/EntityModifierT.h"

class MobTravelPlaceholderFilterSystem {

public:
    // prevent constructor by default
    MobTravelPlaceholderFilterSystem& operator=(MobTravelPlaceholderFilterSystem const&) = delete;
    MobTravelPlaceholderFilterSystem(MobTravelPlaceholderFilterSystem const&)            = delete;
    MobTravelPlaceholderFilterSystem()                                                   = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?create\@MobTravelPlaceholderFilterSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo create();
    /**
     * @symbol
     * ?tick\@MobTravelPlaceholderFilterSystem\@\@SAXAEBVStrictEntityContext\@\@AEAUStateVectorComponent\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@UMobTravelComponent\@\@\@\@AEBVIConstBlockSource\@\@\@Z
     */
    MCAPI static void
    tick(class StrictEntityContext const&, struct StateVectorComponent&, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct MobTravelComponent>, class IConstBlockSource const&);
    // NOLINTEND
};

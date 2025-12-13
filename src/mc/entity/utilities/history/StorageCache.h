#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/EntityId.h"
#include "mc/deps/vanilla_components/VehicleInputIntentComponent.h"
#include "mc/entity/components/ActorRotationComponent.h"
#include "mc/entity/components/BlockPosTrackerComponent.h"
#include "mc/entity/components/InsideSlowingSweetBerryBushBlockComponent.h"
#include "mc/entity/components/IsSolidMobNearbyComponent.h"
#include "mc/entity/components/ItemUseSlowdownModifierComponent.h"
#include "mc/entity/components/MoveInputComponent.h"
#include "mc/entity/components/MovementEffectsComponent.h"
#include "mc/entity/components/MovementInterpolatorComponent.h"
#include "mc/entity/components/ReplayStateTrackerComponent.h"
#include "mc/entity/components/RewindCollisionShapesComponent.h"
#include "mc/entity/components/RiptideTridentSpinAttackComponent.h"
#include "mc/entity/components/SpinAttackResultsComponent.h"
#include "mc/entity/components_json_legacy/BuoyancyComponent.h"
#include "mc/entity/components_json_legacy/BuoyancyFloatRequestComponent.h"
#include "mc/entity/systems/block_collisions_system/BlockCollisionResolutionVectorComponent.h"

namespace History {

struct StorageCache {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 152> mUnkf1c9ae;
    // NOLINTEND

public:
    // prevent constructor by default
    StorageCache& operator=(StorageCache const&);
    StorageCache(StorageCache const&);
    StorageCache();
};

} // namespace History

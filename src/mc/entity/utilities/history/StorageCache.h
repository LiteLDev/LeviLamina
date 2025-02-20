#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BuoyancyComponent;
class EntityId;
struct ActorRotationComponent;
struct BlockPosTrackerComponent;
struct BuoyancyFloatRequestComponent;
struct InsideSlowingSweetBerryBushBlockComponent;
struct IsSolidMobNearbyComponent;
struct ItemUseSlowdownModifierComponent;
struct MoveInputComponent;
struct MovementEffectsComponent;
struct MovementInterpolatorComponent;
struct ReplayStateTrackerComponent;
struct RewindCollisionShapesComponent;
struct RiptideTridentSpinAttackComponent;
struct SpinAttackResultsComponent;
struct VehicleInputIntentComponent;
namespace BlockCollisionsSystem { struct BlockCollisionResolutionVectorComponent; }
// clang-format on

namespace History {

struct StorageCache {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 144> mUnkf1c9ae;
    // NOLINTEND

public:
    // prevent constructor by default
    StorageCache& operator=(StorageCache const&);
    StorageCache(StorageCache const&);
    StorageCache();
};

} // namespace History

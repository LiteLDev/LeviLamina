#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BuoyancyComponent;
class EntityId;
class EntityRegistry;
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
    ::ll::UntypedStorage<8, 152> mUnk939dd5;
    // NOLINTEND

public:
    // prevent constructor by default
    StorageCache& operator=(StorageCache const&);
    StorageCache(StorageCache const&);
    StorageCache();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::History::StorageCache& getOrInit(::EntityRegistry& registry);
    // NOLINTEND
};

} // namespace History

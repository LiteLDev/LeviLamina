#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BuoyancyComponent;
class EntityContext;
class EntityRegistry;
class MovementEffect;
struct ActorRotationComponent;
struct BlockPosTrackerComponent;
struct BuoyancyFloatRequestComponent;
struct ExternalDataSnapshotComponent;
struct InsideSlowingSweetBerryBushBlockComponent;
struct IsSolidMobNearbyComponent;
struct ItemUseSlowdownModifierComponent;
struct MoveInputComponent;
struct MovementInterpolatorComponent;
struct ReplayStateTrackerComponent;
struct RewindCollisionShapesComponent;
struct RiptideTridentSpinAttackComponent;
struct SpinAttackResultsComponent;
struct VehicleInputIntentComponent;
namespace BlockCollisionsSystem { struct BlockCollisionResolutionVectorComponent; }
namespace History { struct TurnInput; }
// clang-format on

struct IReplayableActorInput {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IReplayableActorInput() = default;

    virtual void preApplyInput(::EntityContext& e) = 0;

    virtual void postApplyInput(::EntityContext& e) = 0;

    virtual void applyCollisionData(::EntityContext& entity) = 0;

    virtual ::ExternalDataSnapshotComponent const& getSnapshot() const = 0;

    virtual void captureExternalData(::EntityRegistry& registry) = 0;

    virtual void capture(::MoveInputComponent const& input) = 0;

    virtual void capture(::ReplayStateTrackerComponent const& tracker) = 0;

    virtual void capture(::ActorRotationComponent const& rot) = 0;

    virtual void capture(::History::TurnInput const& turn) = 0;

    virtual void capture(::BlockCollisionsSystem::BlockCollisionResolutionVectorComponent const& v) = 0;

    virtual void capture(::BlockPosTrackerComponent const& tracker) = 0;

    virtual void capture(::BuoyancyComponent const& buoyancy) = 0;

    virtual void capture(::BuoyancyFloatRequestComponent const& request) = 0;

    virtual void capture(::InsideSlowingSweetBerryBushBlockComponent const& inside) = 0;

    virtual void capture(::ItemUseSlowdownModifierComponent const& slowdown) = 0;

    virtual void capture(::RewindCollisionShapesComponent&& shapes) = 0;

    virtual void capture(::MovementEffect const& movementEffect) = 0;

    virtual void capture(::VehicleInputIntentComponent const& vehicleIntent) = 0;

    virtual void capture(::IsSolidMobNearbyComponent const& isSolidMobNearby) = 0;

    virtual void capture(::RiptideTridentSpinAttackComponent const& riptideSpinAttack) = 0;

    virtual void capture(::SpinAttackResultsComponent const& spinAttackResults) = 0;

    virtual void capture(::MovementInterpolatorComponent const& interpolator) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

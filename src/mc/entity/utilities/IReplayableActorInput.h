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

    virtual void preApplyInput(::EntityContext&) = 0;

    virtual void postApplyInput(::EntityContext&) = 0;

    virtual void applyCollisionData(::EntityContext&) = 0;

    virtual ::ExternalDataSnapshotComponent const& getSnapshot() const = 0;

    virtual void captureExternalData(::EntityRegistry&) = 0;

    virtual void capture(::MoveInputComponent const&) = 0;

    virtual void capture(::ReplayStateTrackerComponent const&) = 0;

    virtual void capture(::ActorRotationComponent const&) = 0;

    virtual void capture(::History::TurnInput const&) = 0;

    virtual void capture(::BlockCollisionsSystem::BlockCollisionResolutionVectorComponent const&) = 0;

    virtual void capture(::BlockPosTrackerComponent const&) = 0;

    virtual void capture(::BuoyancyComponent const&) = 0;

    virtual void capture(::BuoyancyFloatRequestComponent const&) = 0;

    virtual void capture(::InsideSlowingSweetBerryBushBlockComponent const&) = 0;

    virtual void capture(::ItemUseSlowdownModifierComponent const&) = 0;

    virtual void capture(::RewindCollisionShapesComponent&&) = 0;

    virtual void capture(::MovementEffect const&) = 0;

    virtual void capture(::VehicleInputIntentComponent const&) = 0;

    virtual void capture(::IsSolidMobNearbyComponent const&) = 0;

    virtual void capture(::RiptideTridentSpinAttackComponent const&) = 0;

    virtual void capture(::SpinAttackResultsComponent const&) = 0;

    virtual void capture(::MovementInterpolatorComponent const&) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

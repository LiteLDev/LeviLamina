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
    // vIndex: 0
    virtual ~IReplayableActorInput() = default;

    // vIndex: 1
    virtual void preApplyInput(::EntityContext&) = 0;

    // vIndex: 2
    virtual void postApplyInput(::EntityContext&) = 0;

    // vIndex: 3
    virtual void applyCollisionData(::EntityContext&) = 0;

    // vIndex: 4
    virtual ::ExternalDataSnapshotComponent const& getSnapshot() const = 0;

    // vIndex: 5
    virtual void captureExternalData(::EntityRegistry&) = 0;

    // vIndex: 22
    virtual void capture(::MoveInputComponent const&) = 0;

    // vIndex: 21
    virtual void capture(::ReplayStateTrackerComponent const&) = 0;

    // vIndex: 20
    virtual void capture(::ActorRotationComponent const&) = 0;

    // vIndex: 19
    virtual void capture(::History::TurnInput const&) = 0;

    // vIndex: 18
    virtual void capture(::BlockCollisionsSystem::BlockCollisionResolutionVectorComponent const&) = 0;

    // vIndex: 17
    virtual void capture(::BlockPosTrackerComponent const&) = 0;

    // vIndex: 16
    virtual void capture(::BuoyancyComponent const&) = 0;

    // vIndex: 15
    virtual void capture(::BuoyancyFloatRequestComponent const&) = 0;

    // vIndex: 14
    virtual void capture(::InsideSlowingSweetBerryBushBlockComponent const&) = 0;

    // vIndex: 13
    virtual void capture(::ItemUseSlowdownModifierComponent const&) = 0;

    // vIndex: 12
    virtual void capture(::RewindCollisionShapesComponent&&) = 0;

    // vIndex: 11
    virtual void capture(::MovementEffect const&) = 0;

    // vIndex: 10
    virtual void capture(::VehicleInputIntentComponent const&) = 0;

    // vIndex: 9
    virtual void capture(::IsSolidMobNearbyComponent const&) = 0;

    // vIndex: 8
    virtual void capture(::RiptideTridentSpinAttackComponent const&) = 0;

    // vIndex: 7
    virtual void capture(::SpinAttackResultsComponent const&) = 0;

    // vIndex: 6
    virtual void capture(::MovementInterpolatorComponent const&) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

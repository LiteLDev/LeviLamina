#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/IReplayableActorInput.h"

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
namespace History { struct EntityWithCache; }
namespace History { struct NonPlayerComponents; }
namespace History { struct TurnInput; }
// clang-format on

namespace History {

struct ReplayableActorInput : public ::IReplayableActorInput {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>   mUnk8266f1;
    ::ll::UntypedStorage<4, 36>  mUnk22b25e;
    ::ll::UntypedStorage<4, 8>   mUnk834abd;
    ::ll::UntypedStorage<4, 12>  mUnk3826b7;
    ::ll::UntypedStorage<4, 4>   mUnk704c8f;
    ::ll::UntypedStorage<8, 168> mUnkea9050;
    ::ll::UntypedStorage<8, 88>  mUnk1e608c;
    ::ll::UntypedStorage<4, 16>  mUnkf67562;
    ::ll::UntypedStorage<8, 24>  mUnk4fcfab;
    ::ll::UntypedStorage<8, 40>  mUnk2879ec;
    ::ll::UntypedStorage<8, 96>  mUnkd13a8f;
    ::ll::UntypedStorage<8, 24>  mUnk437307;
    ::ll::UntypedStorage<8, 8>   mUnkf35490;
    ::ll::UntypedStorage<8, 24>  mUnk52db17;
    ::ll::UntypedStorage<4, 40>  mUnke959f2;
    ::ll::UntypedStorage<8, 8>   mUnkd6cadc;
    // NOLINTEND

public:
    // prevent constructor by default
    ReplayableActorInput& operator=(ReplayableActorInput const&);
    ReplayableActorInput(ReplayableActorInput const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void preApplyInput(::EntityContext& e) /*override*/;

    // vIndex: 2
    virtual void postApplyInput(::EntityContext& e) /*override*/;

    // vIndex: 3
    virtual void applyCollisionData(::EntityContext& entity) /*override*/;

    // vIndex: 4
    virtual ::ExternalDataSnapshotComponent const& getSnapshot() const /*override*/;

    // vIndex: 5
    virtual void captureExternalData(::EntityRegistry& registry) /*override*/;

    // vIndex: 22
    virtual void capture(::MoveInputComponent const& input) /*override*/;

    // vIndex: 21
    virtual void capture(::ReplayStateTrackerComponent const& tracker) /*override*/;

    // vIndex: 20
    virtual void capture(::ActorRotationComponent const& rot) /*override*/;

    // vIndex: 19
    virtual void capture(::History::TurnInput const& turn) /*override*/;

    // vIndex: 18
    virtual void capture(::BlockCollisionsSystem::BlockCollisionResolutionVectorComponent const& v) /*override*/;

    // vIndex: 17
    virtual void capture(::BlockPosTrackerComponent const& tracker) /*override*/;

    // vIndex: 16
    virtual void capture(::BuoyancyComponent const& buoyancy) /*override*/;

    // vIndex: 15
    virtual void capture(::BuoyancyFloatRequestComponent const& request) /*override*/;

    // vIndex: 14
    virtual void capture(::InsideSlowingSweetBerryBushBlockComponent const& inside) /*override*/;

    // vIndex: 13
    virtual void capture(::ItemUseSlowdownModifierComponent const& slowdown) /*override*/;

    // vIndex: 12
    virtual void capture(::RewindCollisionShapesComponent&& shapes) /*override*/;

    // vIndex: 11
    virtual void capture(::MovementEffect const& movementEffect) /*override*/;

    // vIndex: 10
    virtual void capture(::VehicleInputIntentComponent const& vehicleIntent) /*override*/;

    // vIndex: 9
    virtual void capture(::IsSolidMobNearbyComponent const& isSolidMobNearby) /*override*/;

    // vIndex: 8
    virtual void capture(::RiptideTridentSpinAttackComponent const& riptideSpinAttack) /*override*/;

    // vIndex: 7
    virtual void capture(::SpinAttackResultsComponent const& spinAttackResults) /*override*/;

    // vIndex: 6
    virtual void capture(::MovementInterpolatorComponent const& interpolator) /*override*/;

    // vIndex: 0
    virtual ~ReplayableActorInput() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ReplayableActorInput();

    MCAPI void applyCollisionData(::History::EntityWithCache& entity);

    MCAPI ::History::NonPlayerComponents& getOrCreateNonPlayerComponents();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $preApplyInput(::EntityContext& e);

    MCAPI void $postApplyInput(::EntityContext& e);

    MCAPI void $applyCollisionData(::EntityContext& entity);

    MCAPI ::ExternalDataSnapshotComponent const& $getSnapshot() const;

    MCAPI void $captureExternalData(::EntityRegistry& registry);

    MCAPI void $capture(::MoveInputComponent const& input);

    MCAPI void $capture(::ReplayStateTrackerComponent const& tracker);

    MCAPI void $capture(::ActorRotationComponent const& rot);

    MCAPI void $capture(::History::TurnInput const& turn);

    MCAPI void $capture(::BlockCollisionsSystem::BlockCollisionResolutionVectorComponent const& v);

    MCAPI void $capture(::BlockPosTrackerComponent const& tracker);

    MCAPI void $capture(::BuoyancyComponent const& buoyancy);

    MCAPI void $capture(::BuoyancyFloatRequestComponent const& request);

    MCAPI void $capture(::InsideSlowingSweetBerryBushBlockComponent const& inside);

    MCAPI void $capture(::ItemUseSlowdownModifierComponent const& slowdown);

    MCAPI void $capture(::RewindCollisionShapesComponent&& shapes);

    MCAPI void $capture(::MovementEffect const& movementEffect);

    MCAPI void $capture(::VehicleInputIntentComponent const& vehicleIntent);

    MCAPI void $capture(::IsSolidMobNearbyComponent const& isSolidMobNearby);

    MCAPI void $capture(::RiptideTridentSpinAttackComponent const& riptideSpinAttack);

    MCAPI void $capture(::SpinAttackResultsComponent const& spinAttackResults);

    MCAPI void $capture(::MovementInterpolatorComponent const& interpolator);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace History

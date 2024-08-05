#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/GlobalRead.h"
#include "mc/common/GlobalWrite.h"
#include "mc/common/StrictExecutionContext.h"
#include "mc/common/wrapper/AddRemove.h"
#include "mc/deps/core/data/Filter.h"
#include "mc/deps/core/data/Read.h"
#include "mc/deps/core/data/Write.h"
#include "mc/entity/EntityFactoryT.h"
#include "mc/world/components/FlagComponent.h"

struct MoveTowardsClosestSpaceSystemImpl {
public:
    // prevent constructor by default
    MoveTowardsClosestSpaceSystemImpl& operator=(MoveTowardsClosestSpaceSystemImpl const&);
    MoveTowardsClosestSpaceSystemImpl(MoveTowardsClosestSpaceSystemImpl const&);
    MoveTowardsClosestSpaceSystemImpl();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MoveTowardsClosestSpaceSystemImpl() = default;

    // vIndex: 1
    virtual void __unk_vfn_1();

    // vIndex: 2
    virtual void __unk_vfn_2();

    // vIndex: 3
    virtual void __unk_vfn_3();

    // vIndex: 4
    virtual void __unk_vfn_4();

    // vIndex: 5
    virtual void tick(class StrictExecutionContext<
                      struct Filter<
                          class FlagComponent<struct CanStandOnSnowFlag>,
                          class FlagComponent<struct HasLightweightFamilyFlag>,
                          class FlagComponent<struct HorseFlag>,
                          class FlagComponent<struct MobFlag>,
                          class FlagComponent<struct ParrotFlag>,
                          struct VehicleComponent,
                          class FlagComponent<struct CamelFlag>,
                          class FlagComponent<struct PlayerComponentFlag>,
                          class FlagComponent<struct ActorMovementTickNeededFlag>,
                          struct PassengerComponent>,
                      struct Read<
                          struct AABBShapeComponent,
                          struct MovementAbilitiesComponent,
                          struct ActorTypeComponent,
                          struct FallDistanceComponent,
                          struct PassengerComponent,
                          struct ActorGameTypeComponent,
                          struct ActorDataFlagComponent,
                          struct VehicleComponent,
                          struct ActorRotationComponent,
                          struct MobBodyRotationComponent,
                          struct RenderRotationComponent,
                          struct StandAnimationComponent,
                          struct OffsetsComponent,
                          struct VanillaOffsetComponent,
                          struct PassengerRenderingRidingOffsetComponent,
                          struct DepenetrationComponent,
                          struct DimensionTypeComponent>,
                      struct Write<struct StateVectorComponent>,
                      struct AddRemove<class FlagComponent<struct MoveTowardsClosestSpaceFlag>>,
                      struct GlobalRead<struct ExternalDataComponent, struct LocalConstBlockSourceFactoryComponent>,
                      struct GlobalWrite<>,
                      struct EntityFactoryT<>>&);

    MCAPI static void
    doTick(class StrictEntityContext const&, struct ActorDataFlagComponent const&, struct AABBShapeComponent const&, struct DepenetrationComponent const&, struct StateVectorComponent&, class StrictExecutionContext<struct Filter<class FlagComponent<struct CanStandOnSnowFlag>, class FlagComponent<struct HasLightweightFamilyFlag>, class FlagComponent<struct HorseFlag>, class FlagComponent<struct MobFlag>, class FlagComponent<struct ParrotFlag>, struct VehicleComponent, class FlagComponent<struct CamelFlag>, class FlagComponent<struct PlayerComponentFlag>, class FlagComponent<struct ActorMovementTickNeededFlag>, struct PassengerComponent>, struct Read<struct AABBShapeComponent, struct MovementAbilitiesComponent, struct ActorTypeComponent, struct FallDistanceComponent, struct PassengerComponent, struct ActorGameTypeComponent, struct ActorDataFlagComponent, struct VehicleComponent, struct ActorRotationComponent, struct MobBodyRotationComponent, struct RenderRotationComponent, struct StandAnimationComponent, struct OffsetsComponent, struct VanillaOffsetComponent, struct PassengerRenderingRidingOffsetComponent, struct DepenetrationComponent, struct DimensionTypeComponent>, struct Write<struct StateVectorComponent>, struct AddRemove<class FlagComponent<struct MoveTowardsClosestSpaceFlag>>, struct GlobalRead<struct ExternalDataComponent, struct LocalConstBlockSourceFactoryComponent>, struct GlobalWrite<>, struct EntityFactoryT<>>&, class IConstBlockSource const&);

    // NOLINTEND
};

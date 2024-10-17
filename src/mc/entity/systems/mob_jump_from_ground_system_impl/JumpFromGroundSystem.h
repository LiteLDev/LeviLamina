#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/strict/AddRemove.h"
#include "mc/deps/ecs/strict/EntityFactoryT.h"
#include "mc/deps/ecs/strict/Filter.h"
#include "mc/deps/ecs/strict/GlobalRead.h"
#include "mc/deps/ecs/strict/GlobalWrite.h"
#include "mc/deps/ecs/strict/Read.h"
#include "mc/deps/ecs/strict/StrictExecutionContext.h"
#include "mc/deps/ecs/strict/Write.h"
#include "mc/entity/components/FlagComponent.h"

// auto generated forward declare list
// clang-format off
class JumpControlComponent;
class StrictEntityContext;
struct AABBShapeComponent;
struct ActorDataFlagComponent;
struct ActorGameTypeComponent;
struct ActorRotationComponent;
struct ActorTypeComponent;
struct CamelFlag;
struct CanStandOnSnowFlag;
struct DimensionTypeComponent;
struct ExternalDataComponent;
struct FallDistanceComponent;
struct HasLightweightFamilyFlag;
struct HorseFlag;
struct LavaSlimeJumpRequestFlag;
struct LocalConstBlockSourceFactoryComponent;
struct LocalPlayerJumpRequestFlag;
struct MobBodyRotationComponent;
struct MobEffectsComponent;
struct MobFlag;
struct MobJumpComponent;
struct MovementAbilitiesComponent;
struct OffsetsComponent;
struct OtherJumpRequestFlag;
struct ParrotFlag;
struct PassengerComponent;
struct PassengerRenderingRidingOffsetComponent;
struct PlayerActionComponent;
struct PlayerComponentFlag;
struct RenderRotationComponent;
struct SquidJumpRequestFlag;
struct StandAnimationComponent;
struct StateVectorComponent;
struct SynchedActorDataComponent;
struct TriggerJumpRequestComponent;
struct VanillaOffsetComponent;
struct VehicleComponent;
// clang-format on

namespace MobJumpFromGroundSystemImpl {

struct JumpFromGroundSystem {
public:
    // prevent constructor by default
    JumpFromGroundSystem& operator=(JumpFromGroundSystem const&);
    JumpFromGroundSystem(JumpFromGroundSystem const&);
    JumpFromGroundSystem();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~JumpFromGroundSystem() = default;

    // vIndex: 1
    virtual void registerEvents(entt::dispatcher& dispatcher);

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
                          class FlagComponent<struct LocalPlayerJumpRequestFlag>,
                          class FlagComponent<struct LavaSlimeJumpRequestFlag>,
                          class FlagComponent<struct SquidJumpRequestFlag>,
                          class FlagComponent<struct OtherJumpRequestFlag>>,
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
                          struct MobEffectsComponent,
                          struct SynchedActorDataComponent,
                          class JumpControlComponent,
                          struct DimensionTypeComponent>,
                      struct Write<struct MobJumpComponent, struct StateVectorComponent, struct PlayerActionComponent>,
                      struct AddRemove<struct TriggerJumpRequestComponent>,
                      struct GlobalRead<struct ExternalDataComponent, struct LocalConstBlockSourceFactoryComponent>,
                      struct GlobalWrite<>,
                      struct EntityFactoryT<>>& context);

    // vIndex: 6
    virtual void singleTick(
        class StrictExecutionContext<
            struct Filter<
                class FlagComponent<struct CanStandOnSnowFlag>,
                class FlagComponent<struct HasLightweightFamilyFlag>,
                class FlagComponent<struct HorseFlag>,
                class FlagComponent<struct MobFlag>,
                class FlagComponent<struct ParrotFlag>,
                struct VehicleComponent,
                class FlagComponent<struct CamelFlag>,
                class FlagComponent<struct PlayerComponentFlag>,
                class FlagComponent<struct LocalPlayerJumpRequestFlag>,
                class FlagComponent<struct LavaSlimeJumpRequestFlag>,
                class FlagComponent<struct SquidJumpRequestFlag>,
                class FlagComponent<struct OtherJumpRequestFlag>>,
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
                struct MobEffectsComponent,
                struct SynchedActorDataComponent,
                class JumpControlComponent,
                struct DimensionTypeComponent>,
            struct Write<struct MobJumpComponent, struct StateVectorComponent, struct PlayerActionComponent>,
            struct AddRemove<struct TriggerJumpRequestComponent>,
            struct GlobalRead<struct ExternalDataComponent, struct LocalConstBlockSourceFactoryComponent>,
            struct GlobalWrite<>,
            struct EntityFactoryT<>>& context,
        class StrictEntityContext&    entity
    );

    MCAPI static auto
    createViews(class StrictExecutionContext<
                struct Filter<
                    class FlagComponent<struct CanStandOnSnowFlag>,
                    class FlagComponent<struct HasLightweightFamilyFlag>,
                    class FlagComponent<struct HorseFlag>,
                    class FlagComponent<struct MobFlag>,
                    class FlagComponent<struct ParrotFlag>,
                    struct VehicleComponent,
                    class FlagComponent<struct CamelFlag>,
                    class FlagComponent<struct PlayerComponentFlag>,
                    class FlagComponent<struct LocalPlayerJumpRequestFlag>,
                    class FlagComponent<struct LavaSlimeJumpRequestFlag>,
                    class FlagComponent<struct SquidJumpRequestFlag>,
                    class FlagComponent<struct OtherJumpRequestFlag>>,
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
                    struct MobEffectsComponent,
                    struct SynchedActorDataComponent,
                    class JumpControlComponent,
                    struct DimensionTypeComponent>,
                struct Write<struct MobJumpComponent, struct StateVectorComponent, struct PlayerActionComponent>,
                struct AddRemove<struct TriggerJumpRequestComponent>,
                struct GlobalRead<struct ExternalDataComponent, struct LocalConstBlockSourceFactoryComponent>,
                struct GlobalWrite<>,
                struct EntityFactoryT<>>&);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void registerEvents$(entt::dispatcher& dispatcher);

    MCAPI void singleTick$(
        class StrictExecutionContext<
            struct Filter<
                class FlagComponent<struct CanStandOnSnowFlag>,
                class FlagComponent<struct HasLightweightFamilyFlag>,
                class FlagComponent<struct HorseFlag>,
                class FlagComponent<struct MobFlag>,
                class FlagComponent<struct ParrotFlag>,
                struct VehicleComponent,
                class FlagComponent<struct CamelFlag>,
                class FlagComponent<struct PlayerComponentFlag>,
                class FlagComponent<struct LocalPlayerJumpRequestFlag>,
                class FlagComponent<struct LavaSlimeJumpRequestFlag>,
                class FlagComponent<struct SquidJumpRequestFlag>,
                class FlagComponent<struct OtherJumpRequestFlag>>,
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
                struct MobEffectsComponent,
                struct SynchedActorDataComponent,
                class JumpControlComponent,
                struct DimensionTypeComponent>,
            struct Write<struct MobJumpComponent, struct StateVectorComponent, struct PlayerActionComponent>,
            struct AddRemove<struct TriggerJumpRequestComponent>,
            struct GlobalRead<struct ExternalDataComponent, struct LocalConstBlockSourceFactoryComponent>,
            struct GlobalWrite<>,
            struct EntityFactoryT<>>& context,
        class StrictEntityContext&    entity
    );

    MCAPI void tick$(class StrictExecutionContext<
                     struct Filter<
                         class FlagComponent<struct CanStandOnSnowFlag>,
                         class FlagComponent<struct HasLightweightFamilyFlag>,
                         class FlagComponent<struct HorseFlag>,
                         class FlagComponent<struct MobFlag>,
                         class FlagComponent<struct ParrotFlag>,
                         struct VehicleComponent,
                         class FlagComponent<struct CamelFlag>,
                         class FlagComponent<struct PlayerComponentFlag>,
                         class FlagComponent<struct LocalPlayerJumpRequestFlag>,
                         class FlagComponent<struct LavaSlimeJumpRequestFlag>,
                         class FlagComponent<struct SquidJumpRequestFlag>,
                         class FlagComponent<struct OtherJumpRequestFlag>>,
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
                         struct MobEffectsComponent,
                         struct SynchedActorDataComponent,
                         class JumpControlComponent,
                         struct DimensionTypeComponent>,
                     struct Write<struct MobJumpComponent, struct StateVectorComponent, struct PlayerActionComponent>,
                     struct AddRemove<struct TriggerJumpRequestComponent>,
                     struct GlobalRead<struct ExternalDataComponent, struct LocalConstBlockSourceFactoryComponent>,
                     struct GlobalWrite<>,
                     struct EntityFactoryT<>>& context);

    // NOLINTEND
};

}; // namespace MobJumpFromGroundSystemImpl

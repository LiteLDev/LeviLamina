#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/GlobalRead.h"
#include "mc/common/GlobalWrite.h"
#include "mc/common/StrictExecutionContext.h"
#include "mc/common/wrapper/AddRemove.h"
#include "mc/common/wrapper/Optional.h"
#include "mc/deps/core/data/Filter.h"
#include "mc/deps/core/data/Read.h"
#include "mc/deps/core/data/Write.h"
#include "mc/entity/EntityFactoryT.h"
#include "mc/entity/EntityModifier.h"
#include "mc/world/components/FlagComponent.h"

namespace MobJumpFromGroundSystemImpl {
// NOLINTBEGIN
// symbol:
// ?doFilter@MobJumpFromGroundSystemImpl@@YAXAEBVStrictEntityContext@@AEBV?$Optional@V?$FlagComponent@ULocalPlayerComponentFlag@@@@@@AEBV?$Optional@V?$FlagComponent@ULavaSlimeFlag@@@@@@AEBV?$Optional@V?$FlagComponent@USquidFlag@@@@@@V?$EntityModifier@V?$FlagComponent@ULocalPlayerJumpRequestFlag@@@@V?$FlagComponent@ULavaSlimeJumpRequestFlag@@@@V?$FlagComponent@USquidJumpRequestFlag@@@@V?$FlagComponent@UOtherJumpRequestFlag@@@@@@@Z
MCAPI void doFilter(
    class StrictEntityContext const&                                            context,
    class Optional<class FlagComponent<struct LocalPlayerComponentFlag>> const& localPlayer,
    class Optional<class FlagComponent<struct LavaSlimeFlag>> const&,
    class Optional<class FlagComponent<struct SquidFlag>> const&,
    class EntityModifier<
        class FlagComponent<struct LocalPlayerJumpRequestFlag>,
        class FlagComponent<struct LavaSlimeJumpRequestFlag>,
        class FlagComponent<struct SquidJumpRequestFlag>,
        class FlagComponent<struct OtherJumpRequestFlag>> mod
);

// symbol:
// ?doLavaSlimeJumpFromGround@MobJumpFromGroundSystemImpl@@YAXAEBVStrictEntityContext@@AEBUAABBShapeComponent@@AEBUSynchedActorDataComponent@@AEAUStateVectorComponent@@AEBUMobEffectsComponent@@AEAV?$EntityModifier@UTriggerJumpRequestComponent@@@@AEBVIConstBlockSource@@@Z
MCAPI void
doLavaSlimeJumpFromGround(class StrictEntityContext const&, struct AABBShapeComponent const&, struct SynchedActorDataComponent const&, struct StateVectorComponent&, struct MobEffectsComponent const&, class EntityModifier<struct TriggerJumpRequestComponent>&, class IConstBlockSource const&);

// symbol:
// ?doLocalPlayerJumpFromGround@MobJumpFromGroundSystemImpl@@YAXAEBVStrictEntityContext@@AEBV?$Optional@$$CBVJumpControlComponent@@@@AEBUAABBShapeComponent@@AEBUActorDataFlagComponent@@AEBUActorRotationComponent@@AEBUMobEffectsComponent@@AEAUMobJumpComponent@@AEAUStateVectorComponent@@AEAUPlayerActionComponent@@AEAV?$EntityModifier@UTriggerJumpRequestComponent@@@@AEAV?$StrictExecutionContext@U?$Filter@V?$FlagComponent@UCanStandOnSnowFlag@@@@V?$FlagComponent@UHasLightweightFamilyFlag@@@@V?$FlagComponent@UHorseFlag@@@@V?$FlagComponent@UMobFlag@@@@V?$FlagComponent@UParrotFlag@@@@UVehicleComponent@@V?$FlagComponent@UCamelFlag@@@@V?$FlagComponent@UPlayerComponentFlag@@@@V?$FlagComponent@ULocalPlayerJumpRequestFlag@@@@V?$FlagComponent@ULavaSlimeJumpRequestFlag@@@@V?$FlagComponent@USquidJumpRequestFlag@@@@V?$FlagComponent@UOtherJumpRequestFlag@@@@@@U?$Read@UAABBShapeComponent@@UMovementAbilitiesComponent@@UActorTypeComponent@@UFallDistanceComponent@@UPassengerComponent@@UActorGameTypeComponent@@UActorDataFlagComponent@@UVehicleComponent@@UActorRotationComponent@@UMobBodyRotationComponent@@URenderRotationComponent@@UStandAnimationComponent@@UOffsetsComponent@@UVanillaOffsetComponent@@UPassengerRenderingRidingOffsetComponent@@UMobEffectsComponent@@USynchedActorDataComponent@@VJumpControlComponent@@UDimensionTypeComponent@@@@U?$Write@UMobJumpComponent@@UStateVectorComponent@@UPlayerActionComponent@@@@U?$AddRemove@UTriggerJumpRequestComponent@@@@U?$GlobalRead@UExternalDataComponent@@ULocalConstBlockSourceFactoryComponent@@@@U?$GlobalWrite@$$V@@U?$EntityFactoryT@$$V@@@@AEBVIConstBlockSource@@@Z
MCAPI void doLocalPlayerJumpFromGround(
    class StrictEntityContext const& entity,
    class Optional<class JumpControlComponent const> const&,
    struct AABBShapeComponent const&,
    struct ActorDataFlagComponent const&,
    struct ActorRotationComponent const&,
    struct MobEffectsComponent const&,
    struct MobJumpComponent&,
    struct StateVectorComponent&,
    struct PlayerActionComponent&,
    class EntityModifier<struct TriggerJumpRequestComponent>& modifier,
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
        struct EntityFactoryT<>>&  executionContext,
    class IConstBlockSource const& region
);

// symbol:
// ?doOtherMobJumpFromGround@MobJumpFromGroundSystemImpl@@YAXAEBVStrictEntityContext@@AEBV?$Optional@$$CBVJumpControlComponent@@@@AEBUAABBShapeComponent@@AEBUActorDataFlagComponent@@AEBUActorRotationComponent@@AEBUMobEffectsComponent@@AEAUMobJumpComponent@@AEAUStateVectorComponent@@AEAV?$EntityModifier@UTriggerJumpRequestComponent@@@@_NAEBVIConstBlockSource@@@Z
MCAPI void doOtherMobJumpFromGround(
    class StrictEntityContext const& entity,
    class Optional<class JumpControlComponent const> const&,
    struct AABBShapeComponent const&,
    struct ActorDataFlagComponent const&,
    struct ActorRotationComponent const&,
    struct MobEffectsComponent const&,
    struct MobJumpComponent&,
    struct StateVectorComponent&,
    class EntityModifier<struct TriggerJumpRequestComponent>& modifier,
    bool,
    class IConstBlockSource const& region
);

// symbol:
// ?mobJumpFromGround@MobJumpFromGroundSystemImpl@@YAXAEBVStrictEntityContext@@AEBUAABBShapeComponent@@AEBUActorDataFlagComponent@@AEBUActorRotationComponent@@AEBUMobEffectsComponent@@PEBVJumpControlComponent@@AEAUMobJumpComponent@@AEAUStateVectorComponent@@AEAV?$EntityModifier@UTriggerJumpRequestComponent@@@@AEBVIConstBlockSource@@_N@Z
MCAPI void mobJumpFromGround(
    class StrictEntityContext const& entity,
    struct AABBShapeComponent const&,
    struct ActorDataFlagComponent const&,
    struct ActorRotationComponent const&,
    struct MobEffectsComponent const&,
    class JumpControlComponent const* jumpControlComponent,
    struct MobJumpComponent&,
    struct StateVectorComponent&,
    class EntityModifier<struct TriggerJumpRequestComponent>& modifier,
    class IConstBlockSource const&                            region,
    bool
);
// NOLINTEND

}; // namespace MobJumpFromGroundSystemImpl

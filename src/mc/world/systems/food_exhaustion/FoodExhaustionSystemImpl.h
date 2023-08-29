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
#include "mc/enums/GameType.h"
#include "mc/world/components/FlagComponent.h"

namespace FoodExhaustionSystemImpl {
// NOLINTBEGIN
/**
 * @symbol
 * ?doFoodExhaustion\@FoodExhaustionSystemImpl\@\@YAXAEBVStrictEntityContext\@\@V?$Optional\@$$CBV?$FlagComponent\@UOnGroundFlag\@\@\@\@\@\@V?$Optional\@$$CBV?$FlagComponent\@UInWaterFlag\@\@\@\@\@\@AEAUAttributesComponent\@\@AEBVExhaustionComponent\@\@AEBUActorGameTypeComponent\@\@AEBUServerPlayerCurrentMovementComponent\@\@AEBUStateVectorComponent\@\@AEBUSynchedActorDataComponent\@\@AEBUGetAttachPositionViews\@\@W4GameType\@\@AEBVIConstBlockSource\@\@\@Z
 */
MCAPI void doFoodExhaustion(class StrictEntityContext const&, class Optional<class FlagComponent<struct OnGroundFlag> const>, class Optional<class FlagComponent<struct InWaterFlag> const>, struct AttributesComponent&, class ExhaustionComponent const&, struct ActorGameTypeComponent const&, struct ServerPlayerCurrentMovementComponent const&, struct StateVectorComponent const&, struct SynchedActorDataComponent const&, struct GetAttachPositionViews const&, enum class GameType, class IConstBlockSource const&);
// NOLINTEND

}; // namespace FoodExhaustionSystemImpl

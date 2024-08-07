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
#include "mc/enums/GameType.h"
#include "mc/world/components/FlagComponent.h"

namespace FoodExhaustionSystemImpl {
// NOLINTBEGIN
MCAPI void doFoodExhaustion(
    class StrictEntityContext const&                   entity,
    class Optional<struct OnGroundFlagComponent const> onGround,
    class Optional<class FlagComponent<struct InWaterFlag> const>,
    class ExhaustionComponent const& attributes,
    struct ActorGameTypeComponent const&,
    struct ServerPlayerCurrentMovementComponent const& playerGameType,
    struct StateVectorComponent const&,
    struct ActorDataFlagComponent const& state,
    struct GetAttachPositionViews const& actorData,
    class EntityModifier<struct AttributeRequestComponent>,
    ::GameType,
    class IConstBlockSource const& region
);
// NOLINTEND

}; // namespace FoodExhaustionSystemImpl

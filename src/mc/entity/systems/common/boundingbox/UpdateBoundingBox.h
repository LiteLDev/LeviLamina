#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/GlobalRead.h"
#include "mc/common/GlobalWrite.h"
#include "mc/common/StrictExecutionContext.h"
#include "mc/common/wrapper/AddRemove.h"
#include "mc/common/wrapper/Optional.h"
#include "mc/common/wrapper/optional_ref.h"
#include "mc/deps/core/data/Filter.h"
#include "mc/deps/core/data/Read.h"
#include "mc/deps/core/data/Write.h"
#include "mc/entity/EntityFactoryT.h"
#include "mc/entity/EntityModifier.h"
#include "mc/entity/components/ShouldUpdateBoundingBoxRequestComponent.h"
#include "mc/world/components/FlagComponent.h"

// auto generated forward declare list
// clang-format off
namespace UpdateBoundingBox { struct SystemParams; }
// clang-format on

namespace UpdateBoundingBox {
// NOLINTBEGIN
// symbol:
// ?onAABBRelativeSizeChanged@UpdateBoundingBox@@YAXAEBUAABBRelativeSizeUpdateComponent@@AEBUAABBShapeComponent@@AEAUOffsetsComponent@@@Z
MCAPI void
onAABBRelativeSizeChanged(struct AABBRelativeSizeUpdateComponent const&, struct AABBShapeComponent const&, struct OffsetsComponent&);

// symbol: ?onAbsoluteSizeChanged@UpdateBoundingBox@@YAXAEBUAbsoluteSizeUpdateComponent@@AEAUOffsetsComponent@@@Z
MCAPI void onAbsoluteSizeChanged(struct AbsoluteSizeUpdateComponent const&, struct OffsetsComponent&);

// symbol:
// ?onCustomSizeChanged@UpdateBoundingBox@@YAXAEBUCustomSizeUpdateComponent@@AEBUAABBShapeComponent@@AEAUOffsetsComponent@@@Z
MCAPI void
onCustomSizeChanged(struct CustomSizeUpdateComponent const&, struct AABBShapeComponent const&, struct OffsetsComponent&);

// symbol:
// ?onMinecartSizeChanged@UpdateBoundingBox@@YAXAEBUStateVectorComponent@@AEAUAABBShapeComponent@@AEAUOffsetsComponent@@@Z
MCAPI void
onMinecartSizeChanged(struct StateVectorComponent const&, struct AABBShapeComponent&, struct OffsetsComponent&);

// symbol:
// ?onShulkerSizeChanged@UpdateBoundingBox@@YAXAEBUSynchedActorDataComponent@@AEBUAABBShapeComponent@@AEAUOffsetsComponent@@@Z
MCAPI void
onShulkerSizeChanged(struct SynchedActorDataComponent const&, struct AABBShapeComponent const&, struct OffsetsComponent&);

// symbol: ?singleTickImpl@UpdateBoundingBox@@YAXAEBVStrictEntityContext@@AEAUSystemParams@1@@Z
MCAPI void singleTickImpl(class StrictEntityContext const&, struct UpdateBoundingBox::SystemParams&);

// symbol: ?singleTickOnSizeChanged@UpdateBoundingBox@@YAXAEBVStrictEntityContext@@AEAUSystemParams@1@@Z
MCAPI void singleTickOnSizeChanged(class StrictEntityContext const&, struct UpdateBoundingBox::SystemParams&);

// symbol: ?tickImpl@UpdateBoundingBox@@YAXAEAUSystemParams@1@@Z
MCAPI void tickImpl(struct UpdateBoundingBox::SystemParams&);

// symbol:
// ?transformPlayerSizeRequest@UpdateBoundingBox@@YAXAEAUShouldUpdateBoundingBoxRequestComponent@@AEBVCollisionBoxComponent@@V?$Optional@$$CBUIsHorizontalPoseFlagComponent@@@@AEBUActorDataFlagComponent@@M@Z
MCAPI void transformPlayerSizeRequest(
    struct ShouldUpdateBoundingBoxRequestComponent&,
    class CollisionBoxComponent const&,
    class Optional<struct IsHorizontalPoseFlagComponent const>,
    struct ActorDataFlagComponent const&,
    float
);

// symbol:
// ?visitCommonSetSize@UpdateBoundingBox@@YAXAEBVStrictEntityContext@@AEBUShouldUpdateBoundingBoxRequestComponent@@AEBUStateVectorComponent@@AEAUActorDataDirtyFlagsComponent@@AEAUActorDataBoundingBoxComponent@@AEAUAABBShapeComponent@@AEAUDepenetrationComponent@@V?$optional_ref@$$CBVCollisionBoxComponent@@@@V?$EntityModifier@UShouldUpdateBoundingBoxRequestComponent@@@@@Z
MCAPI void visitCommonSetSize(class StrictEntityContext const&, struct ShouldUpdateBoundingBoxRequestComponent const&, struct StateVectorComponent const&, struct ActorDataDirtyFlagsComponent&, struct ActorDataBoundingBoxComponent&, struct AABBShapeComponent&, struct DepenetrationComponent&, class optional_ref<class CollisionBoxComponent const>, class EntityModifier<struct ShouldUpdateBoundingBoxRequestComponent>);
// NOLINTEND

}; // namespace UpdateBoundingBox

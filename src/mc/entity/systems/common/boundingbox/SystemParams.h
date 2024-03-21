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

// auto generated forward declare list
// clang-format off
struct AABBShapeComponent;
struct ActorDataBoundingBoxComponent;
struct ActorDataDirtyFlagsComponent;
struct DepenetrationComponent;
struct MinecartFlag;
struct OffsetsComponent;
struct PlayerComponentFlag;
struct ShouldUpdateBoundingBoxRequestComponent;
struct ShulkerFlag;
// clang-format on

namespace UpdateBoundingBox {

struct SystemParams {
public:
    // prevent constructor by default
    SystemParams& operator=(SystemParams const&);
    SystemParams(SystemParams const&);
    SystemParams();

public:
    // NOLINTBEGIN
    // symbol:
    // ??0SystemParams@UpdateBoundingBox@@QEAA@AEAV?$StrictExecutionContext@U?$Filter@V?$FlagComponent@UPlayerComponentFlag@@@@V?$FlagComponent@UMinecartFlag@@@@V?$FlagComponent@UShulkerFlag@@@@@@U?$Read@$$V@@U?$Write@UAABBShapeComponent@@UActorDataBoundingBoxComponent@@UActorDataDirtyFlagsComponent@@UDepenetrationComponent@@UOffsetsComponent@@@@U?$AddRemove@UShouldUpdateBoundingBoxRequestComponent@@@@U?$GlobalRead@$$V@@U?$GlobalWrite@$$V@@U?$EntityFactoryT@$$V@@@@M_N@Z
    MCAPI SystemParams(
        class StrictExecutionContext<
            struct Filter<
                class FlagComponent<struct PlayerComponentFlag>,
                class FlagComponent<struct MinecartFlag>,
                class FlagComponent<struct ShulkerFlag>>,
            struct Read<>,
            struct Write<
                struct AABBShapeComponent,
                struct ActorDataBoundingBoxComponent,
                struct ActorDataDirtyFlagsComponent,
                struct DepenetrationComponent,
                struct OffsetsComponent>,
            struct AddRemove<struct ShouldUpdateBoundingBoxRequestComponent>,
            struct GlobalRead<>,
            struct GlobalWrite<>,
            struct EntityFactoryT<>>&,
        float,
        bool
    );

    // NOLINTEND
};

}; // namespace UpdateBoundingBox

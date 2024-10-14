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
            struct EntityFactoryT<>>& c,
        float                         sneakHeight,
        bool                          isClientSide
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    // NOLINTEND
};

}; // namespace UpdateBoundingBox

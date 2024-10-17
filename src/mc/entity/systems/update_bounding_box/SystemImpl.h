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
class StrictEntityContext;
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

struct SystemImpl {
public:
    // prevent constructor by default
    SystemImpl& operator=(SystemImpl const&);
    SystemImpl(SystemImpl const&);
    SystemImpl();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SystemImpl() = default;

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
                      struct EntityFactoryT<>>& executionContext);

    // vIndex: 6
    virtual void singleTick(
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
            struct EntityFactoryT<>>& executionContext,
        class StrictEntityContext&    entityContext
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void registerEvents$(entt::dispatcher& dispatcher);

    MCAPI void singleTick$(
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
            struct EntityFactoryT<>>& executionContext,
        class StrictEntityContext&    entityContext
    );

    MCAPI void tick$(class StrictExecutionContext<
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
                     struct EntityFactoryT<>>& executionContext);

    // NOLINTEND
};

}; // namespace UpdateBoundingBox

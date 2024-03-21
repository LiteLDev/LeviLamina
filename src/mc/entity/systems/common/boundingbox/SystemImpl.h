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
    // vIndex: 0, symbol: __gen_??1SystemImpl@UpdateBoundingBox@@UEAA@XZ
    virtual ~SystemImpl() = default;

    // vIndex: 1, symbol: ?registerEvents@ISystem@@UEAAXAEAV?$basic_dispatcher@V?$allocator@X@std@@@entt@@@Z
    virtual void registerEvents(entt::dispatcher&);

    // vIndex: 2, symbol: __unk_vfn_2
    virtual void __unk_vfn_2();

    // vIndex: 3, symbol: __unk_vfn_3
    virtual void __unk_vfn_3();

    // vIndex: 4, symbol: __unk_vfn_4
    virtual void __unk_vfn_4();

    // vIndex: 5, symbol:
    // ?tick@SystemImpl@UpdateBoundingBox@@UEAAXAEAV?$StrictExecutionContext@U?$Filter@V?$FlagComponent@UPlayerComponentFlag@@@@V?$FlagComponent@UMinecartFlag@@@@V?$FlagComponent@UShulkerFlag@@@@@@U?$Read@$$V@@U?$Write@UAABBShapeComponent@@UActorDataBoundingBoxComponent@@UActorDataDirtyFlagsComponent@@UDepenetrationComponent@@UOffsetsComponent@@@@U?$AddRemove@UShouldUpdateBoundingBoxRequestComponent@@@@U?$GlobalRead@$$V@@U?$GlobalWrite@$$V@@U?$EntityFactoryT@$$V@@@@@Z
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
                      struct EntityFactoryT<>>&);

    // vIndex: 6, symbol:
    // ?singleTick@SystemImpl@UpdateBoundingBox@@UEAAXAEAV?$StrictExecutionContext@U?$Filter@V?$FlagComponent@UPlayerComponentFlag@@@@V?$FlagComponent@UMinecartFlag@@@@V?$FlagComponent@UShulkerFlag@@@@@@U?$Read@$$V@@U?$Write@UAABBShapeComponent@@UActorDataBoundingBoxComponent@@UActorDataDirtyFlagsComponent@@UDepenetrationComponent@@UOffsetsComponent@@@@U?$AddRemove@UShouldUpdateBoundingBoxRequestComponent@@@@U?$GlobalRead@$$V@@U?$GlobalWrite@$$V@@U?$EntityFactoryT@$$V@@@@AEAVStrictEntityContext@@@Z
    virtual void
    singleTick(class StrictExecutionContext<struct Filter<class FlagComponent<struct PlayerComponentFlag>, class FlagComponent<struct MinecartFlag>, class FlagComponent<struct ShulkerFlag>>, struct Read<>, struct Write<struct AABBShapeComponent, struct ActorDataBoundingBoxComponent, struct ActorDataDirtyFlagsComponent, struct DepenetrationComponent, struct OffsetsComponent>, struct AddRemove<struct ShouldUpdateBoundingBoxRequestComponent>, struct GlobalRead<>, struct GlobalWrite<>, struct EntityFactoryT<>>&, class StrictEntityContext&);

    // NOLINTEND
};

}; // namespace UpdateBoundingBox

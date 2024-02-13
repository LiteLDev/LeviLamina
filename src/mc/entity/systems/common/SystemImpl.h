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

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
class StrictEntityContext;
struct UpdateWaterStateRequestComponent;
// clang-format on

namespace ServerStandInCauldronSystem {

class SystemImpl {
public:
    // prevent constructor by default
    SystemImpl& operator=(SystemImpl const&);
    SystemImpl(SystemImpl const&);
    SystemImpl();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1SystemImpl@ServerStandInCauldronSystem@@UEAA@XZ
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
    // ?tick@SystemImpl@ServerStandInCauldronSystem@@MEAAXAEAV?$StrictExecutionContext@U?$Filter@UUpdateWaterStateRequestComponent@@@@U?$Read@VActorOwnerComponent@@@@U?$Write@$$V@@U?$AddRemove@$$V@@U?$GlobalRead@$$V@@U?$GlobalWrite@$$V@@U?$EntityFactoryT@$$V@@@@@Z
    virtual void tick(class StrictExecutionContext<
                      struct Filter<struct UpdateWaterStateRequestComponent>,
                      struct Read<class ActorOwnerComponent>,
                      struct Write<>,
                      struct AddRemove<>,
                      struct GlobalRead<>,
                      struct GlobalWrite<>,
                      struct EntityFactoryT<>>&);

    // vIndex: 6, symbol:
    // ?singleTick@SystemImpl@ServerStandInCauldronSystem@@MEAAXAEAV?$StrictExecutionContext@U?$Filter@UUpdateWaterStateRequestComponent@@@@U?$Read@VActorOwnerComponent@@@@U?$Write@$$V@@U?$AddRemove@$$V@@U?$GlobalRead@$$V@@U?$GlobalWrite@$$V@@U?$EntityFactoryT@$$V@@@@AEAVStrictEntityContext@@@Z
    virtual void
    singleTick(class StrictExecutionContext<struct Filter<struct UpdateWaterStateRequestComponent>, struct Read<class ActorOwnerComponent>, struct Write<>, struct AddRemove<>, struct GlobalRead<>, struct GlobalWrite<>, struct EntityFactoryT<>>&, class StrictEntityContext&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_checkInsideCauldron@SystemImpl@ServerStandInCauldronSystem@@CAXAEAVActorOwnerComponent@@@Z
    MCAPI static void _checkInsideCauldron(class ActorOwnerComponent&);

    // NOLINTEND
};

}; // namespace ServerStandInCauldronSystem

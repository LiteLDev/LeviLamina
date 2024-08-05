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
    // vIndex: 0
    virtual ~SystemImpl() = default;

    // vIndex: 1
    virtual void registerEvents(entt::dispatcher&);

    // vIndex: 2
    virtual void __unk_vfn_2();

    // vIndex: 3
    virtual void __unk_vfn_3();

    // vIndex: 4
    virtual void __unk_vfn_4();

    // vIndex: 5
    virtual void tick(class StrictExecutionContext<
                      struct Filter<struct UpdateWaterStateRequestComponent>,
                      struct Read<class ActorOwnerComponent>,
                      struct Write<>,
                      struct AddRemove<>,
                      struct GlobalRead<>,
                      struct GlobalWrite<>,
                      struct EntityFactoryT<>>&);

    // vIndex: 6
    virtual void
    singleTick(class StrictExecutionContext<struct Filter<struct UpdateWaterStateRequestComponent>, struct Read<class ActorOwnerComponent>, struct Write<>, struct AddRemove<>, struct GlobalRead<>, struct GlobalWrite<>, struct EntityFactoryT<>>&, class StrictEntityContext&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static void _checkInsideCauldron(class ActorOwnerComponent&);

    // NOLINTEND
};

}; // namespace ServerStandInCauldronSystem

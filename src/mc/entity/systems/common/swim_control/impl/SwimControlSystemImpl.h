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
struct ActorDataFlagComponent;
struct ActorRotationComponent;
struct InWaterFlag;
struct MobIsJumpingFlag;
struct MobTravelComponent;
struct MoveInputComponent;
struct MovementAbilitiesComponent;
struct PlayerInputRequestComponent;
struct StateVectorComponent;
// clang-format on

namespace SwimControlSystemImpl {

struct SwimControlSystemImpl {
public:
    // prevent constructor by default
    SwimControlSystemImpl& operator=(SwimControlSystemImpl const&);
    SwimControlSystemImpl(SwimControlSystemImpl const&);
    SwimControlSystemImpl();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1SwimControlSystemImpl@SwimControlSystemImpl@@UEAA@XZ
    virtual ~SwimControlSystemImpl() = default;

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1();

    // vIndex: 2, symbol: __unk_vfn_2
    virtual void __unk_vfn_2();

    // vIndex: 3, symbol: __unk_vfn_3
    virtual void __unk_vfn_3();

    // vIndex: 4, symbol: __unk_vfn_4
    virtual void __unk_vfn_4();

    // vIndex: 5, symbol:
    // ?tick@SwimControlSystemImpl@1@UEAAXAEAV?$StrictExecutionContext@U?$Filter@UMobTravelComponent@@V?$FlagComponent@UInWaterFlag@@@@V?$FlagComponent@UMobIsJumpingFlag@@@@@@U?$Read@UActorDataFlagComponent@@UMovementAbilitiesComponent@@UActorRotationComponent@@UMoveInputComponent@@UPlayerInputRequestComponent@@@@U?$Write@UStateVectorComponent@@@@U?$AddRemove@$$V@@U?$GlobalRead@$$V@@U?$GlobalWrite@$$V@@U?$EntityFactoryT@$$V@@@@@Z
    virtual void tick(class StrictExecutionContext<
                      struct Filter<
                          struct MobTravelComponent,
                          class FlagComponent<struct InWaterFlag>,
                          class FlagComponent<struct MobIsJumpingFlag>>,
                      struct Read<
                          struct ActorDataFlagComponent,
                          struct MovementAbilitiesComponent,
                          struct ActorRotationComponent,
                          struct MoveInputComponent,
                          struct PlayerInputRequestComponent>,
                      struct Write<struct StateVectorComponent>,
                      struct AddRemove<>,
                      struct GlobalRead<>,
                      struct GlobalWrite<>,
                      struct EntityFactoryT<>>&);

    // NOLINTEND
};

}; // namespace SwimControlSystemImpl

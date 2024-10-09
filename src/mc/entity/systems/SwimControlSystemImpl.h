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
    // vIndex: 0
    virtual ~SwimControlSystemImpl() = default;

    // vIndex: 1
    virtual void __unk_vfn_1();

    // vIndex: 2
    virtual void __unk_vfn_2();

    // vIndex: 3
    virtual void __unk_vfn_3();

    // vIndex: 4
    virtual void __unk_vfn_4();

    // vIndex: 5
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
                      struct EntityFactoryT<>>& context);

    // NOLINTEND
};

}; // namespace SwimControlSystemImpl

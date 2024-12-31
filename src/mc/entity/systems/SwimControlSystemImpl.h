#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/strict/AddRemove.h"
#include "mc/deps/ecs/strict/EntityFactoryT.h"
#include "mc/deps/ecs/strict/Filter.h"
#include "mc/deps/ecs/strict/GlobalRead.h"
#include "mc/deps/ecs/strict/GlobalWrite.h"
#include "mc/deps/ecs/strict/IStrictTickingSystem.h"
#include "mc/deps/ecs/strict/Read.h"
#include "mc/deps/ecs/strict/StrictExecutionContext.h"
#include "mc/deps/ecs/strict/Write.h"

// auto generated forward declare list
// clang-format off
struct ActorDataFlagComponent;
struct ActorRotationComponent;
struct MobIsJumpingFlagComponent;
struct MobTravelComponent;
struct MoveInputComponent;
struct MovementAbilitiesComponent;
struct PlayerInputRequestComponent;
struct StateVectorComponent;
struct WasInWaterFlagComponent;
// clang-format on

namespace SwimControlSystemImpl {

struct SwimControlSystemImpl
: public ::IStrictTickingSystem<::StrictExecutionContext<
      ::Filter<::MobTravelComponent, ::WasInWaterFlagComponent, ::MobIsJumpingFlagComponent>,
      ::Read<
          ::ActorDataFlagComponent,
          ::MovementAbilitiesComponent,
          ::ActorRotationComponent,
          ::MoveInputComponent,
          ::PlayerInputRequestComponent>,
      ::Write<::StateVectorComponent>,
      ::AddRemove<>,
      ::GlobalRead<>,
      ::GlobalWrite<>,
      ::EntityFactoryT<>>> {
public:
    // prevent constructor by default
    SwimControlSystemImpl& operator=(SwimControlSystemImpl const&);
    SwimControlSystemImpl(SwimControlSystemImpl const&);
    SwimControlSystemImpl();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 5
    virtual void tick(::StrictExecutionContext<
                      ::Filter<::MobTravelComponent, ::WasInWaterFlagComponent, ::MobIsJumpingFlagComponent>,
                      ::Read<
                          ::ActorDataFlagComponent,
                          ::MovementAbilitiesComponent,
                          ::ActorRotationComponent,
                          ::MoveInputComponent,
                          ::PlayerInputRequestComponent>,
                      ::Write<::StateVectorComponent>,
                      ::AddRemove<>,
                      ::GlobalRead<>,
                      ::GlobalWrite<>,
                      ::EntityFactoryT<>>& context) /*override*/;

    // vIndex: 0
    virtual ~SwimControlSystemImpl() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $tick(::StrictExecutionContext<
                     ::Filter<::MobTravelComponent, ::WasInWaterFlagComponent, ::MobIsJumpingFlagComponent>,
                     ::Read<
                         ::ActorDataFlagComponent,
                         ::MovementAbilitiesComponent,
                         ::ActorRotationComponent,
                         ::MoveInputComponent,
                         ::PlayerInputRequestComponent>,
                     ::Write<::StateVectorComponent>,
                     ::AddRemove<>,
                     ::GlobalRead<>,
                     ::GlobalWrite<>,
                     ::EntityFactoryT<>>& context);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace SwimControlSystemImpl

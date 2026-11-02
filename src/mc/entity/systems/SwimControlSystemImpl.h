#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/AddRemove.h"
#include "mc/deps/ecs/strict/EntityFactoryT.h"
#include "mc/deps/ecs/strict/Exclude.h"
#include "mc/deps/ecs/strict/Filter.h"
#include "mc/deps/ecs/strict/GlobalRead.h"
#include "mc/deps/ecs/strict/GlobalWrite.h"
#include "mc/deps/ecs/strict/IStrictTickingSystem.h"
#include "mc/deps/ecs/strict/Include.h"
#include "mc/deps/ecs/strict/Read.h"
#include "mc/deps/ecs/strict/StrictExecutionContext.h"
#include "mc/deps/ecs/strict/Write.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
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
    // SwimControlSystemImpl inner types declare
    // clang-format off
    struct Views;
    // clang-format on

    // SwimControlSystemImpl inner types define
    struct Views {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<
            8,
            104,
            ::ViewT<
                ::StrictEntityContext,
                ::Include<::MobTravelComponent, ::WasInWaterFlagComponent>,
                ::Exclude<::MobIsJumpingFlagComponent>,
                ::ActorDataFlagComponent const,
                ::MovementAbilitiesComponent const,
                ::ActorRotationComponent const,
                ::MoveInputComponent const,
                ::PlayerInputRequestComponent const,
                ::StateVectorComponent>>
            mView;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 112, ::std::optional<::SwimControlSystemImpl::SwimControlSystemImpl::Views>> mViews;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void tick(
        ::StrictExecutionContext<
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
            ::EntityFactoryT<>>& context
    ) /*override*/;
    // NOLINTEND
};

} // namespace SwimControlSystemImpl

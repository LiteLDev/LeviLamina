#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class DimensionStateComponent;
class LoadingStateComponent;
class StrictEntityContext;
struct ActorMovementTickNeededComponent;
struct LocalPlayerComponent;
struct PlayerComponent;
struct SkipNormalTickComponent;
struct TickingSystemWithInfo;
// clang-format on

struct NormalTickFilterSystem {
public:
    // prevent constructor by default
    NormalTickFilterSystem& operator=(NormalTickFilterSystem const&);
    NormalTickFilterSystem(NormalTickFilterSystem const&);
    NormalTickFilterSystem();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::TickingSystemWithInfo createGenericSystem();

    MCAPI static ::TickingSystemWithInfo createLocalPlayerSystem();

    MCAPI static void tickGenericSystem(
        ::ViewT<
            ::StrictEntityContext,
            ::Include<::ActorMovementTickNeededComponent, ::PlayerComponent>,
            ::Optional<::DimensionStateComponent const>> view,
        ::EntityModifier<::SkipNormalTickComponent>      mod
    );

    MCAPI static void tickLocalPlayerSystem(
        ::ViewT<
            ::StrictEntityContext,
            ::Include<::ActorMovementTickNeededComponent, ::LocalPlayerComponent>,
            ::Optional<::LoadingStateComponent const>> view,
        ::EntityModifier<::SkipNormalTickComponent>    mod
    );
    // NOLINTEND
};

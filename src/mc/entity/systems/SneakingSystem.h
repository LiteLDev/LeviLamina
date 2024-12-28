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
class ActorOwnerComponent;
class StrictEntityContext;
struct ActorTickedComponent;
struct PlayerComponent;
struct SneakingComponent;
struct TickingSystemWithInfo;
// clang-format on

class SneakingSystem : public ::IStrictTickingSystem<::StrictExecutionContext<
                           ::Filter<::ActorTickedComponent>,
                           ::Read<::PlayerComponent>,
                           ::Write<::SneakingComponent, ::ActorOwnerComponent>,
                           ::AddRemove<>,
                           ::GlobalRead<>,
                           ::GlobalWrite<>,
                           ::EntityFactoryT<>>> {
public:
    // prevent constructor by default
    SneakingSystem& operator=(SneakingSystem const&);
    SneakingSystem(SneakingSystem const&);
    SneakingSystem();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 5
    virtual void tick(::StrictExecutionContext<
                      ::Filter<::ActorTickedComponent>,
                      ::Read<::PlayerComponent>,
                      ::Write<::SneakingComponent, ::ActorOwnerComponent>,
                      ::AddRemove<>,
                      ::GlobalRead<>,
                      ::GlobalWrite<>,
                      ::EntityFactoryT<>>& context) /*override*/;

    // vIndex: 0
    virtual ~SneakingSystem() /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _tickSneakingSystem(
        ::StrictEntityContext&,
        ::PlayerComponent const& playerTag,
        ::SneakingComponent&     sneaking,
        ::ActorOwnerComponent&   actorOwner
    );

    MCAPI static ::TickingSystemWithInfo createSystem();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $tick(::StrictExecutionContext<
                     ::Filter<::ActorTickedComponent>,
                     ::Read<::PlayerComponent>,
                     ::Write<::SneakingComponent, ::ActorOwnerComponent>,
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

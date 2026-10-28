#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/AddRemove.h"
#include "mc/deps/ecs/strict/EntityFactoryT.h"
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
class ActorOwnerComponent;
class StrictEntityContext;
struct PlayerComponent;
struct ServerPlayerComponent;
struct StateVectorComponent;
struct TickingSystemWithInfo;
// clang-format on

namespace PlayerValidation {

struct ValidationSystem : public ::IStrictTickingSystem<::StrictExecutionContext<
                              ::Filter<::PlayerComponent>,
                              ::Read<::StateVectorComponent>,
                              ::Write<::ActorOwnerComponent>,
                              ::AddRemove<>,
                              ::GlobalRead<>,
                              ::GlobalWrite<>,
                              ::EntityFactoryT<>>> {
public:
    // ValidationSystem inner types declare
    // clang-format off
    struct Views;
    // clang-format on

    // ValidationSystem inner types define
    struct Views {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<
            8,
            56,
            ::ViewT<::StrictEntityContext, ::Include<::ServerPlayerComponent>, ::StateVectorComponent>>
            mView;
        // NOLINTEND
    };

    using Base = ::IStrictTickingSystem<::StrictExecutionContext<
        ::Filter<::PlayerComponent>,
        ::Read<::StateVectorComponent>,
        ::Write<::ActorOwnerComponent>,
        ::AddRemove<>,
        ::GlobalRead<>,
        ::GlobalWrite<>,
        ::EntityFactoryT<>>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string const>                                           mMessage;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PlayerValidation::ValidationSystem::Views>> mViews;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ValidationSystem() /*override*/ = default;

    virtual void tick(
        ::StrictExecutionContext<
            ::Filter<::PlayerComponent>,
            ::Read<::StateVectorComponent>,
            ::Write<::ActorOwnerComponent>,
            ::AddRemove<>,
            ::GlobalRead<>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>& context
    ) /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::TickingSystemWithInfo createSystem(::std::string&& message);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $tick(
        ::StrictExecutionContext<
            ::Filter<::PlayerComponent>,
            ::Read<::StateVectorComponent>,
            ::Write<::ActorOwnerComponent>,
            ::AddRemove<>,
            ::GlobalRead<>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>& context
    );


    // NOLINTEND
};

} // namespace PlayerValidation

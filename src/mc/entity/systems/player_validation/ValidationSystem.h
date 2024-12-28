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
struct PlayerComponent;
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
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk98615a;
    // NOLINTEND

public:
    // prevent constructor by default
    ValidationSystem& operator=(ValidationSystem const&);
    ValidationSystem(ValidationSystem const&);
    ValidationSystem();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 5
    virtual void tick(::StrictExecutionContext<
                      ::Filter<::PlayerComponent>,
                      ::Read<::StateVectorComponent>,
                      ::Write<::ActorOwnerComponent>,
                      ::AddRemove<>,
                      ::GlobalRead<>,
                      ::GlobalWrite<>,
                      ::EntityFactoryT<>>& context) /*override*/;

    // vIndex: 0
    virtual ~ValidationSystem() /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::TickingSystemWithInfo createSystem(::std::string&& message);
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
                     ::Filter<::PlayerComponent>,
                     ::Read<::StateVectorComponent>,
                     ::Write<::ActorOwnerComponent>,
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

} // namespace PlayerValidation

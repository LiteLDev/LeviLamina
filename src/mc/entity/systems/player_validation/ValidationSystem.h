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
class ActorOwnerComponent;
struct PlayerComponentFlag;
struct StateVectorComponent;
struct TickingSystemWithInfo;
// clang-format on

namespace PlayerValidation {

struct ValidationSystem {
public:
    // prevent constructor by default
    ValidationSystem& operator=(ValidationSystem const&);
    ValidationSystem(ValidationSystem const&);
    ValidationSystem();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ValidationSystem() = default;

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
                      struct Filter<class FlagComponent<struct PlayerComponentFlag>>,
                      struct Read<struct StateVectorComponent>,
                      struct Write<class ActorOwnerComponent>,
                      struct AddRemove<>,
                      struct GlobalRead<>,
                      struct GlobalWrite<>,
                      struct EntityFactoryT<>>& context);

    MCAPI static struct TickingSystemWithInfo createSystem(std::string&& message);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void tick$(class StrictExecutionContext<
                     struct Filter<class FlagComponent<struct PlayerComponentFlag>>,
                     struct Read<struct StateVectorComponent>,
                     struct Write<class ActorOwnerComponent>,
                     struct AddRemove<>,
                     struct GlobalRead<>,
                     struct GlobalWrite<>,
                     struct EntityFactoryT<>>& context);

    // NOLINTEND
};

}; // namespace PlayerValidation

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
    // vIndex: 0, symbol: __gen_??1ValidationSystem@PlayerValidation@@UEAA@XZ
    virtual ~ValidationSystem() = default;

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1();

    // vIndex: 2, symbol: __unk_vfn_2
    virtual void __unk_vfn_2();

    // vIndex: 3, symbol: __unk_vfn_3
    virtual void __unk_vfn_3();

    // vIndex: 4, symbol: __unk_vfn_4
    virtual void __unk_vfn_4();

    // vIndex: 5, symbol:
    // ?tick@ValidationSystem@PlayerValidation@@UEAAXAEAV?$StrictExecutionContext@U?$Filter@V?$FlagComponent@UPlayerComponentFlag@@@@@@U?$Read@UStateVectorComponent@@@@U?$Write@VActorOwnerComponent@@@@U?$AddRemove@$$V@@U?$GlobalRead@$$V@@U?$GlobalWrite@$$V@@U?$EntityFactoryT@$$V@@@@@Z
    virtual void tick(class StrictExecutionContext<
                      struct Filter<class FlagComponent<struct PlayerComponentFlag>>,
                      struct Read<struct StateVectorComponent>,
                      struct Write<class ActorOwnerComponent>,
                      struct AddRemove<>,
                      struct GlobalRead<>,
                      struct GlobalWrite<>,
                      struct EntityFactoryT<>>&);

    // symbol:
    // ?createSystem@ValidationSystem@PlayerValidation@@SA?AUTickingSystemWithInfo@@$$QEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI static struct TickingSystemWithInfo createSystem(std::string&&);

    // NOLINTEND
};

}; // namespace PlayerValidation

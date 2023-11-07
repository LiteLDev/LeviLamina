#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Optional.h"
#include "mc/common/wrapper/optional_ref.h"
#include "mc/entity/systems/OnFireSystem.h"

class OnFireServerSystem : public ::OnFireSystem {
public:
    // prevent constructor by default
    OnFireServerSystem& operator=(OnFireServerSystem const&);
    OnFireServerSystem(OnFireServerSystem const&);
    OnFireServerSystem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1OnFireServerSystem@@UEAA@XZ
    virtual ~OnFireServerSystem() = default;

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1();

    // vIndex: 2, symbol: ?tick@OnFireServerSystem@@UEAAXAEAVEntityRegistry@@@Z
    virtual void tick(class EntityRegistry&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_tickServer@OnFireServerSystem@@CAXAEAVEntityContext@@AEAVActorOwnerComponent@@AEAUOnFireComponent@@V?$Optional@$$CBUAbilitiesComponent@@@@@Z
    MCAPI static void
    _tickServer(class EntityContext&, class ActorOwnerComponent&, struct OnFireComponent&, class Optional<struct AbilitiesComponent const>);

    // symbol:
    // ?_tickServerImpl@OnFireServerSystem@@CAX_NAEAVEntityContext@@AEAVActor@@AEAUOnFireComponent@@V?$optional_ref@$$CBUAbilitiesComponent@@@@@Z
    MCAPI static void
    _tickServerImpl(bool, class EntityContext&, class Actor&, struct OnFireComponent&, class optional_ref<struct AbilitiesComponent const>);

    // NOLINTEND
};

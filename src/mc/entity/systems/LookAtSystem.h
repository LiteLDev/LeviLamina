#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/systems/ITickingSystem.h"

class LookAtSystem : public ::ITickingSystem {
public:
    // prevent constructor by default
    LookAtSystem& operator=(LookAtSystem const&);
    LookAtSystem(LookAtSystem const&);
    LookAtSystem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1LookAtSystem@@UEAA@XZ
    virtual ~LookAtSystem() = default;

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1();

    // vIndex: 2, symbol: ?tick@LookAtSystem@@UEAAXAEAVEntityRegistry@@@Z
    virtual void tick(class EntityRegistry& registry);

    // symbol: ?tickLookAtComponent@LookAtSystem@@SAXAEAVActorOwnerComponent@@AEAVLookAtComponent@@@Z
    MCAPI static void tickLookAtComponent(class ActorOwnerComponent&, class LookAtComponent&);

    // NOLINTEND
};

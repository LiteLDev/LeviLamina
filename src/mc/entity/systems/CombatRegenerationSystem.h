#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/systems/ITickingSystem.h"

class CombatRegenerationSystem : public ::ITickingSystem {

public:
    // prevent constructor by default
    CombatRegenerationSystem& operator=(CombatRegenerationSystem const&) = delete;
    CombatRegenerationSystem(CombatRegenerationSystem const&)            = delete;
    CombatRegenerationSystem()                                           = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl 2
     * @symbol ?tick\@CombatRegenerationSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry&);
    // NOLINTEND
};

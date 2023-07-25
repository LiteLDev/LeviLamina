#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace NpcComponents { struct LeaveMenuCountdown; }
// clang-format on

class NpcSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NPCSYSTEM
public:
    NpcSystem& operator=(NpcSystem const&) = delete;
    NpcSystem(NpcSystem const&)            = delete;
    NpcSystem()                            = delete;
#endif

public:
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
     * @symbol ?tick\@NpcSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry&);
    /**
     * @symbol ?tickCountdown\@NpcSystem\@\@SAXAEAVEntityContext\@\@AEAULeaveMenuCountdown\@NpcComponents\@\@\@Z
     */
    MCAPI static void tickCountdown(class EntityContext&, struct NpcComponents::LeaveMenuCountdown&);
};

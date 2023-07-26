#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace NpcComponents { struct LeaveMenuCountdown; }
// clang-format on

class NpcSystem {

public:
    // prevent constructor by default
    NpcSystem& operator=(NpcSystem const&) = delete;
    NpcSystem(NpcSystem const&)            = delete;
    NpcSystem()                            = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?tick\@NpcSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry&); // NOLINT
    /**
     * @symbol ?tickCountdown\@NpcSystem\@\@SAXAEAVEntityContext\@\@AEAULeaveMenuCountdown\@NpcComponents\@\@\@Z
     */
    MCAPI static void tickCountdown(class EntityContext&, struct NpcComponents::LeaveMenuCountdown&); // NOLINT
};

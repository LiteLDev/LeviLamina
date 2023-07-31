#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace AgentComponents { class Move; }
namespace AgentComponents { struct ActionDetails; }
// clang-format on

class AgentMoveCommandSystem {

public:
    // prevent constructor by default
    AgentMoveCommandSystem& operator=(AgentMoveCommandSystem const&) = delete;
    AgentMoveCommandSystem(AgentMoveCommandSystem const&)            = delete;
    AgentMoveCommandSystem()                                         = delete;

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
     * @symbol ?tick\@AgentMoveCommandSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry&);
    /**
     * @symbol ?cleanUp\@AgentMoveCommandSystem\@\@SAXAEAVEntityContext\@\@M\@Z
     */
    MCAPI static void cleanUp(class EntityContext&, float);
    /**
     * @symbol
     * ?initialize\@AgentMoveCommandSystem\@\@SAXAEAVEntityContext\@\@AEAUActionDetails\@AgentComponents\@\@AEAVMove\@4\@\@Z
     */
    MCAPI static void
    initialize(class EntityContext&, struct AgentComponents::ActionDetails&, class AgentComponents::Move&);
    /**
     * @symbol
     * ?tickMove\@AgentMoveCommandSystem\@\@SAXAEAVEntityContext\@\@AEAUActionDetails\@AgentComponents\@\@AEAVMove\@4\@\@Z
     */
    MCAPI static void
    tickMove(class EntityContext&, struct AgentComponents::ActionDetails&, class AgentComponents::Move&);
    // NOLINTEND
};

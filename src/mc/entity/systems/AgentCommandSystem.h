#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace AgentComponents { class CommandCooldown; }
// clang-format on

class AgentCommandSystem {

public:
    // prevent constructor by default
    AgentCommandSystem& operator=(AgentCommandSystem const&) = delete;
    AgentCommandSystem(AgentCommandSystem const&)            = delete;
    AgentCommandSystem()                                     = delete;

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
     * @symbol ?tick\@AgentCommandSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry&);
    /**
     * @symbol ?cleanUp\@AgentCommandSystem\@\@SAXAEAVEntityContext\@\@M\@Z
     */
    MCAPI static void cleanUp(class EntityContext&, float);
    /**
     * @symbol ?initialize\@AgentCommandSystem\@\@SAXAEAVEntityContext\@\@\@Z
     */
    MCAPI static void initialize(class EntityContext&);
    /**
     * @symbol
     * ?tickAgentCooldown\@AgentCommandSystem\@\@SAXAEAVEntityContext\@\@AEAVCommandCooldown\@AgentComponents\@\@\@Z
     */
    MCAPI static void tickAgentCooldown(class EntityContext&, class AgentComponents::CommandCooldown&);
    /**
     * @symbol ?tickLegacy\@AgentCommandSystem\@\@SAXAEAVEntityContext\@\@AEAVAgentCommandComponent\@\@\@Z
     */
    MCAPI static void tickLegacy(class EntityContext&, class AgentCommandComponent&);
    // NOLINTEND
};

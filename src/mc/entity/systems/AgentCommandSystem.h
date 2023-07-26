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
     * @symbol ?tick\@AgentCommandSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry&); // NOLINT
    /**
     * @symbol ?cleanUp\@AgentCommandSystem\@\@SAXAEAVEntityContext\@\@M\@Z
     */
    MCAPI static void cleanUp(class EntityContext&, float); // NOLINT
    /**
     * @symbol ?initialize\@AgentCommandSystem\@\@SAXAEAVEntityContext\@\@\@Z
     */
    MCAPI static void initialize(class EntityContext&); // NOLINT
    /**
     * @symbol
     * ?tickAgentCooldown\@AgentCommandSystem\@\@SAXAEAVEntityContext\@\@AEAVCommandCooldown\@AgentComponents\@\@\@Z
     */
    MCAPI static void tickAgentCooldown(class EntityContext&, class AgentComponents::CommandCooldown&); // NOLINT
    /**
     * @symbol ?tickLegacy\@AgentCommandSystem\@\@SAXAEAVEntityContext\@\@AEAVAgentCommandComponent\@\@\@Z
     */
    MCAPI static void tickLegacy(class EntityContext&, class AgentCommandComponent&); // NOLINT
};

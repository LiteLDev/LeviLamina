/**
 * @file  AgentActionSystems.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


namespace AgentActionSystems {

#define AFTER_EXTRA

#undef AFTER_EXTRA
    /**
     * @symbol ?tickActionFailed\@AgentActionSystems\@\@YAXAEAVStrictEntityContext\@\@AEAVActorOwnerComponent\@\@AEAV?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@UActionDetails\@AgentComponents\@\@V?$FlagComponent\@UArmSwingFailFlag\@AgentComponents\@\@\@\@VCommandCooldown\@4\@V?$FlagComponent\@UExecutingFlag\@AgentComponents\@\@\@\@\@\@\@Z
     */
    MCAPI void tickActionFailed(class StrictEntityContext &, class ActorOwnerComponent &, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct AgentComponents::ActionDetails, class FlagComponent<struct AgentComponents::ArmSwingFailFlag>, class AgentComponents::CommandCooldown, class FlagComponent<struct AgentComponents::ExecutingFlag>> &);

};
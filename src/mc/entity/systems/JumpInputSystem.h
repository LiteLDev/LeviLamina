#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/entity/EntityModifierT.h"
#include "mc/world/components/FlagComponent.h"

class JumpInputSystem {

public:
    // prevent constructor by default
    JumpInputSystem& operator=(JumpInputSystem const&) = delete;
    JumpInputSystem(JumpInputSystem const&)            = delete;
    JumpInputSystem()                                  = delete;

public:
    /**
     * @symbol ?createJumpInputSystem\@JumpInputSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createJumpInputSystem(); // NOLINT
    /**
     * @symbol
     * ?doJumpInputSystem\@JumpInputSystem\@\@SAXAEBVStrictEntityContext\@\@V?$optional_ref\@$$CBV?$FlagComponent\@UAutoJumpingFlag\@\@\@\@\@\@AEBUAbilitiesComponent\@\@AEBUMoveInputComponent\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@V?$FlagComponent\@UMobIsJumpingFlag\@\@\@\@\@\@\@Z
     */
    MCAPI static void
    doJumpInputSystem(class StrictEntityContext const&, class optional_ref<class FlagComponent<struct AutoJumpingFlag> const>, struct AbilitiesComponent const&, struct MoveInputComponent const&, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, class FlagComponent<struct MobIsJumpingFlag>>); // NOLINT
};

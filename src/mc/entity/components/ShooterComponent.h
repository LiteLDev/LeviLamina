#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ShooterComponent {

public:
    // prevent constructor by default
    ShooterComponent& operator=(ShooterComponent const&) = delete;
    ShooterComponent(ShooterComponent const&)            = delete;
    ShooterComponent()                                   = delete;

public:
    /**
     * @symbol ??0ShooterComponent\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI ShooterComponent(class ShooterComponent&&); // NOLINT
    /**
     * @symbol ?hasMagicAttacks\@ShooterComponent\@\@QEBA_NXZ
     */
    MCAPI bool hasMagicAttacks() const; // NOLINT
    /**
     * @symbol ?onShoot\@ShooterComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void onShoot(class Actor&); // NOLINT
    /**
     * @symbol ??4ShooterComponent\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class ShooterComponent& operator=(class ShooterComponent&&); // NOLINT
    /**
     * @symbol ??1ShooterComponent\@\@QEAA\@XZ
     */
    MCAPI ~ShooterComponent(); // NOLINT

    // private:
    /**
     * @symbol ?_shootProjectile\@ShooterComponent\@\@AEAAXAEAVActor\@\@AEBUActorDefinitionIdentifier\@\@H\@Z
     */
    MCAPI void _shootProjectile(class Actor&, struct ActorDefinitionIdentifier const&, int); // NOLINT

private:
};

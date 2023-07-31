#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ShooterComponent {

public:
    // prevent constructor by default
    ShooterComponent& operator=(ShooterComponent const&) = delete;
    ShooterComponent(ShooterComponent const&)            = delete;
    ShooterComponent()                                   = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0ShooterComponent\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI ShooterComponent(class ShooterComponent&&);
    /**
     * @symbol ?hasMagicAttacks\@ShooterComponent\@\@QEBA_NXZ
     */
    MCAPI bool hasMagicAttacks() const;
    /**
     * @symbol ?onShoot\@ShooterComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void onShoot(class Actor&);
    /**
     * @symbol ??4ShooterComponent\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class ShooterComponent& operator=(class ShooterComponent&&);
    /**
     * @symbol ??1ShooterComponent\@\@QEAA\@XZ
     */
    MCAPI ~ShooterComponent();
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol ?_shootProjectile\@ShooterComponent\@\@AEAAXAEAVActor\@\@AEBUActorDefinitionIdentifier\@\@H\@Z
     */
    MCAPI void _shootProjectile(class Actor&, struct ActorDefinitionIdentifier const&, int);
    // NOLINTEND
};

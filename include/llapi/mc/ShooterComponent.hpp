/**
 * @file  ShooterComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ShooterComponent.
 *
 */
class ShooterComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SHOOTERCOMPONENT
public:
    class ShooterComponent& operator=(class ShooterComponent const &) = delete;
    ShooterComponent(class ShooterComponent const &) = delete;
    ShooterComponent() = delete;
#endif

public:
    /**
     * @symbol  ??0ShooterComponent\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI ShooterComponent(class ShooterComponent &&);
    /**
     * @symbol  ?hasMagicAttacks\@ShooterComponent\@\@QEBA_NXZ
     */
    MCAPI bool hasMagicAttacks() const;
    /**
     * @symbol  ?onShoot\@ShooterComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void onShoot(class Actor &);
    /**
     * @symbol  ??4ShooterComponent\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class ShooterComponent & operator=(class ShooterComponent &&);
    /**
     * @symbol  ??1ShooterComponent\@\@QEAA\@XZ
     */
    MCAPI ~ShooterComponent();

//private:
    /**
     * @symbol  ?_shootProjectile\@ShooterComponent\@\@AEAAXAEAVActor\@\@AEBUActorDefinitionIdentifier\@\@H\@Z
     */
    MCAPI void _shootProjectile(class Actor &, struct ActorDefinitionIdentifier const &, int);

private:

};
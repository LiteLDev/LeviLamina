/**
 * @file  DespawnComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class DespawnComponent.
 *
 */
class DespawnComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DESPAWNCOMPONENT
public:
    class DespawnComponent& operator=(class DespawnComponent const &) = delete;
    DespawnComponent(class DespawnComponent const &) = delete;
    DespawnComponent() = delete;
#endif

public:
    /**
     * @symbol  ?onDespawn\@DespawnComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void onDespawn(class Actor &);
    /**
     * @symbol  ?tick\@DespawnComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void tick(class Actor &);

//private:
    /**
     * @symbol  ?_tryStandardDespawnRules\@DespawnComponent\@\@AEBA_NAEAVActor\@\@AEBVDespawnDefinition\@\@AEAVIWorldAccessor\@1\@\@Z
     */
    MCAPI bool _tryStandardDespawnRules(class Actor &, class DespawnDefinition const &, class DespawnComponent::IWorldAccessor &) const;
    /**
     * @symbol  ?getDefinition\@DespawnComponent\@\@AEBAAEBVDespawnDefinition\@\@AEAVActor\@\@\@Z
     */
    MCAPI class DespawnDefinition const & getDefinition(class Actor &) const;

private:

};
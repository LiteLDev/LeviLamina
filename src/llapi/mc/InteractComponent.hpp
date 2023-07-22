/**
 * @file  InteractComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class InteractComponent.
 *
 */
class InteractComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INTERACTCOMPONENT
public:
    class InteractComponent& operator=(class InteractComponent const &) = delete;
    InteractComponent(class InteractComponent const &) = delete;
    InteractComponent() = delete;
#endif

public:
    /**
     * @symbol  ?getCooldownCounter\@InteractComponent\@\@QEBAFXZ
     */
    MCAPI short getCooldownCounter() const;
    /**
     * @symbol  ?getInteraction\@InteractComponent\@\@QEAA_NAEAVActor\@\@AEAVPlayer\@\@AEAVActorInteraction\@\@\@Z
     */
    MCAPI bool getInteraction(class Actor &, class Player &, class ActorInteraction &);
    /**
     * @symbol  ?setCooldownCounter\@InteractComponent\@\@QEAAXF\@Z
     */
    MCAPI void setCooldownCounter(short);

//private:
    /**
     * @symbol  ?_runInteraction\@InteractComponent\@\@AEAA_NAEAVActor\@\@AEBUInteraction\@\@AEAVPlayer\@\@AEAVActorInteraction\@\@\@Z
     */
    MCAPI bool _runInteraction(class Actor &, struct Interaction const &, class Player &, class ActorInteraction &);
    /**
     * @symbol  ?_tryEquipitem\@InteractComponent\@\@CAXAEAVActor\@\@AEAVPlayer\@\@AEAVItemStack\@\@AEBV4\@HAEA_N4\@Z
     */
    MCAPI static void _tryEquipitem(class Actor &, class Player &, class ItemStack &, class ItemStack const &, int, bool &, bool &);

private:

};
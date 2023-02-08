/**
 * @file  NameableComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class NameableComponent.
 *
 */
class NameableComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NAMEABLECOMPONENT
public:
    class NameableComponent& operator=(class NameableComponent const &) = delete;
    NameableComponent(class NameableComponent const &) = delete;
#endif

public:
    /**
     * @hash   -850126908
     * @symbol  ??0NameableComponent\@\@QEAA\@XZ
     */
    MCAPI NameableComponent();
    /**
     * @hash   -675735837
     * @symbol  ?getInteraction\@NameableComponent\@\@QEAA_NAEAVActor\@\@AEAVPlayer\@\@AEAVActorInteraction\@\@\@Z
     */
    MCAPI bool getInteraction(class Actor &, class Player &, class ActorInteraction &);
    /**
     * @hash   -187998583
     * @symbol  ?nameEntity\@NameableComponent\@\@QEAAXAEAVActor\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void nameEntity(class Actor &, std::string const &);

};
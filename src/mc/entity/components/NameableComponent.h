#pragma once

#include "mc/_HeaderOutputPredefine.h"

class NameableComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NAMEABLECOMPONENT
public:
    NameableComponent& operator=(NameableComponent const&) = delete;
    NameableComponent(NameableComponent const&)            = delete;
#endif

public:
    /**
     * @symbol ??0NameableComponent\@\@QEAA\@XZ
     */
    MCAPI NameableComponent();
    /**
     * @symbol ?getInteraction\@NameableComponent\@\@QEAA_NAEAVActor\@\@AEAVPlayer\@\@AEAVActorInteraction\@\@\@Z
     */
    MCAPI bool getInteraction(class Actor&, class Player&, class ActorInteraction&);
    /**
     * @symbol
     * ?nameEntity\@NameableComponent\@\@QEAAXAEAVActor\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void nameEntity(class Actor&, std::string const&);
};

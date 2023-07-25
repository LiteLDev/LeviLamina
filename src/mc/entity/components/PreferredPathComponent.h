#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PreferredPathComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PREFERREDPATHCOMPONENT
public:
    PreferredPathComponent& operator=(PreferredPathComponent const&) = delete;
    PreferredPathComponent(PreferredPathComponent const&)            = delete;
    PreferredPathComponent()                                         = delete;
#endif

public:
    /**
     * @symbol ?initFromDefinition\@PreferredPathComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void initFromDefinition(class Actor&);
    /**
     * @symbol ?getPreferredPath\@PreferredPathComponent\@\@SAAEBUPreferredPathDescription\@\@AEBVActor\@\@\@Z
     */
    MCAPI static struct PreferredPathDescription const& getPreferredPath(class Actor const&);
};

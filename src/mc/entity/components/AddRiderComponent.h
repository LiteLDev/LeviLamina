#pragma once

#include "mc/_HeaderOutputPredefine.h"

class AddRiderComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ADDRIDERCOMPONENT
public:
    AddRiderComponent& operator=(AddRiderComponent const&) = delete;
    AddRiderComponent(AddRiderComponent const&)            = delete;
    AddRiderComponent()                                    = delete;
#endif

public:
    /**
     * @symbol ?reloadComponent\@AddRiderComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void reloadComponent(class Actor&);
    /**
     * @symbol ??1AddRiderComponent\@\@QEAA\@XZ
     */
    MCAPI ~AddRiderComponent();
};

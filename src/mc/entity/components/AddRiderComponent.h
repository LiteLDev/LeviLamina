#pragma once

#include "mc/_HeaderOutputPredefine.h"

class AddRiderComponent {

public:
    // prevent constructor by default
    AddRiderComponent& operator=(AddRiderComponent const&) = delete;
    AddRiderComponent(AddRiderComponent const&)            = delete;
    AddRiderComponent()                                    = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?reloadComponent\@AddRiderComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void reloadComponent(class Actor&);
    /**
     * @symbol ??1AddRiderComponent\@\@QEAA\@XZ
     */
    MCAPI ~AddRiderComponent();
    // NOLINTEND
};

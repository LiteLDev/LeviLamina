#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PreferredPathComponent {

public:
    // prevent constructor by default
    PreferredPathComponent& operator=(PreferredPathComponent const&) = delete;
    PreferredPathComponent(PreferredPathComponent const&)            = delete;
    PreferredPathComponent()                                         = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?getPreferredPath\@PreferredPathComponent\@\@SAAEBUPreferredPathDescription\@\@AEBVActor\@\@\@Z
     */
    MCAPI static struct PreferredPathDescription const& getPreferredPath(class Actor const&);
    /**
     * @symbol ?initFromDefinition\@PreferredPathComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void initFromDefinition(class Actor&);
    // NOLINTEND
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DashComponent {

public:
    // prevent constructor by default
    DashComponent& operator=(DashComponent const&) = delete;
    DashComponent(DashComponent const&)            = delete;
    DashComponent()                                = delete;

public:
    /**
     * @symbol ?getCooldownTime\@DashComponent\@\@QEBA?BIXZ
     */
    MCAPI unsigned int const getCooldownTime() const; // NOLINT
    /**
     * @symbol ?getHorizontalMomentum\@DashComponent\@\@QEBA?BMXZ
     */
    MCAPI float const getHorizontalMomentum() const; // NOLINT
    /**
     * @symbol ?getVerticalMomentum\@DashComponent\@\@QEBA?BMXZ
     */
    MCAPI float const getVerticalMomentum() const; // NOLINT
};

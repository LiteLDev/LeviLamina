#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DashComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DASHCOMPONENT
public:
    DashComponent& operator=(DashComponent const&) = delete;
    DashComponent(DashComponent const&)            = delete;
    DashComponent()                                = delete;
#endif

public:
    /**
     * @symbol ?getCooldownTime\@DashComponent\@\@QEBA?BIXZ
     */
    MCAPI unsigned int const getCooldownTime() const;
    /**
     * @symbol ?getHorizontalMomentum\@DashComponent\@\@QEBA?BMXZ
     */
    MCAPI float const getHorizontalMomentum() const;
    /**
     * @symbol ?getVerticalMomentum\@DashComponent\@\@QEBA?BMXZ
     */
    MCAPI float const getVerticalMomentum() const;
};

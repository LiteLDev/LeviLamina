/**
 * @file  DashComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class DashComponent.
 *
 */
class DashComponent {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DASHCOMPONENT
public:
    class DashComponent& operator=(class DashComponent const &) = delete;
    DashComponent(class DashComponent const &) = delete;
    DashComponent() = delete;
#endif

public:
    /**
     * @hash   1916837582
     * @symbol  ?getCooldownTime\@DashComponent\@\@QEBA?BIXZ
     */
    MCAPI unsigned int const getCooldownTime() const;
    /**
     * @hash   386835370
     * @symbol  ?getHorizontalMomentum\@DashComponent\@\@QEBA?BMXZ
     */
    MCAPI float const getHorizontalMomentum() const;
    /**
     * @hash   1674616846
     * @symbol  ?getVerticalMomentum\@DashComponent\@\@QEBA?BMXZ
     */
    MCAPI float const getVerticalMomentum() const;

};
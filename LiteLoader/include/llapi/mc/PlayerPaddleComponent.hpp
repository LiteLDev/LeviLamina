/**
 * @file  PlayerPaddleComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


struct PlayerPaddleComponent {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYERPADDLECOMPONENT
public:
    struct PlayerPaddleComponent& operator=(struct PlayerPaddleComponent const &) = delete;
    PlayerPaddleComponent(struct PlayerPaddleComponent const &) = delete;
    PlayerPaddleComponent() = delete;
#endif

public:
    /**
     * @symbol ?toString\@PlayerPaddleComponent\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string toString() const;

};
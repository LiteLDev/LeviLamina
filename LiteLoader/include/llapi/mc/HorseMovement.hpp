/**
 * @file  HorseMovement.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


namespace HorseMovement {

#define AFTER_EXTRA

#undef AFTER_EXTRA
    /**
     * @symbol ?allowStandSliding\@HorseMovement\@\@YA_NAEBVEntityContext\@\@\@Z
     */
    MCAPI bool allowStandSliding(class EntityContext const &);
    /**
     * @symbol ?initializeHorse\@HorseMovement\@\@YAXAEAVEntityContext\@\@\@Z
     */
    MCAPI void initializeHorse(class EntityContext &);
    /**
     * @symbol ?resetStandCounter\@HorseMovement\@\@YAXAEAVEntityContext\@\@\@Z
     */
    MCAPI void resetStandCounter(class EntityContext &);
    /**
     * @symbol ?setAllowStandSliding\@HorseMovement\@\@YAXAEAVEntityContext\@\@_N\@Z
     */
    MCAPI void setAllowStandSliding(class EntityContext &, bool);
    /**
     * @symbol ?startStandCounter\@HorseMovement\@\@YAXAEAVEntityContext\@\@\@Z
     */
    MCAPI void startStandCounter(class EntityContext &);
    /**
     * @symbol ?tickStandCounter\@HorseMovement\@\@YA_NAEAVEntityContext\@\@H\@Z
     */
    MCAPI bool tickStandCounter(class EntityContext &, int);

};
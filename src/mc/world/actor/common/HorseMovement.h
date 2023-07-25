#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace HorseMovement {
/**
 * @symbol ?allowStandSliding\@HorseMovement\@\@YA_NAEBVEntityContext\@\@\@Z
 */
MCAPI bool allowStandSliding(class EntityContext const&);
/**
 * @symbol ?initializeHorse\@HorseMovement\@\@YAXAEAVEntityContext\@\@\@Z
 */
MCAPI void initializeHorse(class EntityContext&);
/**
 * @symbol ?resetStandCounter\@HorseMovement\@\@YAXAEAVEntityContext\@\@\@Z
 */
MCAPI void resetStandCounter(class EntityContext&);
/**
 * @symbol ?setAllowStandSliding\@HorseMovement\@\@YAXAEAVEntityContext\@\@_N\@Z
 */
MCAPI void setAllowStandSliding(class EntityContext&, bool);
/**
 * @symbol ?startStandCounter\@HorseMovement\@\@YAXAEAVEntityContext\@\@\@Z
 */
MCAPI void startStandCounter(class EntityContext&);
/**
 * @symbol ?tickStandCounter\@HorseMovement\@\@YA_NAEAVEntityContext\@\@H\@Z
 */
MCAPI bool tickStandCounter(class EntityContext&, int);

}; // namespace HorseMovement

#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace HorseMovement {
/**
 * @symbol ?allowStandSliding\@HorseMovement\@\@YA_NAEBVEntityContext\@\@\@Z
 */
MCAPI bool allowStandSliding(class EntityContext const&); // NOLINT
/**
 * @symbol ?initializeHorse\@HorseMovement\@\@YAXAEAVEntityContext\@\@\@Z
 */
MCAPI void initializeHorse(class EntityContext&); // NOLINT
/**
 * @symbol ?resetStandCounter\@HorseMovement\@\@YAXAEAVEntityContext\@\@\@Z
 */
MCAPI void resetStandCounter(class EntityContext&); // NOLINT
/**
 * @symbol ?setAllowStandSliding\@HorseMovement\@\@YAXAEAVEntityContext\@\@_N\@Z
 */
MCAPI void setAllowStandSliding(class EntityContext&, bool); // NOLINT
/**
 * @symbol ?startStandCounter\@HorseMovement\@\@YAXAEAVEntityContext\@\@\@Z
 */
MCAPI void startStandCounter(class EntityContext&); // NOLINT
/**
 * @symbol ?tickStandCounter\@HorseMovement\@\@YA_NAEAVEntityContext\@\@H\@Z
 */
MCAPI bool tickStandCounter(class EntityContext&, int); // NOLINT

}; // namespace HorseMovement

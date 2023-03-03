/**
 * @file  PlayerMovementSettings.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure PlayerMovementSettings.
 *
 */
struct PlayerMovementSettings {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYERMOVEMENTSETTINGS
public:
    struct PlayerMovementSettings& operator=(struct PlayerMovementSettings const &) = delete;
    PlayerMovementSettings(struct PlayerMovementSettings const &) = delete;
    PlayerMovementSettings() = delete;
#endif

public:
    /**
     * @symbol  ?INVALID\@PlayerMovementSettings\@\@2U1\@B
     */
    MCAPI static struct PlayerMovementSettings const INVALID;
    /**
     * @symbol  ?getDefault\@PlayerMovementSettings\@\@SA?AU1\@XZ
     */
    MCAPI static struct PlayerMovementSettings getDefault();

};
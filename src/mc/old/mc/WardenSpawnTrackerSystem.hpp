/**
 * @file  WardenSpawnTrackerSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class WardenSpawnTrackerSystem.
 *
 */
class WardenSpawnTrackerSystem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WARDENSPAWNTRACKERSYSTEM
public:
    class WardenSpawnTrackerSystem& operator=(class WardenSpawnTrackerSystem const &) = delete;
    WardenSpawnTrackerSystem(class WardenSpawnTrackerSystem const &) = delete;
    WardenSpawnTrackerSystem() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_WARDENSPAWNTRACKERSYSTEM
    /**
     * @symbol  ?onLevelAddedPlayer\@WardenSpawnTrackerSystem\@\@UEAA?AW4EventResult\@\@AEAVLevel\@\@AEAVPlayer\@\@\@Z
     */
    MCVAPI enum class EventResult onLevelAddedPlayer(class Level &, class Player &);
    /**
     * @symbol  ?tick\@WardenSpawnTrackerSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    MCVAPI void tick(class EntityRegistry &);
#endif

};
/**
 * @file  SyncedPlayerMovementSettings.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class SyncedPlayerMovementSettings.
 *
 */
class SyncedPlayerMovementSettings {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SYNCEDPLAYERMOVEMENTSETTINGS
public:
    class SyncedPlayerMovementSettings& operator=(class SyncedPlayerMovementSettings const &) = delete;
    SyncedPlayerMovementSettings(class SyncedPlayerMovementSettings const &) = delete;
#endif

public:
    /**
     * @symbol  ??0SyncedPlayerMovementSettings\@\@QEAA\@XZ
     */
    MCAPI SyncedPlayerMovementSettings();
    /**
     * @symbol  ??0SyncedPlayerMovementSettings\@\@QEAA\@AEBUPlayerMovementSettings\@\@\@Z
     */
    MCAPI SyncedPlayerMovementSettings(struct PlayerMovementSettings const &);

};
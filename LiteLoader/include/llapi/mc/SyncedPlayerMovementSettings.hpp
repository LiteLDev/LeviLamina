/**
 * @file  SyncedPlayerMovementSettings.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


struct SyncedPlayerMovementSettings {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SYNCEDPLAYERMOVEMENTSETTINGS
public:
    struct SyncedPlayerMovementSettings& operator=(struct SyncedPlayerMovementSettings const &) = delete;
    SyncedPlayerMovementSettings(struct SyncedPlayerMovementSettings const &) = delete;
#endif

public:
    /**
     * @symbol ??0SyncedPlayerMovementSettings\@\@QEAA\@AEBUPlayerMovementSettings\@\@\@Z
     */
    MCAPI SyncedPlayerMovementSettings(struct PlayerMovementSettings const &);
    /**
     * @symbol ??0SyncedPlayerMovementSettings\@\@QEAA\@XZ
     */
    MCAPI SyncedPlayerMovementSettings();

};
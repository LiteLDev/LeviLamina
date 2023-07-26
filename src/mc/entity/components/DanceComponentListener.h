#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DanceComponentListener {

public:
    // prevent constructor by default
    DanceComponentListener& operator=(DanceComponentListener const&) = delete;
    DanceComponentListener(DanceComponentListener const&)            = delete;
    DanceComponentListener()                                         = delete;

public:
    /**
     * @symbol ?setLevel\@DanceComponentListener\@\@QEAAXAEAVLevel\@\@\@Z
     */
    MCAPI void setLevel(class Level&); // NOLINT
    /**
     * @symbol ??1DanceComponentListener\@\@QEAA\@XZ
     */
    MCAPI ~DanceComponentListener(); // NOLINT

    // private:
    /**
     * @symbol
     * ?_onLevelSoundEvent\@DanceComponentListener\@\@AEAAXW4LevelSoundEvent\@\@AEBVVec3\@\@HAEBUActorDefinitionIdentifier\@\@_N3\@Z
     */
    MCAPI void _onLevelSoundEvent(
        enum class LevelSoundEvent,
        class Vec3 const&,
        int,
        struct ActorDefinitionIdentifier const&,
        bool,
        bool
    ); // NOLINT

private:
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DanceComponentListener {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DANCECOMPONENTLISTENER
public:
    DanceComponentListener& operator=(DanceComponentListener const&) = delete;
    DanceComponentListener(DanceComponentListener const&)            = delete;
    DanceComponentListener()                                         = delete;
#endif

public:
    /**
     * @symbol ?setLevel\@DanceComponentListener\@\@QEAAXAEAVLevel\@\@\@Z
     */
    MCAPI void setLevel(class Level&);
    /**
     * @symbol ??1DanceComponentListener\@\@QEAA\@XZ
     */
    MCAPI ~DanceComponentListener();

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
    );

private:
};

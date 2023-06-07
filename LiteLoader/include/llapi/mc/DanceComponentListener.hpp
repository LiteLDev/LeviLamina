/**
 * @file  DanceComponentListener.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class DanceComponentListener.
 *
 */
class DanceComponentListener {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DANCECOMPONENTLISTENER
public:
    class DanceComponentListener& operator=(class DanceComponentListener const &) = delete;
    DanceComponentListener(class DanceComponentListener const &) = delete;
    DanceComponentListener() = delete;
#endif

public:
    /**
     * @symbol ?setLevel\@DanceComponentListener\@\@QEAAXAEAVLevel\@\@\@Z
     */
    MCAPI void setLevel(class Level &);
    /**
     * @symbol ??1DanceComponentListener\@\@QEAA\@XZ
     */
    MCAPI ~DanceComponentListener();

//private:
    /**
     * @symbol ?_onLevelSoundEvent\@DanceComponentListener\@\@AEAAXW4LevelSoundEvent\@\@AEBVVec3\@\@HAEBUActorDefinitionIdentifier\@\@_N3\@Z
     */
    MCAPI void _onLevelSoundEvent(enum class LevelSoundEvent, class Vec3 const &, int, struct ActorDefinitionIdentifier const &, bool, bool);

private:

};

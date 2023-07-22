/**
 * @file  AdventureSettings.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC structure AdventureSettings.
 *
 */
struct AdventureSettings {

#define AFTER_EXTRA
public:
    bool mNoPvM;
    bool mNoMvP;
    bool mImmutableWorld;
    bool mShowNameTags;
    bool mAutoJump;
#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ADVENTURESETTINGS
public:
    struct AdventureSettings& operator=(struct AdventureSettings const &) = delete;
    AdventureSettings(struct AdventureSettings const &) = delete;
#endif

public:
    /**
     * @symbol  ??0AdventureSettings\@\@QEAA\@XZ
     */
    MCAPI AdventureSettings();

};
/**
 * @file  ReplayStateConfig.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC structure ReplayStateConfig.
 *
 */
struct ReplayStateConfig {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_REPLAYSTATECONFIG
public:
    struct ReplayStateConfig& operator=(struct ReplayStateConfig const &) = delete;
    ReplayStateConfig(struct ReplayStateConfig const &) = delete;
    ReplayStateConfig() = delete;
#endif

public:
    /**
     * @symbol  ??0ReplayStateConfig\@\@QEAA\@W4ReplayStateMode\@\@\@Z
     */
    MCAPI ReplayStateConfig(enum class ReplayStateMode);
    /**
     * @symbol  ?usesUnsupportedThresholds\@ReplayStateConfig\@\@QEBA_NXZ
     */
    MCAPI bool usesUnsupportedThresholds() const;

};
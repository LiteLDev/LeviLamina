/**
 * @file  ReplayStateConfig.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @hash   -1885596423
     * @symbol  ??0ReplayStateConfig\@\@QEAA\@W4ReplayStateMode\@\@\@Z
     */
    MCAPI ReplayStateConfig(enum class ReplayStateMode);
    /**
     * @hash   923982982
     * @symbol  ?usesUnsupportedThresholds\@ReplayStateConfig\@\@QEBA_NXZ
     */
    MCAPI bool usesUnsupportedThresholds() const;

};
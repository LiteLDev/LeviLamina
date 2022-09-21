/**
 * @file  MC/ReplayStateConfig.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   -975060455
     * @symbol ??0ReplayStateConfig@@QEAA@W4ReplayStateMode@@@Z
     */
    MCAPI ReplayStateConfig(enum ReplayStateMode);
    /**
     * @hash   1834518950
     * @symbol ?usesUnsupportedThresholds@ReplayStateConfig@@QEBA_NXZ
     */
    MCAPI bool usesUnsupportedThresholds() const;

};
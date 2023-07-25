#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ReplayStateConfig {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_REPLAYSTATECONFIG
public:
    ReplayStateConfig& operator=(ReplayStateConfig const&) = delete;
    ReplayStateConfig(ReplayStateConfig const&)            = delete;
    ReplayStateConfig()                                    = delete;
#endif

public:
    /**
     * @symbol ??0ReplayStateConfig\@\@QEAA\@W4ReplayStateMode\@\@\@Z
     */
    MCAPI ReplayStateConfig(enum class ReplayStateMode);
};

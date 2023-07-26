#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ReplayStateConfig {

public:
    // prevent constructor by default
    ReplayStateConfig& operator=(ReplayStateConfig const&) = delete;
    ReplayStateConfig(ReplayStateConfig const&)            = delete;
    ReplayStateConfig()                                    = delete;

public:
    /**
     * @symbol ??0ReplayStateConfig\@\@QEAA\@W4ReplayStateMode\@\@\@Z
     */
    MCAPI ReplayStateConfig(enum class ReplayStateMode); // NOLINT
};

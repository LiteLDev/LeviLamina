#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace AgentComponents::Actions {

struct PlaceBlock {

public:
    // prevent constructor by default
    PlaceBlock& operator=(PlaceBlock const&) = delete;
    PlaceBlock(PlaceBlock const&)            = delete;
    PlaceBlock()                             = delete;

public:
    /**
     * @symbol ??1PlaceBlock\@Actions\@AgentComponents\@\@QEAA\@XZ
     */
    MCAPI ~PlaceBlock(); // NOLINT
};

}; // namespace AgentComponents::Actions

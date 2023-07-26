#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ScorePacketInfo {

public:
    // prevent constructor by default
    ScorePacketInfo& operator=(ScorePacketInfo const&) = delete;
    ScorePacketInfo(ScorePacketInfo const&)            = delete;
    ScorePacketInfo()                                  = delete;

public:
    /**
     * @symbol ??0ScorePacketInfo\@\@QEAA\@$$QEAU0\@\@Z
     */
    MCAPI ScorePacketInfo(struct ScorePacketInfo&&); // NOLINT
    /**
     * @symbol ??1ScorePacketInfo\@\@QEAA\@XZ
     */
    MCAPI ~ScorePacketInfo(); // NOLINT
};

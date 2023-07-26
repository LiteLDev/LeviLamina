#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct GameTestResult {

public:
    // prevent constructor by default
    GameTestResult() = delete;

public:
    /**
     * @symbol ??0GameTestResult\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI GameTestResult(struct GameTestResult const&); // NOLINT
    /**
     * @symbol ??4GameTestResult\@\@QEAAAEAU0\@AEBU0\@\@Z
     */
    MCAPI struct GameTestResult& operator=(struct GameTestResult const&); // NOLINT
    /**
     * @symbol ??4GameTestResult\@\@QEAAAEAU0\@$$QEAU0\@\@Z
     */
    MCAPI struct GameTestResult& operator=(struct GameTestResult&&); // NOLINT
    /**
     * @symbol ??8GameTestResult\@\@QEBA_NAEBU0\@\@Z
     */
    MCAPI bool operator==(struct GameTestResult const&) const; // NOLINT
    /**
     * @symbol ??1GameTestResult\@\@QEAA\@XZ
     */
    MCAPI ~GameTestResult(); // NOLINT
    /**
     * @symbol ?bindType\@GameTestResult\@\@SAXXZ
     */
    MCAPI static void bindType(); // NOLINT
};

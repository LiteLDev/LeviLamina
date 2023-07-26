#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PingedCompatibleServer {

public:
    // prevent constructor by default
    PingedCompatibleServer& operator=(PingedCompatibleServer const&) = delete;
    PingedCompatibleServer()                                         = delete;

public:
    /**
     * @symbol ??0PingedCompatibleServer\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI PingedCompatibleServer(struct PingedCompatibleServer const&); // NOLINT
    /**
     * @symbol ??0PingedCompatibleServer\@\@QEAA\@$$QEAU0\@\@Z
     */
    MCAPI PingedCompatibleServer(struct PingedCompatibleServer&&); // NOLINT
    /**
     * @symbol ??4PingedCompatibleServer\@\@QEAAAEAU0\@$$QEAU0\@\@Z
     */
    MCAPI struct PingedCompatibleServer& operator=(struct PingedCompatibleServer&&); // NOLINT
    /**
     * @symbol ??1PingedCompatibleServer\@\@QEAA\@XZ
     */
    MCAPI ~PingedCompatibleServer(); // NOLINT
};

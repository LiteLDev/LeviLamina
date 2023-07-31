#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct Dependencies {

public:
    // prevent constructor by default
    Dependencies(Dependencies const&) = delete;
    Dependencies()                    = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??4Dependencies\@\@QEAAAEAU0\@AEBU0\@\@Z
     */
    MCAPI struct Dependencies& operator=(struct Dependencies const&);
    /**
     * @symbol ??4Dependencies\@\@QEAAAEAU0\@$$QEAU0\@\@Z
     */
    MCAPI struct Dependencies& operator=(struct Dependencies&&);
    /**
     * @symbol ??1Dependencies\@\@QEAA\@XZ
     */
    MCAPI ~Dependencies();
    /**
     * @symbol ?bindType\@Dependencies\@\@SAXXZ
     */
    MCAPI static void bindType();
    // NOLINTEND
};

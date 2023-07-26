#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct Brightness {

public:
    // prevent constructor by default
    Brightness() = delete;

public:
    /**
     * @symbol ??0Brightness\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI Brightness(struct Brightness const&); // NOLINT
    /**
     * @symbol ??0Brightness\@\@QEAA\@AEBE\@Z
     */
    MCAPI Brightness(unsigned char const&); // NOLINT
    /**
     * @symbol ??4Brightness\@\@QEAAAEAU0\@AEBU0\@\@Z
     */
    MCAPI struct Brightness& operator=(struct Brightness const&); // NOLINT
    /**
     * @symbol ??4Brightness\@\@QEAAAEAU0\@$$QEAU0\@\@Z
     */
    MCAPI struct Brightness& operator=(struct Brightness&&); // NOLINT
    /**
     * @symbol ?INVALID\@Brightness\@\@2U1\@B
     */
    MCAPI static struct Brightness const INVALID; // NOLINT
    /**
     * @symbol ?MAX\@Brightness\@\@2U1\@B
     */
    MCAPI static struct Brightness const MAX; // NOLINT
    /**
     * @symbol ?MIN\@Brightness\@\@2U1\@B
     */
    MCAPI static struct Brightness const MIN; // NOLINT
};

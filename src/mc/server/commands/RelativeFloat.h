#pragma once

#include "mc/_HeaderOutputPredefine.h"

class RelativeFloat {

public:
    // prevent constructor by default
    RelativeFloat& operator=(RelativeFloat const&) = delete;
    RelativeFloat(RelativeFloat const&)            = delete;

public:
    /**
     * @symbol ??0RelativeFloat\@\@QEAA\@M_N\@Z
     */
    MCAPI RelativeFloat(float, bool); // NOLINT
    /**
     * @symbol ??0RelativeFloat\@\@QEAA\@XZ
     */
    MCAPI RelativeFloat(); // NOLINT
    /**
     * @symbol ?getValue\@RelativeFloat\@\@QEBAMM\@Z
     */
    MCAPI float getValue(float) const; // NOLINT
    /**
     * @symbol ?isRelative\@RelativeFloat\@\@QEBA_NXZ
     */
    MCAPI bool isRelative() const; // NOLINT
};

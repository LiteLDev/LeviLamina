#pragma once

#include "mc/_HeaderOutputPredefine.h"

class RelativeFloat {

public:
    // prevent constructor by default
    RelativeFloat& operator=(RelativeFloat const&) = delete;
    RelativeFloat(RelativeFloat const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0RelativeFloat\@\@QEAA\@M_N\@Z
     */
    MCAPI RelativeFloat(float, bool);
    /**
     * @symbol ??0RelativeFloat\@\@QEAA\@XZ
     */
    MCAPI RelativeFloat();
    /**
     * @symbol ?getValue\@RelativeFloat\@\@QEBAMM\@Z
     */
    MCAPI float getValue(float) const;
    /**
     * @symbol ?isRelative\@RelativeFloat\@\@QEBA_NXZ
     */
    MCAPI bool isRelative() const;
    // NOLINTEND
};

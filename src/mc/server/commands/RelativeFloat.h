#pragma once

#include "mc/_HeaderOutputPredefine.h"

class RelativeFloat {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RELATIVEFLOAT
public:
    RelativeFloat& operator=(RelativeFloat const&) = delete;
    RelativeFloat(RelativeFloat const&)            = delete;
#endif

public:
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
};

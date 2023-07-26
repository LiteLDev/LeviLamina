#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/glm/mat.h"

class KeyFrameLerpMode {

public:
    // prevent constructor by default
    KeyFrameLerpMode(KeyFrameLerpMode const&) = delete;
    KeyFrameLerpMode()                        = delete;

public:
    /**
     * @symbol ?getPrecomputedCubicCoeffs\@KeyFrameLerpMode\@\@QEBAAEBU?$mat\@$03$03M$0A\@\@glm\@\@XZ
     */
    MCAPI struct glm::mat<4, 4, float, 0> const& getPrecomputedCubicCoeffs() const; // NOLINT
    /**
     * @symbol ??4KeyFrameLerpMode\@\@QEAAAEAV0\@AEBV0\@\@Z
     */
    MCAPI class KeyFrameLerpMode& operator=(class KeyFrameLerpMode const&); // NOLINT
};

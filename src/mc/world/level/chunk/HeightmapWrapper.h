#pragma once

#include "mc/_HeaderOutputPredefine.h"

class HeightmapWrapper {

public:
    // prevent constructor by default
    HeightmapWrapper& operator=(HeightmapWrapper const&) = delete;
    HeightmapWrapper(HeightmapWrapper const&)            = delete;
    HeightmapWrapper()                                   = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?empty\@HeightmapWrapper\@\@QEBA_NXZ
     */
    MCAPI bool empty() const;
    /**
     * @symbol ?getHeightAt\@HeightmapWrapper\@\@QEBAFAEBVPos\@\@\@Z
     */
    MCAPI short getHeightAt(class Pos const&) const;
    // NOLINTEND
};

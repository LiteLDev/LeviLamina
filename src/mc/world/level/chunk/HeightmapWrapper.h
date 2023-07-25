#pragma once

#include "mc/_HeaderOutputPredefine.h"

class HeightmapWrapper {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HEIGHTMAPWRAPPER
public:
    HeightmapWrapper& operator=(HeightmapWrapper const&) = delete;
    HeightmapWrapper(HeightmapWrapper const&)            = delete;
    HeightmapWrapper()                                   = delete;
#endif

public:
    /**
     * @symbol ?empty\@HeightmapWrapper\@\@QEBA_NXZ
     */
    MCAPI bool empty() const;
    /**
     * @symbol ?getHeightAt\@HeightmapWrapper\@\@QEBAFAEBVPos\@\@\@Z
     */
    MCAPI short getHeightAt(class Pos const&) const;
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BiomeArea {

public:
    // prevent constructor by default
    BiomeArea& operator=(BiomeArea const&) = delete;
    BiomeArea(BiomeArea const&)            = delete;
    BiomeArea()                            = delete;

public:
    /**
     * @symbol ??0BiomeArea\@\@QEAA\@AEBVBoundingBox\@\@I\@Z
     */
    MCAPI BiomeArea(class BoundingBox const&, unsigned int); // NOLINT
    /**
     * @symbol ??1BiomeArea\@\@QEAA\@XZ
     */
    MCAPI ~BiomeArea(); // NOLINT
};

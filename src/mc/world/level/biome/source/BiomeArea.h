#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BiomeArea {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BIOMEAREA
public:
    BiomeArea& operator=(BiomeArea const&) = delete;
    BiomeArea(BiomeArea const&)            = delete;
    BiomeArea()                            = delete;
#endif

public:
    /**
     * @symbol ??0BiomeArea\@\@QEAA\@AEBVBoundingBox\@\@I\@Z
     */
    MCAPI BiomeArea(class BoundingBox const&, unsigned int);
    /**
     * @symbol ??1BiomeArea\@\@QEAA\@XZ
     */
    MCAPI ~BiomeArea();
};

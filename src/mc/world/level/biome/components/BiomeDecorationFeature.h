#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BiomeDecorationFeature {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BIOMEDECORATIONFEATURE
public:
    BiomeDecorationFeature& operator=(BiomeDecorationFeature const&) = delete;
    BiomeDecorationFeature()                                         = delete;
#endif

public:
    /**
     * @symbol ??0BiomeDecorationFeature\@\@QEAA\@$$QEAU0\@\@Z
     */
    MCAPI BiomeDecorationFeature(struct BiomeDecorationFeature&&);
    /**
     * @symbol ??0BiomeDecorationFeature\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI BiomeDecorationFeature(struct BiomeDecorationFeature const&);
    /**
     * @symbol ??1BiomeDecorationFeature\@\@QEAA\@XZ
     */
    MCAPI ~BiomeDecorationFeature();
};

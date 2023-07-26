#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BiomeDecorationFeature {

public:
    // prevent constructor by default
    BiomeDecorationFeature& operator=(BiomeDecorationFeature const&) = delete;
    BiomeDecorationFeature()                                         = delete;

public:
    /**
     * @symbol ??0BiomeDecorationFeature\@\@QEAA\@$$QEAU0\@\@Z
     */
    MCAPI BiomeDecorationFeature(struct BiomeDecorationFeature&&); // NOLINT
    /**
     * @symbol ??0BiomeDecorationFeature\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI BiomeDecorationFeature(struct BiomeDecorationFeature const&); // NOLINT
    /**
     * @symbol ??1BiomeDecorationFeature\@\@QEAA\@XZ
     */
    MCAPI ~BiomeDecorationFeature(); // NOLINT
};

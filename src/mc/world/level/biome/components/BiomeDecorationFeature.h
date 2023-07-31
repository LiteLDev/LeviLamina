#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BiomeDecorationFeature {

public:
    // prevent constructor by default
    BiomeDecorationFeature& operator=(BiomeDecorationFeature const&) = delete;
    BiomeDecorationFeature()                                         = delete;

public:
    // NOLINTBEGIN
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
    // NOLINTEND
};

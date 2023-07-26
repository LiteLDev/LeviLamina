#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct TrimMaterial {

public:
    // prevent constructor by default
    TrimMaterial& operator=(TrimMaterial const&) = delete;
    TrimMaterial(TrimMaterial const&)            = delete;
    TrimMaterial()                               = delete;

public:
    /**
     * @symbol ??0TrimMaterial\@\@QEAA\@$$QEAU0\@\@Z
     */
    MCAPI TrimMaterial(struct TrimMaterial&&); // NOLINT
    /**
     * @symbol ??1TrimMaterial\@\@QEAA\@XZ
     */
    MCAPI ~TrimMaterial(); // NOLINT
};

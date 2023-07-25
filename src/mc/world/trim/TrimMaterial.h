#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct TrimMaterial {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TRIMMATERIAL
public:
    TrimMaterial& operator=(TrimMaterial const&) = delete;
    TrimMaterial(TrimMaterial const&)            = delete;
    TrimMaterial()                               = delete;
#endif

public:
    /**
     * @symbol ??0TrimMaterial\@\@QEAA\@$$QEAU0\@\@Z
     */
    MCAPI TrimMaterial(struct TrimMaterial&&);
    /**
     * @symbol ??1TrimMaterial\@\@QEAA\@XZ
     */
    MCAPI ~TrimMaterial();
};

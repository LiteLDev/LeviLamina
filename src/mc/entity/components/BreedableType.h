#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BreedableType {

public:
    // prevent constructor by default
    BreedableType& operator=(BreedableType const&) = delete;
    BreedableType()                                = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0BreedableType\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI BreedableType(struct BreedableType const&);
    /**
     * @symbol ??1BreedableType\@\@QEAA\@XZ
     */
    MCAPI ~BreedableType();
    // NOLINTEND
};

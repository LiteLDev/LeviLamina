#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BreedableType {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BREEDABLETYPE
public:
    BreedableType& operator=(BreedableType const&) = delete;
    BreedableType()                                = delete;
#endif

public:
    /**
     * @symbol ??0BreedableType\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI BreedableType(struct BreedableType const&);
    /**
     * @symbol ??1BreedableType\@\@QEAA\@XZ
     */
    MCAPI ~BreedableType();
};

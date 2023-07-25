#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PosibleTransformation {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_POSIBLETRANSFORMATION
public:
    PosibleTransformation(PosibleTransformation const&) = delete;
    PosibleTransformation()                             = delete;
#endif

public:
    /**
     * @symbol ??4PosibleTransformation\@\@QEAAAEAU0\@AEBU0\@\@Z
     */
    MCAPI struct PosibleTransformation& operator=(struct PosibleTransformation const&);
    /**
     * @symbol ??1PosibleTransformation\@\@QEAA\@XZ
     */
    MCAPI ~PosibleTransformation();
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PersonaPiece {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PERSONAPIECE
public:
    PersonaPiece& operator=(PersonaPiece const&) = delete;
    PersonaPiece(PersonaPiece const&)            = delete;
#endif

public:
    /**
     * @symbol ??0PersonaPiece\@\@QEAA\@XZ
     */
    MCAPI PersonaPiece();
    /**
     * @symbol ??1PersonaPiece\@\@QEAA\@XZ
     */
    MCAPI ~PersonaPiece();
    /**
     * @symbol ?INVALID_PIECE\@PersonaPiece\@\@2V1\@B
     */
    MCAPI static class PersonaPiece const INVALID_PIECE;
};

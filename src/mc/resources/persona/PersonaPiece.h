#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PersonaPiece {

public:
    // prevent constructor by default
    PersonaPiece& operator=(PersonaPiece const&) = delete;
    PersonaPiece(PersonaPiece const&)            = delete;

public:
    /**
     * @symbol ??0PersonaPiece\@\@QEAA\@XZ
     */
    MCAPI PersonaPiece(); // NOLINT
    /**
     * @symbol ??1PersonaPiece\@\@QEAA\@XZ
     */
    MCAPI ~PersonaPiece(); // NOLINT
    /**
     * @symbol ?INVALID_PIECE\@PersonaPiece\@\@2V1\@B
     */
    MCAPI static class PersonaPiece const INVALID_PIECE; // NOLINT
};

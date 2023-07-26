#pragma once

#include "mc/_HeaderOutputPredefine.h"

class NoodleCavifierNoises {

public:
    // prevent constructor by default
    NoodleCavifierNoises& operator=(NoodleCavifierNoises const&) = delete;
    NoodleCavifierNoises()                                       = delete;

public:
    /**
     * @symbol ??0NoodleCavifierNoises\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI NoodleCavifierNoises(class NoodleCavifierNoises const&); // NOLINT
    /**
     * @symbol ??1NoodleCavifierNoises\@\@QEAA\@XZ
     */
    MCAPI ~NoodleCavifierNoises(); // NOLINT
    /**
     * @symbol ?make\@NoodleCavifierNoises\@\@SA?AV1\@AEBVXoroshiroPositionalRandomFactory\@\@\@Z
     */
    MCAPI static class NoodleCavifierNoises make(class XoroshiroPositionalRandomFactory const&); // NOLINT
};

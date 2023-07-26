#pragma once

#include "mc/_HeaderOutputPredefine.h"

class Attribute {

public:
    // prevent constructor by default
    Attribute& operator=(Attribute const&) = delete;
    Attribute(Attribute const&)            = delete;
    Attribute()                            = delete;

public:
    /**
     * @symbol ??0Attribute\@\@QEAA\@AEBVHashedString\@\@W4RedefinitionMode\@\@_N\@Z
     */
    MCAPI Attribute(class HashedString const&, enum class RedefinitionMode, bool); // NOLINT
    /**
     * @symbol ?getName\@Attribute\@\@QEBAAEBVHashedString\@\@XZ
     */
    MCAPI class HashedString const& getName() const; // NOLINT
    /**
     * @symbol ?getRedefinitionMode\@Attribute\@\@QEBA?AW4RedefinitionMode\@\@XZ
     */
    MCAPI enum class RedefinitionMode getRedefinitionMode() const; // NOLINT
    /**
     * @symbol ?getByName\@Attribute\@\@SAAEAV1\@AEBVHashedString\@\@\@Z
     */
    MCAPI static class Attribute& getByName(class HashedString const&); // NOLINT
};

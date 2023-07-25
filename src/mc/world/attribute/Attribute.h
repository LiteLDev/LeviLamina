#pragma once

#include "mc/_HeaderOutputPredefine.h"

class Attribute {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ATTRIBUTE
public:
    Attribute& operator=(Attribute const&) = delete;
    Attribute(Attribute const&)            = delete;
    Attribute()                            = delete;
#endif

public:
    /**
     * @symbol ??0Attribute\@\@QEAA\@AEBVHashedString\@\@W4RedefinitionMode\@\@_N\@Z
     */
    MCAPI Attribute(class HashedString const&, enum class RedefinitionMode, bool);
    /**
     * @symbol ?getName\@Attribute\@\@QEBAAEBVHashedString\@\@XZ
     */
    MCAPI class HashedString const& getName() const;
    /**
     * @symbol ?getRedefinitionMode\@Attribute\@\@QEBA?AW4RedefinitionMode\@\@XZ
     */
    MCAPI enum class RedefinitionMode getRedefinitionMode() const;
    /**
     * @symbol ?getByName\@Attribute\@\@SAAEAV1\@AEBVHashedString\@\@\@Z
     */
    MCAPI static class Attribute& getByName(class HashedString const&);
};

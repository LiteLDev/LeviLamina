#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CompoundTagVariant {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMPOUNDTAGVARIANT
public:
    CompoundTagVariant& operator=(CompoundTagVariant const&) = delete;
    CompoundTagVariant(CompoundTagVariant const&)            = delete;
    CompoundTagVariant()                                     = delete;
#endif

public:
    /**
     * @symbol ?emplace\@CompoundTagVariant\@\@QEAAAEAVTag\@\@$$QEAV2\@\@Z
     */
    MCAPI class Tag& emplace(class Tag&&);
    /**
     * @symbol ?get\@CompoundTagVariant\@\@QEAAPEAVTag\@\@XZ
     */
    MCAPI class Tag* get();
    /**
     * @symbol ?get\@CompoundTagVariant\@\@QEBAPEBVTag\@\@XZ
     */
    MCAPI class Tag const* get() const;
    /**
     * @symbol ??CCompoundTagVariant\@\@QEBAPEBVTag\@\@XZ
     */
    MCAPI class Tag const* operator->() const;
    /**
     * @symbol ??1CompoundTagVariant\@\@QEAA\@XZ
     */
    MCAPI ~CompoundTagVariant();
};

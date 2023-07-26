#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CompoundTagVariant {

public:
    // prevent constructor by default
    CompoundTagVariant& operator=(CompoundTagVariant const&) = delete;
    CompoundTagVariant(CompoundTagVariant const&)            = delete;
    CompoundTagVariant()                                     = delete;

public:
    /**
     * @symbol ?emplace\@CompoundTagVariant\@\@QEAAAEAVTag\@\@$$QEAV2\@\@Z
     */
    MCAPI class Tag& emplace(class Tag&&); // NOLINT
    /**
     * @symbol ?get\@CompoundTagVariant\@\@QEAAPEAVTag\@\@XZ
     */
    MCAPI class Tag* get(); // NOLINT
    /**
     * @symbol ?get\@CompoundTagVariant\@\@QEBAPEBVTag\@\@XZ
     */
    MCAPI class Tag const* get() const; // NOLINT
    /**
     * @symbol ??CCompoundTagVariant\@\@QEBAPEBVTag\@\@XZ
     */
    MCAPI class Tag const* operator->() const; // NOLINT
    /**
     * @symbol ??1CompoundTagVariant\@\@QEAA\@XZ
     */
    MCAPI ~CompoundTagVariant(); // NOLINT
};

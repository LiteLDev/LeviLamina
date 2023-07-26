#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PropertyValues {

public:
    // prevent constructor by default
    PropertyValues& operator=(PropertyValues const&) = delete;
    PropertyValues()                                 = delete;

public:
    /**
     * @symbol ??0PropertyValues\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI PropertyValues(struct PropertyValues const&); // NOLINT
    /**
     * @symbol ??4PropertyValues\@\@QEAAAEAU0\@$$QEAU0\@\@Z
     */
    MCAPI struct PropertyValues& operator=(struct PropertyValues&&); // NOLINT
    /**
     * @symbol ?resize\@PropertyValues\@\@QEAAX_K000\@Z
     */
    MCAPI void resize(unsigned __int64, unsigned __int64, unsigned __int64, unsigned __int64); // NOLINT
    /**
     * @symbol ??1PropertyValues\@\@QEAA\@XZ
     */
    MCAPI ~PropertyValues(); // NOLINT
};

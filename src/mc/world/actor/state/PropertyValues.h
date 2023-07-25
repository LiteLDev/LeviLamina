#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PropertyValues {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PROPERTYVALUES
public:
    PropertyValues& operator=(PropertyValues const&) = delete;
    PropertyValues()                                 = delete;
#endif

public:
    /**
     * @symbol ??0PropertyValues\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI PropertyValues(struct PropertyValues const&);
    /**
     * @symbol ??4PropertyValues\@\@QEAAAEAU0\@$$QEAU0\@\@Z
     */
    MCAPI struct PropertyValues& operator=(struct PropertyValues&&);
    /**
     * @symbol ?resize\@PropertyValues\@\@QEAAX_K000\@Z
     */
    MCAPI void resize(unsigned __int64, unsigned __int64, unsigned __int64, unsigned __int64);
    /**
     * @symbol ??1PropertyValues\@\@QEAA\@XZ
     */
    MCAPI ~PropertyValues();
};

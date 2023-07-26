/**
 * @file  PropertyValues.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC structure PropertyValues.
 *
 */
struct PropertyValues {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PROPERTYVALUES
public:
    struct PropertyValues& operator=(struct PropertyValues const &) = delete;
    PropertyValues() = delete;
#endif

public:
    /**
     * @symbol  ??0PropertyValues\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI PropertyValues(struct PropertyValues const &);
    /**
     * @symbol  ??4PropertyValues\@\@QEAAAEAU0\@$$QEAU0\@\@Z
     */
    MCAPI struct PropertyValues & operator=(struct PropertyValues &&);
    /**
     * @symbol  ?resize\@PropertyValues\@\@QEAAX_K000\@Z
     */
    MCAPI void resize(unsigned __int64, unsigned __int64, unsigned __int64, unsigned __int64);
    /**
     * @symbol  ??1PropertyValues\@\@QEAA\@XZ
     */
    MCAPI ~PropertyValues();

};
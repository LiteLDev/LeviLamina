/**
 * @file  SideBySideResult.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


struct SideBySideResult {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SIDEBYSIDERESULT
public:
    struct SideBySideResult& operator=(struct SideBySideResult const &) = delete;
    SideBySideResult() = delete;
#endif

public:
    /**
     * @symbol ??0SideBySideResult@@QEAA@AEBU0@@Z
     */
    MCAPI SideBySideResult(struct SideBySideResult const &);
    /**
     * @symbol ??0SideBySideResult@@QEAA@$$QEAU0@@Z
     */
    MCAPI SideBySideResult(struct SideBySideResult &&);
    /**
     * @symbol ??1SideBySideResult@@QEAA@XZ
     */
    MCAPI ~SideBySideResult();

};
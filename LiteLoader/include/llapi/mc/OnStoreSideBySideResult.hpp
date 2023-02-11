/**
 * @file  OnStoreSideBySideResult.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC structure OnStoreSideBySideResult.
 *
 */
struct OnStoreSideBySideResult {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ONSTORESIDEBYSIDERESULT
public:
    struct OnStoreSideBySideResult& operator=(struct OnStoreSideBySideResult const &) = delete;
    OnStoreSideBySideResult(struct OnStoreSideBySideResult const &) = delete;
    OnStoreSideBySideResult() = delete;
#endif

public:
    /**
     * @hash   344348462
     * @symbol  ??0OnStoreSideBySideResult\@\@QEAA\@V?$optional\@W4SideBySideExtractionId\@\@\@std\@\@AEBVStrictEntityContext\@\@V?$not_null\@PEAVEntityRegistryBase\@\@\@gsl\@\@USideBySideResult\@\@\@Z
     */
    MCAPI OnStoreSideBySideResult(class std::optional<enum class SideBySideExtractionId>, class StrictEntityContext const &, class gsl::not_null<class EntityRegistryBase *>, struct SideBySideResult);
    /**
     * @hash   -808975522
     * @symbol  ?createContext\@OnStoreSideBySideResult\@\@QEBA?AUSideBySideResultSystemContext\@\@XZ
     */
    MCAPI struct SideBySideResultSystemContext createContext() const;
    /**
     * @hash   -60934880
     * @symbol  ??1OnStoreSideBySideResult\@\@QEAA\@XZ
     */
    MCAPI ~OnStoreSideBySideResult();

};
/**
 * @file  ExperimentStorage.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ExperimentStorage.
 *
 */
class ExperimentStorage {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EXPERIMENTSTORAGE
public:
    ExperimentStorage(class ExperimentStorage const &) = delete;
    ExperimentStorage() = delete;
#endif

public:
    /**
     * @hash   -1606926652
     * @symbol ?isAnyToggleEnabled@ExperimentStorage@@QEBA_NXZ
     */
    MCAPI bool isAnyToggleEnabled() const;
    /**
     * @hash   323403916
     * @symbol ??4ExperimentStorage@@QEAAAEAV0@AEBV0@@Z
     */
    MCAPI class ExperimentStorage & operator=(class ExperimentStorage const &);
    /**
     * @hash   2010343506
     * @symbol ?wereAnyExperimentsEverToggled@ExperimentStorage@@QEBA_NXZ
     */
    MCAPI bool wereAnyExperimentsEverToggled() const;
    /**
     * @hash   201537290
     * @symbol ??1ExperimentStorage@@QEAA@XZ
     */
    MCAPI ~ExperimentStorage();

};
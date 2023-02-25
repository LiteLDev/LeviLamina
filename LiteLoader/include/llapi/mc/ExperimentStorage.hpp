/**
 * @file  ExperimentStorage.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @symbol  ?isAnyToggleEnabled\@ExperimentStorage\@\@QEBA_NXZ
     */
    MCAPI bool isAnyToggleEnabled() const;
    /**
     * @symbol  ??4ExperimentStorage\@\@QEAAAEAV0\@AEBV0\@\@Z
     */
    MCAPI class ExperimentStorage & operator=(class ExperimentStorage const &);
    /**
     * @symbol  ?wereAnyExperimentsEverToggled\@ExperimentStorage\@\@QEBA_NXZ
     */
    MCAPI bool wereAnyExperimentsEverToggled() const;
    /**
     * @symbol  ??1ExperimentStorage\@\@QEAA\@XZ
     */
    MCAPI ~ExperimentStorage();

};
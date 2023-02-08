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
     * @hash   -944851468
     * @symbol  ?isAnyToggleEnabled\@ExperimentStorage\@\@QEBA_NXZ
     */
    MCAPI bool isAnyToggleEnabled() const;
    /**
     * @hash   -591760228
     * @symbol  ??4ExperimentStorage\@\@QEAAAEAV0\@AEBV0\@\@Z
     */
    MCAPI class ExperimentStorage & operator=(class ExperimentStorage const &);
    /**
     * @hash   -1622548606
     * @symbol  ?wereAnyExperimentsEverToggled\@ExperimentStorage\@\@QEBA_NXZ
     */
    MCAPI bool wereAnyExperimentsEverToggled() const;
    /**
     * @hash   294285322
     * @symbol  ??1ExperimentStorage\@\@QEAA\@XZ
     */
    MCAPI ~ExperimentStorage();

};
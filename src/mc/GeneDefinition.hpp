/**
 * @file  GeneDefinition.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure GeneDefinition.
 *
 */
struct GeneDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GENEDEFINITION
public:
    struct GeneDefinition& operator=(struct GeneDefinition const &) = delete;
    GeneDefinition(struct GeneDefinition const &) = delete;
    GeneDefinition() = delete;
#endif

public:
    /**
     * @symbol  ?addGeneticVariant\@GeneDefinition\@\@QEAAXAEBUGeneticVariant\@\@\@Z
     */
    MCAPI void addGeneticVariant(struct GeneticVariant const &);
    /**
     * @symbol  ??1GeneDefinition\@\@QEAA\@XZ
     */
    MCAPI ~GeneDefinition();

};
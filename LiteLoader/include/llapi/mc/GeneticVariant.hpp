/**
 * @file  GeneticVariant.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC structure GeneticVariant.
 *
 */
struct GeneticVariant {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GENETICVARIANT
public:
    struct GeneticVariant& operator=(struct GeneticVariant const &) = delete;
    GeneticVariant() = delete;
#endif

public:
    /**
     * @hash   -980561809
     * @symbol ??0GeneticVariant@@QEAA@AEBU0@@Z
     */
    MCAPI GeneticVariant(struct GeneticVariant const &);
    /**
     * @hash   2141899942
     * @symbol ??1GeneticVariant@@QEAA@XZ
     */
    MCAPI ~GeneticVariant();

};
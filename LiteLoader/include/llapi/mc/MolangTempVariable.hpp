/**
 * @file  MolangTempVariable.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC structure MolangTempVariable.
 *
 */
struct MolangTempVariable {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOLANGTEMPVARIABLE
public:
    struct MolangTempVariable& operator=(struct MolangTempVariable const &) = delete;
    MolangTempVariable(struct MolangTempVariable const &) = delete;
    MolangTempVariable() = delete;
#endif

public:
    /**
     * @hash   -346519227
     * @symbol  ??0MolangTempVariable\@\@QEAA\@AEBVHashedString\@\@\@Z
     */
    MCAPI MolangTempVariable(class HashedString const &);
    /**
     * @hash   -659493622
     * @symbol  ??1MolangTempVariable\@\@QEAA\@XZ
     */
    MCAPI ~MolangTempVariable();

};
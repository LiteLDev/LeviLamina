/**
 * @file  MC/MolangTempVariable.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   704230485
     * @symbol ??0MolangTempVariable@@QEAA@AEBVHashedString@@@Z
     */
    MCAPI MolangTempVariable(class HashedString const &);
    /**
     * @hash   -752795190
     * @symbol ??1MolangTempVariable@@QEAA@XZ
     */
    MCAPI ~MolangTempVariable();

};
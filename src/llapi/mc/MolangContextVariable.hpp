/**
 * @file  MolangContextVariable.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC structure MolangContextVariable.
 *
 */
struct MolangContextVariable {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOLANGCONTEXTVARIABLE
public:
    struct MolangContextVariable& operator=(struct MolangContextVariable const &) = delete;
    MolangContextVariable(struct MolangContextVariable const &) = delete;
    MolangContextVariable() = delete;
#endif

public:
    /**
     * @symbol  ??0MolangContextVariable\@\@QEAA\@AEBVHashedString\@\@\@Z
     */
    MCAPI MolangContextVariable(class HashedString const &);
    /**
     * @symbol  ??1MolangContextVariable\@\@QEAA\@XZ
     */
    MCAPI ~MolangContextVariable();

};
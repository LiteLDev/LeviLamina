/**
 * @file  MolangEvalStackState.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


struct MolangEvalStackState {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOLANGEVALSTACKSTATE
public:
    struct MolangEvalStackState& operator=(struct MolangEvalStackState const &) = delete;
    MolangEvalStackState(struct MolangEvalStackState const &) = delete;
    MolangEvalStackState() = delete;
#endif

public:
    /**
     * @symbol  ??0MolangEvalStackState\@\@QEAA\@AEAUMolangEvalParams\@\@\@Z
     */
    MCAPI MolangEvalStackState(struct MolangEvalParams &);

};
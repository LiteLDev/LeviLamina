/**
 * @file  IReplayableActorInput.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


struct IReplayableActorInput {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_IREPLAYABLEACTORINPUT
public:
    struct IReplayableActorInput& operator=(struct IReplayableActorInput const &) = delete;
    IReplayableActorInput(struct IReplayableActorInput const &) = delete;
    IReplayableActorInput() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_IREPLAYABLEACTORINPUT
    /**
     * @symbol ?advanceLiveFrame\@IReplayableActorInput\@\@UEBA?AW4AdvanceFrameResult\@\@AEAVActor\@\@\@Z
     */
    MCVAPI enum class AdvanceFrameResult advanceLiveFrame(class Actor &) const;
#endif

};
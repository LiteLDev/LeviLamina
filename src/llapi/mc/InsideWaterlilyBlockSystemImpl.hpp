/**
 * @file  InsideWaterlilyBlockSystemImpl.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class InsideWaterlilyBlockSystemImpl.
 *
 */
class InsideWaterlilyBlockSystemImpl {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INSIDEWATERLILYBLOCKSYSTEMIMPL
public:
    class InsideWaterlilyBlockSystemImpl& operator=(class InsideWaterlilyBlockSystemImpl const &) = delete;
    InsideWaterlilyBlockSystemImpl(class InsideWaterlilyBlockSystemImpl const &) = delete;
    InsideWaterlilyBlockSystemImpl() = delete;
#endif

public:
    /**
     * @symbol  ?_tickMovementSystem\@InsideWaterlilyBlockSystemImpl\@\@SAXAEBVStrictEntityContext\@\@AEBU?$InsideBlockWithPosComponent\@UWaterlilyBlockFlag\@\@\@\@AEAUStateVectorComponent\@\@\@Z
     */
    MCAPI static void _tickMovementSystem(class StrictEntityContext const &, struct InsideBlockWithPosComponent<struct WaterlilyBlockFlag> const &, struct StateVectorComponent &);

};
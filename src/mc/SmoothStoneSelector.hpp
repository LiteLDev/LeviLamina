/**
 * @file  SmoothStoneSelector.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SmoothStoneSelector.
 *
 */
class SmoothStoneSelector {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SMOOTHSTONESELECTOR
public:
    class SmoothStoneSelector& operator=(class SmoothStoneSelector const &) = delete;
    SmoothStoneSelector(class SmoothStoneSelector const &) = delete;
    SmoothStoneSelector() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~SmoothStoneSelector();
    /**
     * @vftbl  1
     * @symbol  ?next\@SmoothStoneSelector\@\@UEBAAEBVBlock\@\@AEAVRandom\@\@HHH_N\@Z
     */
    virtual class Block const & next(class Random &, int, int, int, bool) const;

};
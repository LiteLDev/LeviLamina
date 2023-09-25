/**
 * @file  BlockSelector.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BlockSelector.
 *
 */
class BlockSelector {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKSELECTOR
public:
    class BlockSelector& operator=(class BlockSelector const &) = delete;
    BlockSelector(class BlockSelector const &) = delete;
    BlockSelector() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?next\@SmoothStoneSelector\@\@UEBAAEBVBlock\@\@AEAVRandom\@\@HHH_N\@Z
     */
    virtual class Block const & next(class Random &, int, int, int, bool) const = 0;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BLOCKSELECTOR
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~BlockSelector();
#endif

};

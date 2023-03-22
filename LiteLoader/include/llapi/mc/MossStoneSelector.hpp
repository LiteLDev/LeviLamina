/**
 * @file  MossStoneSelector.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class MossStoneSelector.
 *
 */
class MossStoneSelector {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOSSSTONESELECTOR
public:
    class MossStoneSelector& operator=(class MossStoneSelector const &) = delete;
    MossStoneSelector(class MossStoneSelector const &) = delete;
    MossStoneSelector() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?next\@MossStoneSelector\@\@UEBAAEBVBlock\@\@AEAVRandom\@\@HHH_N\@Z
     */
    virtual class Block const & next(class Random &, int, int, int, bool) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MOSSSTONESELECTOR
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~MossStoneSelector();
#endif

};

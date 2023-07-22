/**
 * @file  PillagerOutpostStart.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class PillagerOutpostStart.
 *
 */
class PillagerOutpostStart {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PILLAGEROUTPOSTSTART
public:
    class PillagerOutpostStart& operator=(class PillagerOutpostStart const &) = delete;
    PillagerOutpostStart(class PillagerOutpostStart const &) = delete;
    PillagerOutpostStart() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~PillagerOutpostStart();
    /**
     * @vftbl  1
     * @symbol  ?postProcess\@PillagerOutpostStart\@\@UEAA_NAEAVBlockSource\@\@AEAVRandom\@\@AEBVBoundingBox\@\@\@Z
     */
    virtual bool postProcess(class BlockSource &, class Random &, class BoundingBox const &);

};
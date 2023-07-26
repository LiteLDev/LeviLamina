/**
 * @file  PodzolAreaFeature.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "Feature.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class PodzolAreaFeature.
 *
 */
class PodzolAreaFeature : public Feature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PODZOLAREAFEATURE
public:
    class PodzolAreaFeature& operator=(class PodzolAreaFeature const &) = delete;
    PodzolAreaFeature(class PodzolAreaFeature const &) = delete;
    PodzolAreaFeature() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~PodzolAreaFeature();
    /**
     * @vftbl  3
     * @symbol  ?place\@PodzolAreaFeature\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    virtual bool place(class BlockSource &, class BlockPos const &, class Random &) const;

};
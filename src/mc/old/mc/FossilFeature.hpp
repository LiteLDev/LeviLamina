/**
 * @file  FossilFeature.hpp
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
 * @brief MC class FossilFeature.
 *
 */
class FossilFeature : public Feature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FOSSILFEATURE
public:
    class FossilFeature& operator=(class FossilFeature const &) = delete;
    FossilFeature(class FossilFeature const &) = delete;
    FossilFeature() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~FossilFeature();
    /**
     * @vftbl  3
     * @symbol  ?place\@FossilFeature\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    virtual bool place(class BlockSource &, class BlockPos const &, class Random &) const;

//private:

private:
    /**
     * @symbol  ?STRUCTURE_LOCATION_FOSSIL\@FossilFeature\@\@0QBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const STRUCTURE_LOCATION_FOSSIL[];

};
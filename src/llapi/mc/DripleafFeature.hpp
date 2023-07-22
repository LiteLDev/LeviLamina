/**
 * @file  DripleafFeature.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Feature.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class DripleafFeature.
 *
 */
class DripleafFeature : public Feature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DRIPLEAFFEATURE
public:
    class DripleafFeature& operator=(class DripleafFeature const &) = delete;
    DripleafFeature(class DripleafFeature const &) = delete;
    DripleafFeature() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~DripleafFeature();
    /**
     * @vftbl  3
     * @symbol  ?place\@DripleafFeature\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    virtual bool place(class BlockSource &, class BlockPos const &, class Random &) const;

//private:
    /**
     * @symbol  ?_placeBigDripleaf\@DripleafFeature\@\@CA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    MCAPI static bool _placeBigDripleaf(class BlockSource &, class BlockPos const &, class Random &);

private:

};
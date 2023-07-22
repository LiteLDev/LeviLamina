/**
 * @file  ClayFeature.hpp
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
 * @brief MC class ClayFeature.
 *
 */
class ClayFeature : public Feature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CLAYFEATURE
public:
    class ClayFeature& operator=(class ClayFeature const &) = delete;
    ClayFeature(class ClayFeature const &) = delete;
    ClayFeature() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~ClayFeature();
    /**
     * @vftbl  3
     * @symbol  ?place\@ClayFeature\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    virtual bool place(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @symbol  ??0ClayFeature\@\@QEAA\@H\@Z
     */
    MCAPI ClayFeature(int);

};
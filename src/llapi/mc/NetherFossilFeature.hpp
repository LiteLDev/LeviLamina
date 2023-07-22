/**
 * @file  NetherFossilFeature.hpp
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
 * @brief MC class NetherFossilFeature.
 *
 */
class NetherFossilFeature : public Feature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NETHERFOSSILFEATURE
public:
    class NetherFossilFeature& operator=(class NetherFossilFeature const &) = delete;
    NetherFossilFeature(class NetherFossilFeature const &) = delete;
    NetherFossilFeature() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~NetherFossilFeature();
    /**
     * @vftbl  3
     * @symbol  ?place\@NetherFossilFeature\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    virtual bool place(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @symbol  ??0NetherFossilFeature\@\@QEAA\@$$QEAV?$vector\@PEBVBlock\@\@V?$allocator\@PEBVBlock\@\@\@std\@\@\@std\@\@_N\@Z
     */
    MCAPI NetherFossilFeature(std::vector<class Block const *> &&, bool);

//private:

private:
    /**
     * @symbol  ?STRUCTURE_LOCATION_FOSSIL\@NetherFossilFeature\@\@0QBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const STRUCTURE_LOCATION_FOSSIL[];

};
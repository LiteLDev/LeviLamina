/**
 * @file  MC/LakeFeature.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Feature.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class LakeFeature.
 *
 */
class LakeFeature : public Feature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LAKEFEATURE
public:
    class LakeFeature& operator=(class LakeFeature const &) = delete;
    LakeFeature(class LakeFeature const &) = delete;
    LakeFeature() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~LakeFeature();
    /**
     * @hash   2054943441
     * @vftbl  3
     * @symbol ?place@LakeFeature@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     */
    virtual bool place(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @hash   -468175434
     * @symbol ??0LakeFeature@@QEAA@AEBVBlock@@V?$optional@VXoroshiroPositionalRandomFactory@@@std@@@Z
     */
    MCAPI LakeFeature(class Block const &, class std::optional<class XoroshiroPositionalRandomFactory>);

//private:
    /**
     * @hash   -458954404
     * @symbol ?_check@LakeFeature@@AEBA_NAEBVBlockPos@@V?$span@_N$0IAA@@gsl@@@Z
     */
    MCAPI bool _check(class BlockPos const &, class gsl::span<bool, 2048>) const;

private:

};
/**
 * @file  RandomSpreadTreeCanopy.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "TreeHelper.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class RandomSpreadTreeCanopy.
 *
 */
class RandomSpreadTreeCanopy {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RANDOMSPREADTREECANOPY
public:
    class RandomSpreadTreeCanopy& operator=(class RandomSpreadTreeCanopy const &) = delete;
    RandomSpreadTreeCanopy(class RandomSpreadTreeCanopy const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~RandomSpreadTreeCanopy();
    /**
     * @vftbl  1
     * @symbol  ?placeCanopy\@RandomSpreadTreeCanopy\@\@UEBA?AV?$optional\@VBlockPos\@\@\@std\@\@AEAVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@AEAVRandom\@\@AEAVRenderParams\@\@AEBUTreeParams\@TreeHelper\@\@AEBV?$vector\@VBlockPos\@\@V?$allocator\@VBlockPos\@\@\@std\@\@\@3\@\@Z
     */
    virtual class std::optional<class BlockPos> placeCanopy(class IBlockWorldGenAPI &, class BlockPos const &, class Random &, class RenderParams &, struct TreeHelper::TreeParams const &, std::vector<class BlockPos> const &) const;
    /**
     * @symbol  ??0RandomSpreadTreeCanopy\@\@QEAA\@XZ
     */
    MCAPI RandomSpreadTreeCanopy();

};
/**
 * @file  MangroveTreeCanopy.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "TreeHelper.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class MangroveTreeCanopy.
 *
 */
class MangroveTreeCanopy {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MANGROVETREECANOPY
public:
    class MangroveTreeCanopy& operator=(class MangroveTreeCanopy const &) = delete;
    MangroveTreeCanopy(class MangroveTreeCanopy const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~MangroveTreeCanopy();
    /**
     * @vftbl  1
     * @symbol  ?placeCanopy\@MangroveTreeCanopy\@\@UEBA?AV?$optional\@VBlockPos\@\@\@std\@\@AEAVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@AEAVRandom\@\@AEAVRenderParams\@\@AEBUTreeParams\@TreeHelper\@\@AEBV?$vector\@VBlockPos\@\@V?$allocator\@VBlockPos\@\@\@std\@\@\@3\@\@Z
     */
    virtual class std::optional<class BlockPos> placeCanopy(class IBlockWorldGenAPI &, class BlockPos const &, class Random &, class RenderParams &, struct TreeHelper::TreeParams const &, std::vector<class BlockPos> const &) const;
    /**
     * @symbol  ??0MangroveTreeCanopy\@\@QEAA\@XZ
     */
    MCAPI MangroveTreeCanopy();

};
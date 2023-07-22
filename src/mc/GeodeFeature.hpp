/**
 * @file  GeodeFeature.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class GeodeFeature.
 *
 */
class GeodeFeature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GEODEFEATURE
public:
    class GeodeFeature& operator=(class GeodeFeature const &) = delete;
    GeodeFeature(class GeodeFeature const &) = delete;
    GeodeFeature() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~GeodeFeature();
    /**
     * @vftbl  1
     * @symbol  ?place\@GeodeFeature\@\@UEBA?AV?$optional\@VBlockPos\@\@\@std\@\@AEAVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@AEAVRandom\@\@AEAVRenderParams\@\@\@Z
     */
    virtual class std::optional<class BlockPos> place(class IBlockWorldGenAPI &, class BlockPos const &, class Random &, class RenderParams &) const;
    /**
     * @symbol  ?canSupportGeode\@GeodeFeature\@\@SA_NAEBVBlock\@\@\@Z
     */
    MCAPI static bool canSupportGeode(class Block const &);

};
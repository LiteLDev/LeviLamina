/**
 * @file  OreFeature.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class OreFeature.
 *
 */
class OreFeature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OREFEATURE
public:
    class OreFeature& operator=(class OreFeature const &) = delete;
    OreFeature(class OreFeature const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~OreFeature();
    /**
     * @hash   -645688583
     * @vftbl  1
     * @symbol  ?place\@OreFeature\@\@UEBA?AV?$optional\@VBlockPos\@\@\@std\@\@AEAVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@AEAVRandom\@\@AEAVRenderParams\@\@\@Z
     */
    virtual class std::optional<class BlockPos> place(class IBlockWorldGenAPI &, class BlockPos const &, class Random &, class RenderParams &) const;
    /**
     * @hash   473185888
     * @symbol  ??0OreFeature\@\@QEAA\@XZ
     */
    MCAPI OreFeature();
    /**
     * @hash   1797208686
     * @symbol  ??0OreFeature\@\@QEAA\@H$$QEAV?$vector\@UReplaceRule\@\@V?$allocator\@UReplaceRule\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI OreFeature(int, std::vector<struct ReplaceRule> &&);

};
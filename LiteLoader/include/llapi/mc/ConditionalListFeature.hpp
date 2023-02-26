/**
 * @file  ConditionalListFeature.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ConditionalListFeature.
 *
 */
class ConditionalListFeature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CONDITIONALLISTFEATURE
public:
    class ConditionalListFeature& operator=(class ConditionalListFeature const &) = delete;
    ConditionalListFeature(class ConditionalListFeature const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~ConditionalListFeature();
    /**
     * @vftbl  1
     * @symbol  ?place\@ConditionalListFeature\@\@UEBA?AV?$optional\@VBlockPos\@\@\@std\@\@AEAVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@AEAVRandom\@\@AEAVRenderParams\@\@\@Z
     */
    virtual class std::optional<class BlockPos> place(class IBlockWorldGenAPI &, class BlockPos const &, class Random &, class RenderParams &) const;
    /**
     * @symbol  ??0ConditionalListFeature\@\@QEAA\@XZ
     */
    MCAPI ConditionalListFeature();

};
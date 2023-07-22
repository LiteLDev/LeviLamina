/**
 * @file  BeardAndShaverFeature.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BeardAndShaverFeature.
 *
 */
class BeardAndShaverFeature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEARDANDSHAVERFEATURE
public:
    class BeardAndShaverFeature& operator=(class BeardAndShaverFeature const &) = delete;
    BeardAndShaverFeature(class BeardAndShaverFeature const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~BeardAndShaverFeature();
    /**
     * @vftbl  1
     * @symbol  ?place\@BeardAndShaverFeature\@\@UEBA?AV?$optional\@VBlockPos\@\@\@std\@\@AEAVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@AEAVRandom\@\@AEAVRenderParams\@\@\@Z
     */
    virtual class std::optional<class BlockPos> place(class IBlockWorldGenAPI &, class BlockPos const &, class Random &, class RenderParams &) const;
    /**
     * @symbol  ??0BeardAndShaverFeature\@\@QEAA\@XZ
     */
    MCAPI BeardAndShaverFeature();

};
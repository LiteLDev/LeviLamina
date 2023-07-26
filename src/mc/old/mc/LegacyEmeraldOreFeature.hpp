/**
 * @file  LegacyEmeraldOreFeature.hpp
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
 * @brief MC class LegacyEmeraldOreFeature.
 *
 */
class LegacyEmeraldOreFeature : public Feature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEGACYEMERALDOREFEATURE
public:
    class LegacyEmeraldOreFeature& operator=(class LegacyEmeraldOreFeature const &) = delete;
    LegacyEmeraldOreFeature(class LegacyEmeraldOreFeature const &) = delete;
    LegacyEmeraldOreFeature() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~LegacyEmeraldOreFeature();
    /**
     * @vftbl  3
     * @symbol  ?place\@LegacyEmeraldOreFeature\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    virtual bool place(class BlockSource &, class BlockPos const &, class Random &) const;

};
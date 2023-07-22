/**
 * @file  BiomeHeight.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure BiomeHeight.
 *
 */
struct BiomeHeight {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BIOMEHEIGHT
public:
    struct BiomeHeight& operator=(struct BiomeHeight const &) = delete;
    BiomeHeight(struct BiomeHeight const &) = delete;
    BiomeHeight() = delete;
#endif

public:
    /**
     * @symbol  ?MIN_DEPTH\@BiomeHeight\@\@2MB
     */
    MCAPI static float const MIN_DEPTH;

};
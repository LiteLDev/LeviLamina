/**
 * @file  BiomeIdCompatibility.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC namespace BiomeIdCompatibility.
 *
 */
namespace BiomeIdCompatibility {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
    /**
     * @symbol  ?MAX_CUSTOM_BIOMES\@BiomeIdCompatibility\@\@3IB
     */
    MCAPI extern unsigned int const MAX_CUSTOM_BIOMES;
    /**
     * @symbol  ?adjustForReservedRanges\@BiomeIdCompatibility\@\@YAIIAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI unsigned int adjustForReservedRanges(unsigned int, std::string const &);
    /**
     * @symbol  ?isReserved\@BiomeIdCompatibility\@\@YA_NI\@Z
     */
    MCAPI bool isReserved(unsigned int);

};
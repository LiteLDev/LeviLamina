/**
 * @file  BiomeIdCompatibility.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   -1210440837
     * @symbol ?MAX_CUSTOM_BIOMES@BiomeIdCompatibility@@3IB
     */
    MCAPI extern unsigned int const MAX_CUSTOM_BIOMES;
    /**
     * @hash   -2115813665
     * @symbol ?adjustForReservedRanges@BiomeIdCompatibility@@YAIIAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI unsigned int adjustForReservedRanges(unsigned int, std::string const &);
    /**
     * @hash   -1484149648
     * @symbol ?isReserved@BiomeIdCompatibility@@YA_NI@Z
     */
    MCAPI bool isReserved(unsigned int);

};
/**
 * @file  ArmorTrimIconGenerationInfo.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class ArmorTrimIconGenerationInfo {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ARMORTRIMICONGENERATIONINFO
public:
    class ArmorTrimIconGenerationInfo& operator=(class ArmorTrimIconGenerationInfo const &) = delete;
    ArmorTrimIconGenerationInfo(class ArmorTrimIconGenerationInfo const &) = delete;
    ArmorTrimIconGenerationInfo() = delete;
#endif

public:
    /**
     * @symbol ?ARMOR_LOCATION_ROOT\@ArmorTrimIconGenerationInfo\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const ARMOR_LOCATION_ROOT;
    /**
     * @symbol ?PALETTE_LOCATION_ROOT\@ArmorTrimIconGenerationInfo\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const PALETTE_LOCATION_ROOT;
    /**
     * @symbol ?TRIMMED_ARMOR_SUBSTR\@ArmorTrimIconGenerationInfo\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const TRIMMED_ARMOR_SUBSTR;
    /**
     * @symbol ?TRIM_LOCATION_ROOT\@ArmorTrimIconGenerationInfo\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const TRIM_LOCATION_ROOT;
    /**
     * @symbol ?buildTrimmedArmorName\@ArmorTrimIconGenerationInfo\@\@SA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV23\@0\@Z
     */
    MCAPI static std::string buildTrimmedArmorName(std::string const &, std::string const &);

};

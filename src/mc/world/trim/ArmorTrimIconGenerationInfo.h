#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ArmorTrimIconGenerationInfo {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ARMORTRIMICONGENERATIONINFO
public:
    ArmorTrimIconGenerationInfo& operator=(ArmorTrimIconGenerationInfo const&) = delete;
    ArmorTrimIconGenerationInfo(ArmorTrimIconGenerationInfo const&)            = delete;
    ArmorTrimIconGenerationInfo()                                              = delete;
#endif

public:
    /**
     * @symbol
     * ?buildTrimmedArmorName\@ArmorTrimIconGenerationInfo\@\@SA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV23\@0\@Z
     */
    MCAPI static std::string buildTrimmedArmorName(std::string const&, std::string const&);
};

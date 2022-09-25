/**
 * @file  POIBlueprint.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class POIBlueprint.
 *
 */
class POIBlueprint {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_POIBLUEPRINT
public:
    class POIBlueprint& operator=(class POIBlueprint const &) = delete;
    POIBlueprint(class POIBlueprint const &) = delete;
    POIBlueprint() = delete;
#endif

public:
    /**
     * @hash   2060048318
     * @symbol ??0POIBlueprint@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4POIType@@M_N_K3000@Z
     */
    MCAPI POIBlueprint(std::string, enum POIType, float, bool, unsigned __int64, unsigned __int64, std::string, std::string, std::string);

};
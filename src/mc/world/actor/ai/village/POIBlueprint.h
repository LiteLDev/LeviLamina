#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct POIBlueprint {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_POIBLUEPRINT
public:
    POIBlueprint& operator=(POIBlueprint const&) = delete;
    POIBlueprint(POIBlueprint const&)            = delete;
    POIBlueprint()                               = delete;
#endif

public:
    /**
     * @symbol
     * ??0POIBlueprint\@\@QEAA\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4POIType\@\@M_N_K3000\@Z
     */
    MCAPI POIBlueprint(
        std::string,
        enum class POIType,
        float,
        bool,
        unsigned __int64,
        unsigned __int64,
        std::string,
        std::string,
        std::string
    );
};

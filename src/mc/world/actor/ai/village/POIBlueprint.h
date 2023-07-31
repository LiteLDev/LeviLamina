#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct POIBlueprint {

public:
    // prevent constructor by default
    POIBlueprint& operator=(POIBlueprint const&) = delete;
    POIBlueprint(POIBlueprint const&)            = delete;
    POIBlueprint()                               = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol
     * ??0POIBlueprint\@\@QEAA\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4POIType\@\@M_N_K3000\@Z
     */
    MCAPI POIBlueprint(
        std::string,
        enum class POIType,
        float,
        bool,
        uint64_t,
        uint64_t,
        std::string,
        std::string,
        std::string
    );
    // NOLINTEND
};

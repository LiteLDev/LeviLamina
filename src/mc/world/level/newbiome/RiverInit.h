#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OperationNodeFilters {

struct RiverInit {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OPERATIONNODEFILTERS_RIVERINIT
public:
    RiverInit& operator=(RiverInit const&) = delete;
    RiverInit(RiverInit const&)            = delete;
    RiverInit()                            = delete;
#endif

public:
    /**
     * @symbol ??0RiverInit\@OperationNodeFilters\@\@QEAA\@AEBVBiomeRegistry\@\@\@Z
     */
    MCAPI RiverInit(class BiomeRegistry const&);
};

}; // namespace OperationNodeFilters

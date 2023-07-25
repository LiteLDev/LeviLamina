#pragma once

#include "mc/_HeaderOutputPredefine.h"

class StructureIntegrityProcessor {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STRUCTUREINTEGRITYPROCESSOR
public:
    StructureIntegrityProcessor& operator=(StructureIntegrityProcessor const&) = delete;
    StructureIntegrityProcessor(StructureIntegrityProcessor const&)            = delete;
    StructureIntegrityProcessor()                                              = delete;
#endif

public:
    /**
     * @symbol
     * ?generateFlagsForIndices\@StructureIntegrityProcessor\@\@QEBA?AV?$vector\@_NV?$allocator\@_N\@std\@\@\@std\@\@HH\@Z
     */
    MCAPI std::vector<bool> generateFlagsForIndices(int, int) const;
};

/**
 * @file  StructureIntegrityProcessor.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class StructureIntegrityProcessor.
 *
 */
class StructureIntegrityProcessor {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STRUCTUREINTEGRITYPROCESSOR
public:
    class StructureIntegrityProcessor& operator=(class StructureIntegrityProcessor const &) = delete;
    StructureIntegrityProcessor(class StructureIntegrityProcessor const &) = delete;
    StructureIntegrityProcessor() = delete;
#endif

public:
    /**
     * @symbol  ??0StructureIntegrityProcessor\@\@QEAA\@MI\@Z
     */
    MCAPI StructureIntegrityProcessor(float, unsigned int);
    /**
     * @symbol  ?generateFlagsForIndices\@StructureIntegrityProcessor\@\@QEBA?AV?$vector\@_NV?$allocator\@_N\@std\@\@\@std\@\@HH\@Z
     */
    MCAPI std::vector<bool> generateFlagsForIndices(int, int) const;

};
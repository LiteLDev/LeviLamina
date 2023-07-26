#pragma once

#include "mc/_HeaderOutputPredefine.h"

class StructurePoolBlockTagRule {

public:
    // prevent constructor by default
    StructurePoolBlockTagRule& operator=(StructurePoolBlockTagRule const&) = delete;
    StructurePoolBlockTagRule(StructurePoolBlockTagRule const&)            = delete;
    StructurePoolBlockTagRule()                                            = delete;

public:
    /**
     * @symbol
     * ??0StructurePoolBlockTagRule\@\@QEAA\@$$QEAV?$unique_ptr\@VIStructurePoolBlockTagPredicate\@\@U?$default_delete\@VIStructurePoolBlockTagPredicate\@\@\@std\@\@\@std\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@2\@1\@Z
     */
    MCAPI StructurePoolBlockTagRule(
        std::unique_ptr<class IStructurePoolBlockTagPredicate>&&,
        std::string,
        std::string
    ); // NOLINT
};

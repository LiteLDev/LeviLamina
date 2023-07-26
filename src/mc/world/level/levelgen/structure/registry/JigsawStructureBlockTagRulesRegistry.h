#pragma once

#include "mc/_HeaderOutputPredefine.h"

class JigsawStructureBlockTagRulesRegistry {

public:
    // prevent constructor by default
    JigsawStructureBlockTagRulesRegistry& operator=(JigsawStructureBlockTagRulesRegistry const&) = delete;
    JigsawStructureBlockTagRulesRegistry(JigsawStructureBlockTagRulesRegistry const&)            = delete;

public:
    /**
     * @symbol ??0JigsawStructureBlockTagRulesRegistry\@\@QEAA\@XZ
     */
    MCAPI JigsawStructureBlockTagRulesRegistry(); // NOLINT
    /**
     * @symbol
     * ?lookupByName\@JigsawStructureBlockTagRulesRegistry\@\@QEBAPEBV?$vector\@V?$unique_ptr\@VStructurePoolBlockTagRule\@\@U?$default_delete\@VStructurePoolBlockTagRule\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VStructurePoolBlockTagRule\@\@U?$default_delete\@VStructurePoolBlockTagRule\@\@\@std\@\@\@std\@\@\@2\@\@std\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@\@Z
     */
    MCAPI std::vector<std::unique_ptr<class StructurePoolBlockTagRule>> const* lookupByName(std::string
    ) const; // NOLINT
    /**
     * @symbol
     * ?registerBlockTagRules\@JigsawStructureBlockTagRulesRegistry\@\@QEAAXV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@$$QEAV?$unique_ptr\@V?$vector\@V?$unique_ptr\@VStructurePoolBlockTagRule\@\@U?$default_delete\@VStructurePoolBlockTagRule\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VStructurePoolBlockTagRule\@\@U?$default_delete\@VStructurePoolBlockTagRule\@\@\@std\@\@\@std\@\@\@2\@\@std\@\@U?$default_delete\@V?$vector\@V?$unique_ptr\@VStructurePoolBlockTagRule\@\@U?$default_delete\@VStructurePoolBlockTagRule\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VStructurePoolBlockTagRule\@\@U?$default_delete\@VStructurePoolBlockTagRule\@\@\@std\@\@\@std\@\@\@2\@\@std\@\@\@2\@\@3\@\@Z
     */
    MCAPI void
    registerBlockTagRules(std::string, std::unique_ptr<std::vector<class std::unique_ptr<class StructurePoolBlockTagRule, struct std::default_delete<class StructurePoolBlockTagRule>>>>&&); // NOLINT
    /**
     * @symbol ??1JigsawStructureBlockTagRulesRegistry\@\@QEAA\@XZ
     */
    MCAPI ~JigsawStructureBlockTagRulesRegistry(); // NOLINT
};

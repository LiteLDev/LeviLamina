#pragma once

#include "mc/_HeaderOutputPredefine.h"

class JigsawStructureBlockRulesRegistry {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_JIGSAWSTRUCTUREBLOCKRULESREGISTRY
public:
    JigsawStructureBlockRulesRegistry& operator=(JigsawStructureBlockRulesRegistry const&) = delete;
    JigsawStructureBlockRulesRegistry(JigsawStructureBlockRulesRegistry const&)            = delete;
#endif

public:
    /**
     * @symbol ??0JigsawStructureBlockRulesRegistry\@\@QEAA\@XZ
     */
    MCAPI JigsawStructureBlockRulesRegistry();
    /**
     * @symbol
     * ?lookupByName\@JigsawStructureBlockRulesRegistry\@\@QEBAPEBV?$vector\@V?$unique_ptr\@VStructurePoolBlockRule\@\@U?$default_delete\@VStructurePoolBlockRule\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VStructurePoolBlockRule\@\@U?$default_delete\@VStructurePoolBlockRule\@\@\@std\@\@\@std\@\@\@2\@\@std\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@\@Z
     */
    MCAPI std::vector<std::unique_ptr<class StructurePoolBlockRule>> const* lookupByName(std::string) const;
    /**
     * @symbol
     * ?registerBlockRules\@JigsawStructureBlockRulesRegistry\@\@QEAAXV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@$$QEAV?$unique_ptr\@V?$vector\@V?$unique_ptr\@VStructurePoolBlockRule\@\@U?$default_delete\@VStructurePoolBlockRule\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VStructurePoolBlockRule\@\@U?$default_delete\@VStructurePoolBlockRule\@\@\@std\@\@\@std\@\@\@2\@\@std\@\@U?$default_delete\@V?$vector\@V?$unique_ptr\@VStructurePoolBlockRule\@\@U?$default_delete\@VStructurePoolBlockRule\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VStructurePoolBlockRule\@\@U?$default_delete\@VStructurePoolBlockRule\@\@\@std\@\@\@std\@\@\@2\@\@std\@\@\@2\@\@3\@\@Z
     */
    MCAPI void
    registerBlockRules(std::string, std::unique_ptr<std::vector<class std::unique_ptr<class StructurePoolBlockRule, struct std::default_delete<class StructurePoolBlockRule>>>>&&);
    /**
     * @symbol ??1JigsawStructureBlockRulesRegistry\@\@QEAA\@XZ
     */
    MCAPI ~JigsawStructureBlockRulesRegistry();
};

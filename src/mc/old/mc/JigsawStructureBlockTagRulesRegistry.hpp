/**
 * @file  JigsawStructureBlockTagRulesRegistry.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class JigsawStructureBlockTagRulesRegistry.
 *
 */
class JigsawStructureBlockTagRulesRegistry {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_JIGSAWSTRUCTUREBLOCKTAGRULESREGISTRY
public:
    class JigsawStructureBlockTagRulesRegistry& operator=(class JigsawStructureBlockTagRulesRegistry const &) = delete;
    JigsawStructureBlockTagRulesRegistry(class JigsawStructureBlockTagRulesRegistry const &) = delete;
    JigsawStructureBlockTagRulesRegistry() = delete;
#endif

public:
    /**
     * @symbol  ?clear\@JigsawStructureBlockTagRulesRegistry\@\@QEAAXXZ
     */
    MCAPI void clear();
    /**
     * @symbol  ?lookupByName\@JigsawStructureBlockTagRulesRegistry\@\@QEBAPEBV?$vector\@V?$unique_ptr\@VStructurePoolBlockTagRule\@\@U?$default_delete\@VStructurePoolBlockTagRule\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VStructurePoolBlockTagRule\@\@U?$default_delete\@VStructurePoolBlockTagRule\@\@\@std\@\@\@std\@\@\@2\@\@std\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@\@Z
     */
    MCAPI std::vector<std::unique_ptr<class StructurePoolBlockTagRule>> const * lookupByName(std::string) const;
    /**
     * @symbol  ?registerBlockTagRules\@JigsawStructureBlockTagRulesRegistry\@\@QEAAXV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@$$QEAV?$unique_ptr\@V?$vector\@V?$unique_ptr\@VStructurePoolBlockTagRule\@\@U?$default_delete\@VStructurePoolBlockTagRule\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VStructurePoolBlockTagRule\@\@U?$default_delete\@VStructurePoolBlockTagRule\@\@\@std\@\@\@std\@\@\@2\@\@std\@\@U?$default_delete\@V?$vector\@V?$unique_ptr\@VStructurePoolBlockTagRule\@\@U?$default_delete\@VStructurePoolBlockTagRule\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VStructurePoolBlockTagRule\@\@U?$default_delete\@VStructurePoolBlockTagRule\@\@\@std\@\@\@std\@\@\@2\@\@std\@\@\@2\@\@3\@\@Z
     */
    MCAPI void registerBlockTagRules(std::string, std::unique_ptr<std::vector<class std::unique_ptr<class StructurePoolBlockTagRule, struct std::default_delete<class StructurePoolBlockTagRule>>>> &&);
    /**
     * @symbol  ??1JigsawStructureBlockTagRulesRegistry\@\@QEAA\@XZ
     */
    MCAPI ~JigsawStructureBlockTagRulesRegistry();

};
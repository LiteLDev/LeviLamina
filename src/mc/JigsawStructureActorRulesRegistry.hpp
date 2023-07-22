/**
 * @file  JigsawStructureActorRulesRegistry.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class JigsawStructureActorRulesRegistry.
 *
 */
class JigsawStructureActorRulesRegistry {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_JIGSAWSTRUCTUREACTORRULESREGISTRY
public:
    class JigsawStructureActorRulesRegistry& operator=(class JigsawStructureActorRulesRegistry const &) = delete;
    JigsawStructureActorRulesRegistry(class JigsawStructureActorRulesRegistry const &) = delete;
    JigsawStructureActorRulesRegistry() = delete;
#endif

public:
    /**
     * @symbol  ?clear\@JigsawStructureActorRulesRegistry\@\@QEAAXXZ
     */
    MCAPI void clear();
    /**
     * @symbol  ?lookupByName\@JigsawStructureActorRulesRegistry\@\@QEBAPEBV?$vector\@V?$unique_ptr\@VStructurePoolActorRule\@\@U?$default_delete\@VStructurePoolActorRule\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VStructurePoolActorRule\@\@U?$default_delete\@VStructurePoolActorRule\@\@\@std\@\@\@std\@\@\@2\@\@std\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@\@Z
     */
    MCAPI std::vector<std::unique_ptr<class StructurePoolActorRule>> const * lookupByName(std::string) const;
    /**
     * @symbol  ?registerActorRules\@JigsawStructureActorRulesRegistry\@\@QEAAXV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@$$QEAV?$unique_ptr\@V?$vector\@V?$unique_ptr\@VStructurePoolActorRule\@\@U?$default_delete\@VStructurePoolActorRule\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VStructurePoolActorRule\@\@U?$default_delete\@VStructurePoolActorRule\@\@\@std\@\@\@std\@\@\@2\@\@std\@\@U?$default_delete\@V?$vector\@V?$unique_ptr\@VStructurePoolActorRule\@\@U?$default_delete\@VStructurePoolActorRule\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VStructurePoolActorRule\@\@U?$default_delete\@VStructurePoolActorRule\@\@\@std\@\@\@std\@\@\@2\@\@std\@\@\@2\@\@3\@\@Z
     */
    MCAPI void registerActorRules(std::string, std::unique_ptr<std::vector<class std::unique_ptr<class StructurePoolActorRule, struct std::default_delete<class StructurePoolActorRule>>>> &&);
    /**
     * @symbol  ??1JigsawStructureActorRulesRegistry\@\@QEAA\@XZ
     */
    MCAPI ~JigsawStructureActorRulesRegistry();

};
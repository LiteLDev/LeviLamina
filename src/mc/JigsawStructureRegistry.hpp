/**
 * @file  JigsawStructureRegistry.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class JigsawStructureRegistry.
 *
 */
class JigsawStructureRegistry {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_JIGSAWSTRUCTUREREGISTRY
public:
    class JigsawStructureRegistry& operator=(class JigsawStructureRegistry const &) = delete;
    JigsawStructureRegistry(class JigsawStructureRegistry const &) = delete;
#endif

public:
    /**
     * @symbol  ??0JigsawStructureRegistry\@\@QEAA\@XZ
     */
    MCAPI JigsawStructureRegistry();
    /**
     * @symbol  ?getJigsawStructureActorRulesRegistry\@JigsawStructureRegistry\@\@QEAAAEAVJigsawStructureActorRulesRegistry\@\@XZ
     */
    MCAPI class JigsawStructureActorRulesRegistry & getJigsawStructureActorRulesRegistry();
    /**
     * @symbol  ?getJigsawStructureBlockRulesRegistry\@JigsawStructureRegistry\@\@QEAAAEAVJigsawStructureBlockRulesRegistry\@\@XZ
     */
    MCAPI class JigsawStructureBlockRulesRegistry & getJigsawStructureBlockRulesRegistry();
    /**
     * @symbol  ?getJigsawStructureBlockTagRulesRegistry\@JigsawStructureRegistry\@\@QEAAAEAVJigsawStructureBlockTagRulesRegistry\@\@XZ
     */
    MCAPI class JigsawStructureBlockTagRulesRegistry & getJigsawStructureBlockTagRulesRegistry();
    /**
     * @symbol  ?getJigsawStructureElementRegistry\@JigsawStructureRegistry\@\@QEAAAEAVJigsawStructureElementRegistry\@\@XZ
     */
    MCAPI class JigsawStructureElementRegistry & getJigsawStructureElementRegistry();
    /**
     * @symbol  ?lookupByName\@JigsawStructureRegistry\@\@QEBAPEBVStructureTemplatePool\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class StructureTemplatePool const * lookupByName(std::string) const;
    /**
     * @symbol  ?registerPool\@JigsawStructureRegistry\@\@QEAAX$$QEAV?$unique_ptr\@VStructureTemplatePool\@\@U?$default_delete\@VStructureTemplatePool\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void registerPool(std::unique_ptr<class StructureTemplatePool> &&);
    /**
     * @symbol  ??1JigsawStructureRegistry\@\@QEAA\@XZ
     */
    MCAPI ~JigsawStructureRegistry();

};
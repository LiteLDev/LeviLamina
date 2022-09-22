/**
 * @file  JigsawStructureRegistry.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   486836075
     * @symbol ??0JigsawStructureRegistry@@QEAA@XZ
     */
    MCAPI JigsawStructureRegistry();
    /**
     * @hash   -251382790
     * @symbol ?getJigsawStructureActorRulesRegistry@JigsawStructureRegistry@@QEAAAEAVJigsawStructureActorRulesRegistry@@XZ
     */
    MCAPI class JigsawStructureActorRulesRegistry & getJigsawStructureActorRulesRegistry();
    /**
     * @hash   -289864166
     * @symbol ?getJigsawStructureBlockRulesRegistry@JigsawStructureRegistry@@QEAAAEAVJigsawStructureBlockRulesRegistry@@XZ
     */
    MCAPI class JigsawStructureBlockRulesRegistry & getJigsawStructureBlockRulesRegistry();
    /**
     * @hash   1498765236
     * @symbol ?getJigsawStructureBlockTagRulesRegistry@JigsawStructureRegistry@@QEAAAEAVJigsawStructureBlockTagRulesRegistry@@XZ
     */
    MCAPI class JigsawStructureBlockTagRulesRegistry & getJigsawStructureBlockTagRulesRegistry();
    /**
     * @hash   1702784704
     * @symbol ?getJigsawStructureElementRegistry@JigsawStructureRegistry@@QEAAAEAVJigsawStructureElementRegistry@@XZ
     */
    MCAPI class JigsawStructureElementRegistry & getJigsawStructureElementRegistry();
    /**
     * @hash   -1913611218
     * @symbol ?lookupByName@JigsawStructureRegistry@@QEBAPEBVStructureTemplatePool@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI class StructureTemplatePool const * lookupByName(std::string) const;
    /**
     * @hash   1977928268
     * @symbol ?registerPool@JigsawStructureRegistry@@QEAAX$$QEAV?$unique_ptr@VStructureTemplatePool@@U?$default_delete@VStructureTemplatePool@@@std@@@std@@@Z
     */
    MCAPI void registerPool(std::unique_ptr<class StructureTemplatePool> &&);
    /**
     * @hash   -1069107733
     * @symbol ??1JigsawStructureRegistry@@QEAA@XZ
     */
    MCAPI ~JigsawStructureRegistry();

};
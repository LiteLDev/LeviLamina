#pragma once

#include "mc/_HeaderOutputPredefine.h"

class JigsawStructureRegistry {

public:
    // prevent constructor by default
    JigsawStructureRegistry& operator=(JigsawStructureRegistry const&) = delete;
    JigsawStructureRegistry(JigsawStructureRegistry const&)            = delete;

public:
    /**
     * @symbol ??0JigsawStructureRegistry\@\@QEAA\@XZ
     */
    MCAPI JigsawStructureRegistry(); // NOLINT
    /**
     * @symbol
     * ?getJigsawStructureActorRulesRegistry\@JigsawStructureRegistry\@\@QEAAAEAVJigsawStructureActorRulesRegistry\@\@XZ
     */
    MCAPI class JigsawStructureActorRulesRegistry& getJigsawStructureActorRulesRegistry(); // NOLINT
    /**
     * @symbol
     * ?getJigsawStructureBlockRulesRegistry\@JigsawStructureRegistry\@\@QEAAAEAVJigsawStructureBlockRulesRegistry\@\@XZ
     */
    MCAPI class JigsawStructureBlockRulesRegistry& getJigsawStructureBlockRulesRegistry(); // NOLINT
    /**
     * @symbol
     * ?getJigsawStructureBlockTagRulesRegistry\@JigsawStructureRegistry\@\@QEAAAEAVJigsawStructureBlockTagRulesRegistry\@\@XZ
     */
    MCAPI class JigsawStructureBlockTagRulesRegistry& getJigsawStructureBlockTagRulesRegistry(); // NOLINT
    /**
     * @symbol
     * ?getJigsawStructureElementRegistry\@JigsawStructureRegistry\@\@QEAAAEAVJigsawStructureElementRegistry\@\@XZ
     */
    MCAPI class JigsawStructureElementRegistry& getJigsawStructureElementRegistry(); // NOLINT
    /**
     * @symbol
     * ?lookupByName\@JigsawStructureRegistry\@\@QEBAPEBVStructureTemplatePool\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class StructureTemplatePool const* lookupByName(std::string) const; // NOLINT
    /**
     * @symbol
     * ?registerPool\@JigsawStructureRegistry\@\@QEAAX$$QEAV?$unique_ptr\@VStructureTemplatePool\@\@U?$default_delete\@VStructureTemplatePool\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void registerPool(std::unique_ptr<class StructureTemplatePool>&&); // NOLINT
    /**
     * @symbol ??1JigsawStructureRegistry\@\@QEAA\@XZ
     */
    MCAPI ~JigsawStructureRegistry(); // NOLINT
};

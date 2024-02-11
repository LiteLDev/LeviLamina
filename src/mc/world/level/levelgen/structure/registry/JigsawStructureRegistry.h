#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace br::worldgen { class StructureSetRegistry; }
// clang-format on

class JigsawStructureRegistry {
public:
    // prevent constructor by default
    JigsawStructureRegistry& operator=(JigsawStructureRegistry const&);
    JigsawStructureRegistry(JigsawStructureRegistry const&);

public:
    // NOLINTBEGIN
    // symbol: ??0JigsawStructureRegistry@@QEAA@XZ
    MCAPI JigsawStructureRegistry();

    // symbol:
    // ?getJigsawStructureActorRulesRegistry@JigsawStructureRegistry@@QEAAAEAVJigsawStructureActorRulesRegistry@@XZ
    MCAPI class JigsawStructureActorRulesRegistry& getJigsawStructureActorRulesRegistry();

    // symbol:
    // ?getJigsawStructureBlockRulesRegistry@JigsawStructureRegistry@@QEAAAEAVJigsawStructureBlockRulesRegistry@@XZ
    MCAPI class JigsawStructureBlockRulesRegistry& getJigsawStructureBlockRulesRegistry();

    // symbol:
    // ?getJigsawStructureBlockTagRulesRegistry@JigsawStructureRegistry@@QEAAAEAVJigsawStructureBlockTagRulesRegistry@@XZ
    MCAPI class JigsawStructureBlockTagRulesRegistry& getJigsawStructureBlockTagRulesRegistry();

    // symbol: ?getJigsawStructureElementRegistry@JigsawStructureRegistry@@QEAAAEAVJigsawStructureElementRegistry@@XZ
    MCAPI class JigsawStructureElementRegistry& getJigsawStructureElementRegistry();

    // symbol: ?initialize@JigsawStructureRegistry@@QEAAXAEBVBaseGameVersion@@AEBVExperiments@@@Z
    MCAPI void initialize(class BaseGameVersion const&, class Experiments const&);

    // symbol:
    // ?lookupByName@JigsawStructureRegistry@@QEBAPEBVStructureTemplatePool@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class StructureTemplatePool const* lookupByName(std::string name) const;

    // symbol:
    // ?registerPool@JigsawStructureRegistry@@QEAAX$$QEAV?$unique_ptr@VStructureTemplatePool@@U?$default_delete@VStructureTemplatePool@@@std@@@std@@@Z
    MCAPI void registerPool(std::unique_ptr<class StructureTemplatePool>&& pool);

    // symbol: ?structureSetRegistry@JigsawStructureRegistry@@QEAAAEAVStructureSetRegistry@worldgen@br@@XZ
    MCAPI class br::worldgen::StructureSetRegistry& structureSetRegistry();

    // symbol: ??1JigsawStructureRegistry@@QEAA@XZ
    MCAPI ~JigsawStructureRegistry();

    // NOLINTEND
};

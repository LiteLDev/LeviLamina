#pragma once

#include "mc/_HeaderOutputPredefine.h"

class JigsawStructureActorRulesRegistry {
public:
    // prevent constructor by default
    JigsawStructureActorRulesRegistry& operator=(JigsawStructureActorRulesRegistry const&);
    JigsawStructureActorRulesRegistry(JigsawStructureActorRulesRegistry const&);

public:
    // NOLINTBEGIN
    // symbol: ??0JigsawStructureActorRulesRegistry@@QEAA@XZ
    MCAPI JigsawStructureActorRulesRegistry();

    // symbol:
    // ?lookupByName@JigsawStructureActorRulesRegistry@@QEBAPEBV?$vector@V?$unique_ptr@VStructurePoolActorRule@@U?$default_delete@VStructurePoolActorRule@@@std@@@std@@V?$allocator@V?$unique_ptr@VStructurePoolActorRule@@U?$default_delete@VStructurePoolActorRule@@@std@@@std@@@2@@std@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@@Z
    MCAPI std::vector<std::unique_ptr<class StructurePoolActorRule>> const* lookupByName(std::string name) const;

    // symbol:
    // ?registerActorRules@JigsawStructureActorRulesRegistry@@QEAAXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$$QEAV?$unique_ptr@V?$vector@V?$unique_ptr@VStructurePoolActorRule@@U?$default_delete@VStructurePoolActorRule@@@std@@@std@@V?$allocator@V?$unique_ptr@VStructurePoolActorRule@@U?$default_delete@VStructurePoolActorRule@@@std@@@std@@@2@@std@@U?$default_delete@V?$vector@V?$unique_ptr@VStructurePoolActorRule@@U?$default_delete@VStructurePoolActorRule@@@std@@@std@@V?$allocator@V?$unique_ptr@VStructurePoolActorRule@@U?$default_delete@VStructurePoolActorRule@@@std@@@std@@@2@@std@@@2@@3@@Z
    MCAPI void registerActorRules(
        std::string name,
        std::unique_ptr<std::vector<
            std::unique_ptr<class StructurePoolActorRule, std::default_delete<class StructurePoolActorRule>>>>&&
            ruleList
    );

    // symbol: ??1JigsawStructureActorRulesRegistry@@QEAA@XZ
    MCAPI ~JigsawStructureActorRulesRegistry();

    // NOLINTEND
};

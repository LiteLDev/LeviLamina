#pragma once

#include "mc/_HeaderOutputPredefine.h"

class JigsawStructureBlockTagRulesRegistry {
public:
    // prevent constructor by default
    JigsawStructureBlockTagRulesRegistry& operator=(JigsawStructureBlockTagRulesRegistry const&);
    JigsawStructureBlockTagRulesRegistry(JigsawStructureBlockTagRulesRegistry const&);

public:
    // NOLINTBEGIN
    // symbol: ??0JigsawStructureBlockTagRulesRegistry@@QEAA@XZ
    MCAPI JigsawStructureBlockTagRulesRegistry();

    // symbol:
    // ?lookupByName@JigsawStructureBlockTagRulesRegistry@@QEBAPEBV?$vector@V?$unique_ptr@VStructurePoolBlockTagRule@@U?$default_delete@VStructurePoolBlockTagRule@@@std@@@std@@V?$allocator@V?$unique_ptr@VStructurePoolBlockTagRule@@U?$default_delete@VStructurePoolBlockTagRule@@@std@@@std@@@2@@std@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@@Z
    MCAPI std::vector<std::unique_ptr<class StructurePoolBlockTagRule>> const* lookupByName(std::string name) const;

    // symbol:
    // ?registerBlockTagRules@JigsawStructureBlockTagRulesRegistry@@QEAAXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$$QEAV?$unique_ptr@V?$vector@V?$unique_ptr@VStructurePoolBlockTagRule@@U?$default_delete@VStructurePoolBlockTagRule@@@std@@@std@@V?$allocator@V?$unique_ptr@VStructurePoolBlockTagRule@@U?$default_delete@VStructurePoolBlockTagRule@@@std@@@std@@@2@@std@@U?$default_delete@V?$vector@V?$unique_ptr@VStructurePoolBlockTagRule@@U?$default_delete@VStructurePoolBlockTagRule@@@std@@@std@@V?$allocator@V?$unique_ptr@VStructurePoolBlockTagRule@@U?$default_delete@VStructurePoolBlockTagRule@@@std@@@std@@@2@@std@@@2@@3@@Z
    MCAPI void registerBlockTagRules(
        std::string name,
        std::unique_ptr<std::vector<
            std::unique_ptr<class StructurePoolBlockTagRule, std::default_delete<class StructurePoolBlockTagRule>>>>&&
            ruleList
    );

    // symbol: ??1JigsawStructureBlockTagRulesRegistry@@QEAA@XZ
    MCAPI ~JigsawStructureBlockTagRulesRegistry();

    // NOLINTEND
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

class JigsawStructureBlockRulesRegistry {
public:
    // prevent constructor by default
    JigsawStructureBlockRulesRegistry& operator=(JigsawStructureBlockRulesRegistry const&);
    JigsawStructureBlockRulesRegistry(JigsawStructureBlockRulesRegistry const&);

public:
    // NOLINTBEGIN
    // symbol: ??0JigsawStructureBlockRulesRegistry@@QEAA@XZ
    MCAPI JigsawStructureBlockRulesRegistry();

    // symbol:
    // ?lookupByName@JigsawStructureBlockRulesRegistry@@QEBAPEBV?$vector@V?$unique_ptr@VStructurePoolBlockRule@@U?$default_delete@VStructurePoolBlockRule@@@std@@@std@@V?$allocator@V?$unique_ptr@VStructurePoolBlockRule@@U?$default_delete@VStructurePoolBlockRule@@@std@@@std@@@2@@std@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@@Z
    MCAPI std::vector<std::unique_ptr<class StructurePoolBlockRule>> const* lookupByName(std::string name) const;

    // symbol:
    // ?registerBlockRules@JigsawStructureBlockRulesRegistry@@QEAAXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$$QEAV?$unique_ptr@V?$vector@V?$unique_ptr@VStructurePoolBlockRule@@U?$default_delete@VStructurePoolBlockRule@@@std@@@std@@V?$allocator@V?$unique_ptr@VStructurePoolBlockRule@@U?$default_delete@VStructurePoolBlockRule@@@std@@@std@@@2@@std@@U?$default_delete@V?$vector@V?$unique_ptr@VStructurePoolBlockRule@@U?$default_delete@VStructurePoolBlockRule@@@std@@@std@@V?$allocator@V?$unique_ptr@VStructurePoolBlockRule@@U?$default_delete@VStructurePoolBlockRule@@@std@@@std@@@2@@std@@@2@@3@@Z
    MCAPI void registerBlockRules(
        std::string name,
        std::unique_ptr<std::vector<
            std::unique_ptr<class StructurePoolBlockRule, std::default_delete<class StructurePoolBlockRule>>>>&&
            ruleList
    );

    // symbol: ??1JigsawStructureBlockRulesRegistry@@QEAA@XZ
    MCAPI ~JigsawStructureBlockRulesRegistry();

    // NOLINTEND
};

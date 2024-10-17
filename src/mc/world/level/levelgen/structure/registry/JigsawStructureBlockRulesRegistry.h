#pragma once

#include "mc/_HeaderOutputPredefine.h"

class JigsawStructureBlockRulesRegistry {
public:
    // prevent constructor by default
    JigsawStructureBlockRulesRegistry& operator=(JigsawStructureBlockRulesRegistry const&);
    JigsawStructureBlockRulesRegistry(JigsawStructureBlockRulesRegistry const&);

public:
    // NOLINTBEGIN
    MCAPI JigsawStructureBlockRulesRegistry();

    MCAPI std::vector<std::unique_ptr<class StructurePoolBlockRule>> const* lookupByName(std::string name) const;

    MCAPI void registerBlockRules(
        std::string name,
        std::unique_ptr<std::vector<
            std::unique_ptr<class StructurePoolBlockRule, std::default_delete<class StructurePoolBlockRule>>>>&&
            ruleList
    );

    MCAPI ~JigsawStructureBlockRulesRegistry();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$();

    MCAPI void dtor$();

    // NOLINTEND
};

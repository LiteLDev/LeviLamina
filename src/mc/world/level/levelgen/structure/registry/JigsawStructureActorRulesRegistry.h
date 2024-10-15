#pragma once

#include "mc/_HeaderOutputPredefine.h"

class JigsawStructureActorRulesRegistry {
public:
    // prevent constructor by default
    JigsawStructureActorRulesRegistry& operator=(JigsawStructureActorRulesRegistry const&);
    JigsawStructureActorRulesRegistry(JigsawStructureActorRulesRegistry const&);

public:
    // NOLINTBEGIN
    MCAPI JigsawStructureActorRulesRegistry();

    MCAPI std::vector<std::unique_ptr<class StructurePoolActorRule>> const* lookupByName(std::string name) const;

    MCAPI void registerActorRules(
        std::string name,
        std::unique_ptr<std::vector<
            std::unique_ptr<class StructurePoolActorRule, std::default_delete<class StructurePoolActorRule>>>>&&
            ruleList
    );

    MCAPI ~JigsawStructureActorRulesRegistry();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$();

    MCAPI void dtor$();

    // NOLINTEND
};

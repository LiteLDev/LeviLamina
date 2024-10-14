#pragma once

#include "mc/_HeaderOutputPredefine.h"

class JigsawStructureBlockTagRulesRegistry {
public:
    // prevent constructor by default
    JigsawStructureBlockTagRulesRegistry& operator=(JigsawStructureBlockTagRulesRegistry const&);
    JigsawStructureBlockTagRulesRegistry(JigsawStructureBlockTagRulesRegistry const&);

public:
    // NOLINTBEGIN
    MCAPI JigsawStructureBlockTagRulesRegistry();

    MCAPI std::vector<std::unique_ptr<class StructurePoolBlockTagRule>> const* lookupByName(std::string name) const;

    MCAPI void registerBlockTagRules(
        std::string name,
        std::unique_ptr<std::vector<
            std::unique_ptr<class StructurePoolBlockTagRule, std::default_delete<class StructurePoolBlockTagRule>>>>&&
            ruleList
    );

    MCAPI ~JigsawStructureBlockTagRulesRegistry();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    // NOLINTEND
};

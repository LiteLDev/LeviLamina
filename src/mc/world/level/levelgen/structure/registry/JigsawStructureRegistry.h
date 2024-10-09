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
    MCAPI JigsawStructureRegistry();

    MCAPI class JigsawStructureActorRulesRegistry& getJigsawStructureActorRulesRegistry();

    MCAPI class JigsawStructureBlockRulesRegistry& getJigsawStructureBlockRulesRegistry();

    MCAPI class JigsawStructureBlockTagRulesRegistry& getJigsawStructureBlockTagRulesRegistry();

    MCAPI class JigsawStructureElementRegistry& getJigsawStructureElementRegistry();

    MCAPI void initialize(class BaseGameVersion const& baseGameVersion, class Experiments const& experiments);

    MCAPI class StructureTemplatePool const* lookupByName(std::string name) const;

    MCAPI void registerPool(std::unique_ptr<class StructureTemplatePool>&& pool);

    MCAPI class br::worldgen::StructureSetRegistry& structureSetRegistry();

    MCAPI ~JigsawStructureRegistry();

    // NOLINTEND
};

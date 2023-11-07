#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class GeneticsDefinition {
public:
    // prevent constructor by default
    GeneticsDefinition& operator=(GeneticsDefinition const&);
    GeneticsDefinition(GeneticsDefinition const&);

public:
    // NOLINTBEGIN
    // symbol: ??0GeneticsDefinition@@QEAA@XZ
    MCAPI GeneticsDefinition();

    // symbol: ?addGeneDefinition@GeneticsDefinition@@QEAAXAEBUGeneDefinition@@@Z
    MCAPI void addGeneDefinition(struct GeneDefinition const&);

    // symbol: ?initialize@GeneticsDefinition@@QEBAXAEAVEntityContext@@AEAVGeneticsComponent@@@Z
    MCAPI void initialize(class EntityContext&, class GeneticsComponent&) const;

    // symbol:
    // ?buildSchema@GeneticsDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VGeneticsDefinition@@@JsonUtil@@@std@@@Z
    MCAPI static void
    buildSchema(std::shared_ptr<
                class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class GeneticsDefinition>>&);

    // NOLINTEND

private:
    // NOLINTBEGIN
    // symbol: ?DEFAULT_MUTATION_RATE@GeneticsDefinition@@0MB
    MCAPI static float const DEFAULT_MUTATION_RATE;

    // NOLINTEND

    // member accessor
public:
    // NOLINTBEGIN
    static auto& $DEFAULT_MUTATION_RATE() { return DEFAULT_MUTATION_RATE; }

    // NOLINTEND
};

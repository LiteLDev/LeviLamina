#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class WindBurstDefinition {
public:
    // prevent constructor by default
    WindBurstDefinition& operator=(WindBurstDefinition const&);
    WindBurstDefinition(WindBurstDefinition const&);
    WindBurstDefinition();

public:
    // NOLINTBEGIN
    // symbol: ?initialize@WindBurstDefinition@@QEBAXAEAVEntityContext@@AEAUWindBurstComponent@@@Z
    MCAPI void initialize(class EntityContext&, struct WindBurstComponent&) const;

    // symbol:
    // ?setParticleDefinitionByName@WindBurstDefinition@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void setParticleDefinitionByName(std::string const&);

    // symbol:
    // ?setSoundDefinitionByName@WindBurstDefinition@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void setSoundDefinitionByName(std::string const&);

    // symbol:
    // ?buildSchema@WindBurstDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VWindBurstDefinition@@@JsonUtil@@@std@@@Z
    MCAPI static void
    buildSchema(std::shared_ptr<
                class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class WindBurstDefinition>>&);

    // NOLINTEND
};

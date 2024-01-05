#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class TrustingDefinition {
public:
    // prevent constructor by default
    TrustingDefinition& operator=(TrustingDefinition const&);
    TrustingDefinition(TrustingDefinition const&);

public:
    // NOLINTBEGIN
    // symbol: ??0TrustingDefinition@@QEAA@XZ
    MCAPI TrustingDefinition();

    // symbol:
    // ?addTrustItemByName@TrustingDefinition@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void addTrustItemByName(std::string const& name);

    // symbol: ?initialize@TrustingDefinition@@QEBAXAEAVEntityContext@@AEAVTrustingComponent@@@Z
    MCAPI void initialize(class EntityContext&, class TrustingComponent& component) const;

    // symbol:
    // ?buildSchema@TrustingDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VTrustingDefinition@@@JsonUtil@@@std@@@Z
    MCAPI static void buildSchema(
        std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class TrustingDefinition>>&
            root
    );

    // NOLINTEND
};

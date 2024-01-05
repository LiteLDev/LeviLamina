#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class TameableDefinition {
public:
    // prevent constructor by default
    TameableDefinition& operator=(TameableDefinition const&);
    TameableDefinition(TameableDefinition const&);

public:
    // NOLINTBEGIN
    // symbol: ??0TameableDefinition@@QEAA@XZ
    MCAPI TameableDefinition();

    // symbol:
    // ?addTamingItemByName@TameableDefinition@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void addTamingItemByName(std::string const& name);

    // symbol: ?initialize@TameableDefinition@@QEBAXAEAVEntityContext@@AEAVTameableComponent@@@Z
    MCAPI void initialize(class EntityContext&, class TameableComponent& component) const;

    // symbol:
    // ?buildSchema@TameableDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VTameableDefinition@@@JsonUtil@@@std@@@Z
    MCAPI static void buildSchema(
        std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class TameableDefinition>>&
            root
    );

    // NOLINTEND
};

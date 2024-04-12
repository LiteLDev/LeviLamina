#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class NameableDefinition {
public:
    // prevent constructor by default
    NameableDefinition& operator=(NameableDefinition const&);
    NameableDefinition(NameableDefinition const&);

public:
    // NOLINTBEGIN
    // symbol: ??0NameableDefinition@@QEAA@XZ
    MCAPI NameableDefinition();

    // symbol: ?addNameAction@NameableDefinition@@QEAAXAEBUNameAction@@@Z
    MCAPI void addNameAction(struct NameAction const& nameAction);

    // symbol: ?initialize@NameableDefinition@@QEBAXAEAVEntityContext@@AEAVNameableComponent@@@Z
    MCAPI void initialize(class EntityContext& entity, class NameableComponent& component) const;

    // symbol:
    // ?buildSchema@NameableDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VNameableDefinition@@@JsonUtil@@@std@@@Z
    MCAPI static void buildSchema(
        std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class NameableDefinition>>&
            root
    );

    // NOLINTEND
};

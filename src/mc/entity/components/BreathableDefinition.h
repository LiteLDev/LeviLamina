#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class BreathableDefinition {
public:
    // prevent constructor by default
    BreathableDefinition& operator=(BreathableDefinition const&);
    BreathableDefinition(BreathableDefinition const&);

public:
    // NOLINTBEGIN
    // symbol: ??0BreathableDefinition@@QEAA@XZ
    MCAPI BreathableDefinition();

    // symbol: ?addBreathableBlockDescriptor@BreathableDefinition@@QEAAXAEBVBlockDescriptor@@@Z
    MCAPI void addBreathableBlockDescriptor(class BlockDescriptor const& blockDescriptor);

    // symbol: ?addNonBreathableBlockDescriptor@BreathableDefinition@@QEAAXAEBVBlockDescriptor@@@Z
    MCAPI void addNonBreathableBlockDescriptor(class BlockDescriptor const& blockDescriptor);

    // symbol: ?initialize@BreathableDefinition@@QEBAXAEAVEntityContext@@AEAVBreathableComponent@@@Z
    MCAPI void initialize(class EntityContext& entity, class BreathableComponent& component) const;

    // symbol:
    // ?buildSchema@BreathableDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VBreathableDefinition@@@JsonUtil@@@std@@@Z
    MCAPI static void buildSchema(
        std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class BreathableDefinition>>&
            root
    );

    // NOLINTEND
};

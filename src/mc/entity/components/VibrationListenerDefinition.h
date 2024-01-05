#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class VibrationListenerDefinition {
public:
    // prevent constructor by default
    VibrationListenerDefinition& operator=(VibrationListenerDefinition const&);
    VibrationListenerDefinition(VibrationListenerDefinition const&);
    VibrationListenerDefinition();

public:
    // NOLINTBEGIN
    // symbol: ?initialize@VibrationListenerDefinition@@QEBAXAEAVEntityContext@@@Z
    MCAPI void initialize(class EntityContext& entity) const;

    // symbol:
    // ?buildSchema@VibrationListenerDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VVibrationListenerDefinition@@@JsonUtil@@@std@@@Z
    MCAPI static void buildSchema(
        std::shared_ptr<
            class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class VibrationListenerDefinition>>& root
    );

    // NOLINTEND
};

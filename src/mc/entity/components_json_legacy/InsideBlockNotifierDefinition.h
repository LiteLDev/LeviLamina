#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class InsideBlockNotifierDefinition {
public:
    // prevent constructor by default
    InsideBlockNotifierDefinition& operator=(InsideBlockNotifierDefinition const&);
    InsideBlockNotifierDefinition(InsideBlockNotifierDefinition const&);
    InsideBlockNotifierDefinition();

public:
    // NOLINTBEGIN
    MCAPI void initialize(class EntityContext&, class InsideBlockNotifierComponent& component) const;

    MCAPI static void buildSchema(
        std::shared_ptr<
            class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class InsideBlockNotifierDefinition>>& root
    );

    // NOLINTEND
};

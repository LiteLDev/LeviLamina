#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class GrowsCropDefinition {
public:
    // prevent constructor by default
    GrowsCropDefinition& operator=(GrowsCropDefinition const&);
    GrowsCropDefinition(GrowsCropDefinition const&);

public:
    // NOLINTBEGIN
    MCAPI GrowsCropDefinition();

    MCAPI void initialize(class EntityContext&, class GrowsCropComponent& component) const;

    MCAPI static void buildSchema(
        std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class GrowsCropDefinition>>&
            root
    );

    // NOLINTEND
};

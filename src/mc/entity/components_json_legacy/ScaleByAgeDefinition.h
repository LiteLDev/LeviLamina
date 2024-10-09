#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class ScaleByAgeDefinition {
public:
    // prevent constructor by default
    ScaleByAgeDefinition& operator=(ScaleByAgeDefinition const&);
    ScaleByAgeDefinition(ScaleByAgeDefinition const&);

public:
    // NOLINTBEGIN
    MCAPI ScaleByAgeDefinition();

    MCAPI void initialize(class EntityContext&, class ScaleByAgeComponent& component) const;

    MCAPI static void buildSchema(
        std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class ScaleByAgeDefinition>>&
            root
    );

    // NOLINTEND
};

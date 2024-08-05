#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class SittableDefinition {
public:
    // prevent constructor by default
    SittableDefinition& operator=(SittableDefinition const&);
    SittableDefinition(SittableDefinition const&);
    SittableDefinition();

public:
    // NOLINTBEGIN
    MCAPI void uninitialize(class EntityContext& entity, class SitComponent&) const;

    MCAPI static void buildSchema(
        std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class SittableDefinition>>&
            root
    );

    // NOLINTEND
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

struct BodyRotationBlockedDefinition {
public:
    // prevent constructor by default
    BodyRotationBlockedDefinition& operator=(BodyRotationBlockedDefinition const&);
    BodyRotationBlockedDefinition(BodyRotationBlockedDefinition const&);
    BodyRotationBlockedDefinition();

public:
    // NOLINTBEGIN
    MCAPI void initialize(class EntityContext&) const;

    MCAPI void uninitialize(class EntityContext&) const;

    MCAPI static void buildSchema(std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<
                                      class JsonUtil::EmptyClass,
                                      struct BodyRotationBlockedDefinition>>&);

    // NOLINTEND
};

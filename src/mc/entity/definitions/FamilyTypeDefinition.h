#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

struct FamilyTypeDefinition {
public:
    // prevent constructor by default
    FamilyTypeDefinition& operator=(FamilyTypeDefinition const&);
    FamilyTypeDefinition(FamilyTypeDefinition const&);
    FamilyTypeDefinition();

public:
    // NOLINTBEGIN
    MCAPI void addFamilyName(std::string const& name);

    MCAPI static void buildSchema(
        std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct FamilyTypeDefinition>>&
            root
    );

    // NOLINTEND
};

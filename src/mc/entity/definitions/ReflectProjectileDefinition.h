#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class ReflectProjectileDefinition {
public:
    // prevent constructor by default
    ReflectProjectileDefinition& operator=(ReflectProjectileDefinition const&);
    ReflectProjectileDefinition(ReflectProjectileDefinition const&);
    ReflectProjectileDefinition();

public:
    // NOLINTBEGIN
    MCAPI static void buildSchema(
        std::shared_ptr<
            class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class ReflectProjectileDefinition>>& root
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _addProjectileToReflect(std::string const& projectileName);

    // NOLINTEND
};

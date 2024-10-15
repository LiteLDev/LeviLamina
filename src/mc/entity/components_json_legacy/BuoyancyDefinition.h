#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace JsonUtil { class EmptyClass; }
// clang-format on

class BuoyancyDefinition {
public:
    // prevent constructor by default
    BuoyancyDefinition& operator=(BuoyancyDefinition const&);
    BuoyancyDefinition(BuoyancyDefinition const&);

public:
    // NOLINTBEGIN
    MCAPI BuoyancyDefinition();

    MCAPI void initialize(class EntityContext& entity, class BuoyancyComponent& component) const;

    MCAPI void uninitialize(class EntityContext& entity, class BuoyancyComponent&) const;

    MCAPI static void buildSchema(
        std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class BuoyancyDefinition>>&
            root
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _addLiquidBlockDescriptor(class BlockDescriptor const& liquidBlockDescriptor);

    MCAPI class Json::Value _serialize() const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$();

    // NOLINTEND
};

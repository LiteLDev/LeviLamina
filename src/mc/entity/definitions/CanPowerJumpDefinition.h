#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
namespace JsonUtil { class EmptyClass; }
// clang-format on

struct CanPowerJumpDefinition {
public:
    // prevent constructor by default
    CanPowerJumpDefinition& operator=(CanPowerJumpDefinition const&);
    CanPowerJumpDefinition(CanPowerJumpDefinition const&);
    CanPowerJumpDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void initialize(::EntityContext& entity) const;

    MCAPI void uninitialize(::EntityContext& entity) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void buildSchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::CanPowerJumpDefinition>>& root
    );
    // NOLINTEND
};

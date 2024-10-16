#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"
#include "mc/world/actor/ai/goal/MoveTowardsRestrictionDefinition.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class MoveTowardsHomeRestrictionDefinition : public ::MoveTowardsRestrictionDefinition {
public:
    // prevent constructor by default
    MoveTowardsHomeRestrictionDefinition& operator=(MoveTowardsHomeRestrictionDefinition const&);
    MoveTowardsHomeRestrictionDefinition(MoveTowardsHomeRestrictionDefinition const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MoveTowardsHomeRestrictionDefinition() = default;

    MCAPI MoveTowardsHomeRestrictionDefinition();

    MCAPI static void buildSchema(
        std::string const&                                name,
        std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<
            class JsonUtil::EmptyClass,
            class MoveTowardsHomeRestrictionDefinition>>& root
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$();

    // NOLINTEND
};

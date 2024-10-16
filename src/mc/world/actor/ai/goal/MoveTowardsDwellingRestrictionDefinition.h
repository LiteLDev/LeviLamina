#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"
#include "mc/world/actor/ai/goal/MoveTowardsRestrictionDefinition.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class MoveTowardsDwellingRestrictionDefinition : public ::MoveTowardsRestrictionDefinition {
public:
    // prevent constructor by default
    MoveTowardsDwellingRestrictionDefinition& operator=(MoveTowardsDwellingRestrictionDefinition const&);
    MoveTowardsDwellingRestrictionDefinition(MoveTowardsDwellingRestrictionDefinition const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MoveTowardsDwellingRestrictionDefinition() = default;

    MCAPI MoveTowardsDwellingRestrictionDefinition();

    MCAPI static void buildSchema(
        std::string const&                                    name,
        std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<
            class JsonUtil::EmptyClass,
            class MoveTowardsDwellingRestrictionDefinition>>& root
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$();

    // NOLINTEND
};

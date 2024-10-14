#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"
#include "mc/world/actor/ai/goal/BaseGoalDefinition.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class SwoopAttackDefinition : public ::BaseGoalDefinition {
public:
    // prevent constructor by default
    SwoopAttackDefinition& operator=(SwoopAttackDefinition const&);
    SwoopAttackDefinition(SwoopAttackDefinition const&);
    SwoopAttackDefinition();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SwoopAttackDefinition() = default;

    MCAPI static void buildSchema(
        std::string const& name,
        std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class SwoopAttackDefinition>>&
            root
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    // NOLINTEND
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"
#include "mc/world/actor/ai/goal/BaseGoalDefinition.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class SlimeRandomDirectionDefinition : public ::BaseGoalDefinition {
public:
    // prevent constructor by default
    SlimeRandomDirectionDefinition& operator=(SlimeRandomDirectionDefinition const&);
    SlimeRandomDirectionDefinition(SlimeRandomDirectionDefinition const&);
    SlimeRandomDirectionDefinition();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SlimeRandomDirectionDefinition() = default;

    MCAPI static void buildSchema(
        std::string const& name,
        std::shared_ptr<
            class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class SlimeRandomDirectionDefinition>>&
            root
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    // NOLINTEND
};

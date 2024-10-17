#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"
#include "mc/world/actor/ai/goal/WorkDefinition.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class WorkComposterDefinition : public ::WorkDefinition {
public:
    // prevent constructor by default
    WorkComposterDefinition& operator=(WorkComposterDefinition const&);
    WorkComposterDefinition(WorkComposterDefinition const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~WorkComposterDefinition() = default;

    MCAPI WorkComposterDefinition();

    MCAPI static void buildSchema(
        std::string const& name,
        std::shared_ptr<
            class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class WorkComposterDefinition>>& root
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$();

    // NOLINTEND
};

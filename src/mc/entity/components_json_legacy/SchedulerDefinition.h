#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
class ActorDefinitionTrigger;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class SchedulerDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::ActorDefinitionTrigger>> mTriggerDefs;
    ::ll::TypedStorage<4, 4, uint>                                     mMinDelayTicks;
    ::ll::TypedStorage<4, 4, uint>                                     mMaxDelayTicks;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void setMaxDelayTicks(float const& seconds);

    MCAPI void setMinDelayTicks(float const& seconds);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void buildSchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::SchedulerDefinition>>& root
    );
    // NOLINTEND
};

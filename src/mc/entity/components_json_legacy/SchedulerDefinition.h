#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class SchedulerDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk3bbcac;
    ::ll::UntypedStorage<4, 4>  mUnk854e15;
    ::ll::UntypedStorage<4, 4>  mUnk92c9e3;
    // NOLINTEND

public:
    // prevent constructor by default
    SchedulerDefinition& operator=(SchedulerDefinition const&);
    SchedulerDefinition(SchedulerDefinition const&);
    SchedulerDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void setMaxDelayTicks(float const& seconds);

    MCAPI void setMinDelayTicks(float const& seconds);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void
    buildSchema(::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::SchedulerDefinition>>& root
    );
    // NOLINTEND
};

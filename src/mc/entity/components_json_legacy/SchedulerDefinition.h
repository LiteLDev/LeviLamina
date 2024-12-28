#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class SchedulerComponent;
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

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SchedulerDefinition();

    MCAPI void initialize(::EntityContext&, ::SchedulerComponent& component) const;

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

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND
};

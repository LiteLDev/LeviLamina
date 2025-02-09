#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"
#include "mc/util/Factory.h"

// auto generated forward declare list
// clang-format off
class ActorEventResponse;
class SemVersion;
namespace JsonUtil { class EmptyClass; }
// clang-format on

struct ActorEventResponseCollection {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::ActorEventResponse>>> mResponses;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::shared_ptr<
        ::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::ActorEventResponseCollection>>
    buildSchema(::std::string const& name, ::SemVersion const& version, ::Factory<::ActorEventResponse> const& factory);
    // NOLINTEND
};

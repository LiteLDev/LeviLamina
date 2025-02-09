#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"
#include "mc/util/Factory.h"

// auto generated forward declare list
// clang-format off
class EventResponse;
class SemVersion;
namespace JsonUtil { class EmptyClass; }
// clang-format on

struct EventResponseCollection {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::EventResponse>>> mResponses;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::EventResponseCollection>>
    buildSchema(::std::string const& name, ::SemVersion const& version, ::Factory<::EventResponse> const& factory);
    // NOLINTEND
};

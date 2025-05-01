#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

struct AirControlledDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnka7f38c;
    ::ll::UntypedStorage<4, 4> mUnkce50cf;
    // NOLINTEND

public:
    // prevent constructor by default
    AirControlledDefinition& operator=(AirControlledDefinition const&);
    AirControlledDefinition(AirControlledDefinition const&);
    AirControlledDefinition();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void buildSchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::AirControlledDefinition>>& root
    );
    // NOLINTEND
};

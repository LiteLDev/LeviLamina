#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class AdmireItemDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk279af6;
    ::ll::UntypedStorage<4, 4> mUnkefeb90;
    // NOLINTEND

public:
    // prevent constructor by default
    AdmireItemDefinition& operator=(AdmireItemDefinition const&);
    AdmireItemDefinition(AdmireItemDefinition const&);
    AdmireItemDefinition();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void buildSchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::AdmireItemDefinition>>& root
    );
    // NOLINTEND
};

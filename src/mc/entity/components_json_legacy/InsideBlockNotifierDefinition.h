#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class InsideBlockNotifierDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkd94296;
    // NOLINTEND

public:
    // prevent constructor by default
    InsideBlockNotifierDefinition& operator=(InsideBlockNotifierDefinition const&);
    InsideBlockNotifierDefinition(InsideBlockNotifierDefinition const&);
    InsideBlockNotifierDefinition();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void buildSchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::InsideBlockNotifierDefinition>>&
            root
    );
    // NOLINTEND
};

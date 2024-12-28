#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class RailActivatorDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 104> mUnk33b7bc;
    ::ll::UntypedStorage<8, 104> mUnka78886;
    ::ll::UntypedStorage<1, 1>   mUnk86e307;
    ::ll::UntypedStorage<1, 1>   mUnk164319;
    ::ll::UntypedStorage<1, 1>   mUnkafaf1a;
    ::ll::UntypedStorage<1, 1>   mUnk543ab5;
    ::ll::UntypedStorage<1, 1>   mUnkef7465;
    // NOLINTEND

public:
    // prevent constructor by default
    RailActivatorDefinition& operator=(RailActivatorDefinition const&);
    RailActivatorDefinition(RailActivatorDefinition const&);
    RailActivatorDefinition();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void buildSchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::RailActivatorDefinition>>& root
    );
    // NOLINTEND
};

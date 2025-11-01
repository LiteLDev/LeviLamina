#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class DashActionDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk17b33f;
    ::ll::UntypedStorage<4, 4> mUnk3b3c51;
    ::ll::UntypedStorage<4, 4> mUnkca829b;
    ::ll::UntypedStorage<1, 1> mUnkadbd9b;
    // NOLINTEND

public:
    // prevent constructor by default
    DashActionDefinition& operator=(DashActionDefinition const&);
    DashActionDefinition(DashActionDefinition const&);
    DashActionDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void setDirection(::std::string const& direction);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void buildSchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::DashActionDefinition>>& root
    );
    // NOLINTEND
};

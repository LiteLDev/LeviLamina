#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
struct GiveableTrigger;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class GiveableDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk55a84c;
    // NOLINTEND

public:
    // prevent constructor by default
    GiveableDefinition& operator=(GiveableDefinition const&);
    GiveableDefinition(GiveableDefinition const&);
    GiveableDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void addGiveableTrigger(::GiveableTrigger const& trigger);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void
    buildSchema(::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::GiveableDefinition>>& root
    );
    // NOLINTEND
};

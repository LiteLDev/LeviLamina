#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#include "mc/world/actor/ai/goal/BaseGoalDefinition.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class ChargeHeldItemDefinition : public ::BaseGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk3e9be9;
    // NOLINTEND

public:
    // prevent constructor by default
    ChargeHeldItemDefinition& operator=(ChargeHeldItemDefinition const&);
    ChargeHeldItemDefinition(ChargeHeldItemDefinition const&);
    ChargeHeldItemDefinition();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ChargeHeldItemDefinition() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void buildSchema(
        ::std::string const&                                                                                     name,
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::ChargeHeldItemDefinition>>& root
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

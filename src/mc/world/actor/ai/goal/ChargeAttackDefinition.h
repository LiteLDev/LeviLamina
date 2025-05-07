#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#include "mc/world/actor/ai/goal/BaseGoalDefinition.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class ChargeAttackDefinition : public ::BaseGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkf746d7;
    ::ll::UntypedStorage<4, 4> mUnk90788f;
    ::ll::UntypedStorage<4, 4> mUnk960edd;
    ::ll::UntypedStorage<4, 4> mUnk75faf1;
    ::ll::UntypedStorage<4, 4> mUnk401573;
    // NOLINTEND

public:
    // prevent constructor by default
    ChargeAttackDefinition& operator=(ChargeAttackDefinition const&);
    ChargeAttackDefinition(ChargeAttackDefinition const&);
    ChargeAttackDefinition();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ChargeAttackDefinition() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void buildSchema(
        ::std::string const&                                                                                   name,
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::ChargeAttackDefinition>>& root
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

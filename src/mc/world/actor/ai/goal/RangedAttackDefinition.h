#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#include "mc/world/actor/ai/goal/BaseGoalDefinition.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class RangedAttackDefinition : public ::BaseGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk4ae771;
    ::ll::UntypedStorage<4, 4> mUnk12c92c;
    ::ll::UntypedStorage<4, 4> mUnk524fdb;
    ::ll::UntypedStorage<4, 4> mUnkbbf0b4;
    ::ll::UntypedStorage<4, 4> mUnkf39d94;
    ::ll::UntypedStorage<4, 4> mUnk3e8be6;
    ::ll::UntypedStorage<4, 4> mUnk6cdb80;
    ::ll::UntypedStorage<4, 4> mUnkfd5cbd;
    ::ll::UntypedStorage<4, 4> mUnkd8e6b6;
    ::ll::UntypedStorage<4, 4> mUnk43928b;
    ::ll::UntypedStorage<4, 4> mUnkb07c63;
    ::ll::UntypedStorage<4, 4> mUnkbf82bf;
    ::ll::UntypedStorage<4, 4> mUnkaa7f85;
    ::ll::UntypedStorage<1, 1> mUnk2aa5b1;
    ::ll::UntypedStorage<1, 1> mUnk29b842;
    // NOLINTEND

public:
    // prevent constructor by default
    RangedAttackDefinition& operator=(RangedAttackDefinition const&);
    RangedAttackDefinition(RangedAttackDefinition const&);
    RangedAttackDefinition();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RangedAttackDefinition() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void buildSchema(
        ::std::string const&                                                                                   name,
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::RangedAttackDefinition>>& root
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

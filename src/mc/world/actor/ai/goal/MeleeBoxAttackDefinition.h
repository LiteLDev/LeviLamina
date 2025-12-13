#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#include "mc/world/actor/ai/goal/MeleeAttackBaseDefinition.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class MeleeBoxAttackDefinition : public ::MeleeAttackBaseDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk8562e8;
    // NOLINTEND

public:
    // prevent constructor by default
    MeleeBoxAttackDefinition& operator=(MeleeBoxAttackDefinition const&);
    MeleeBoxAttackDefinition(MeleeBoxAttackDefinition const&);
    MeleeBoxAttackDefinition();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MeleeBoxAttackDefinition() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void buildSchema(
        ::std::string const&                                                                                     name,
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::MeleeBoxAttackDefinition>>& root
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

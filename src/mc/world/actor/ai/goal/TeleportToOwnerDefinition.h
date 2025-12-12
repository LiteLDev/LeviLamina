#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#include "mc/world/actor/ai/goal/BaseGoalDefinition.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class TeleportToOwnerDefinition : public ::BaseGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnkd69f35;
    ::ll::UntypedStorage<4, 4>  mUnk5c4bc9;
    // NOLINTEND

public:
    // prevent constructor by default
    TeleportToOwnerDefinition& operator=(TeleportToOwnerDefinition const&);
    TeleportToOwnerDefinition(TeleportToOwnerDefinition const&);
    TeleportToOwnerDefinition();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TeleportToOwnerDefinition() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void buildSchema(
        ::std::string const&                                                                                      name,
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::TeleportToOwnerDefinition>>& root
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

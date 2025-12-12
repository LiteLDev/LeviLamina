#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#include "mc/world/actor/ai/goal/BaseGoalDefinition.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class OcelotAttackDefinition : public ::BaseGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk54300c;
    ::ll::UntypedStorage<4, 4> mUnk1db96b;
    ::ll::UntypedStorage<4, 4> mUnk1a5cd8;
    ::ll::UntypedStorage<4, 4> mUnkf007f7;
    ::ll::UntypedStorage<4, 4> mUnk88d33c;
    ::ll::UntypedStorage<4, 4> mUnk32a747;
    ::ll::UntypedStorage<4, 4> mUnkeabe3d;
    ::ll::UntypedStorage<4, 4> mUnk5bdf7b;
    ::ll::UntypedStorage<4, 4> mUnk3ffa0f;
    ::ll::UntypedStorage<4, 4> mUnk3088a7;
    // NOLINTEND

public:
    // prevent constructor by default
    OcelotAttackDefinition& operator=(OcelotAttackDefinition const&);
    OcelotAttackDefinition(OcelotAttackDefinition const&);
    OcelotAttackDefinition();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~OcelotAttackDefinition() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void buildSchema(
        ::std::string const&                                                                                   name,
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::OcelotAttackDefinition>>& root
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

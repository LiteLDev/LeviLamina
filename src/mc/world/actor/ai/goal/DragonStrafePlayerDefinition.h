#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#include "mc/world/actor/ai/goal/DragonBaseGoalDefinition.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class DragonStrafePlayerDefinition : public ::DragonBaseGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk9a6d5d;
    ::ll::UntypedStorage<4, 4> mUnk621e17;
    ::ll::UntypedStorage<4, 4> mUnk46f52c;
    ::ll::UntypedStorage<4, 4> mUnk3da9f4;
    // NOLINTEND

public:
    // prevent constructor by default
    DragonStrafePlayerDefinition& operator=(DragonStrafePlayerDefinition const&);
    DragonStrafePlayerDefinition(DragonStrafePlayerDefinition const&);
    DragonStrafePlayerDefinition();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~DragonStrafePlayerDefinition() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void buildSchema(
        ::std::string const& name,
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::DragonStrafePlayerDefinition>>&
            root
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

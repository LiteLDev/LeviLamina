#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"
#include "mc/world/actor/ai/goal/BaseGoalDefinition.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class SlimeRandomDirectionDefinition : public ::BaseGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk55245f;
    ::ll::UntypedStorage<4, 4> mUnkaf733f;
    ::ll::UntypedStorage<4, 4> mUnkc0e310;
    // NOLINTEND

public:
    // prevent constructor by default
    SlimeRandomDirectionDefinition& operator=(SlimeRandomDirectionDefinition const&);
    SlimeRandomDirectionDefinition(SlimeRandomDirectionDefinition const&);
    SlimeRandomDirectionDefinition();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SlimeRandomDirectionDefinition() /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void buildSchema(
        ::std::string const& name,
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::SlimeRandomDirectionDefinition>>&
            root
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

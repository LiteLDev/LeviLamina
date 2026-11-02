#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

struct WalkAnimationSpeedDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkab8ab9;
    // NOLINTEND

public:
    // prevent constructor by default
    WalkAnimationSpeedDefinition& operator=(WalkAnimationSpeedDefinition const&);
    WalkAnimationSpeedDefinition(WalkAnimationSpeedDefinition const&);
    WalkAnimationSpeedDefinition();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void buildSchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::WalkAnimationSpeedDefinition>>&
            root
    );
    // NOLINTEND
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

struct MovementSoundDistanceOffsetDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk869e41;
    // NOLINTEND

public:
    // prevent constructor by default
    MovementSoundDistanceOffsetDefinition& operator=(MovementSoundDistanceOffsetDefinition const&);
    MovementSoundDistanceOffsetDefinition(MovementSoundDistanceOffsetDefinition const&);
    MovementSoundDistanceOffsetDefinition();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void buildSchema(
        ::std::shared_ptr<
            ::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::MovementSoundDistanceOffsetDefinition>>& root
    );
    // NOLINTEND
};

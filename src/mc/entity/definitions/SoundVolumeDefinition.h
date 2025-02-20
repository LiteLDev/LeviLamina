#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

struct SoundVolumeDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk5ece06;
    // NOLINTEND

public:
    // prevent constructor by default
    SoundVolumeDefinition& operator=(SoundVolumeDefinition const&);
    SoundVolumeDefinition(SoundVolumeDefinition const&);
    SoundVolumeDefinition();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void buildSchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::SoundVolumeDefinition>>& root
    );
    // NOLINTEND
};

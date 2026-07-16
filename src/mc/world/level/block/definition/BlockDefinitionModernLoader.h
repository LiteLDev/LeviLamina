#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BedrockLoadContext;
namespace SharedTypes::v1_26_20::BlockDefinition { struct BlockDefinitionDocument; }
// clang-format on

class BlockDefinitionModernLoader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        256,
        ::Puv::SlicedLoader<
            ::SharedTypes::v1_26_20::BlockDefinition::BlockDefinitionDocument,
            ::BedrockLoadContext,
            nullptr_t,
            ::SharedTypes::v1_26_20::BlockDefinition::BlockDefinitionDocument>>
        mLoader;
    // NOLINTEND
};

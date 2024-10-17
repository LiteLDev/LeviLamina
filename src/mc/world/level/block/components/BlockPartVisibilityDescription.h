#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"
#include "mc/world/level/block/components/BlockComponentDescription.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class BlockPartVisibilityDescription : public ::BlockComponentDescription {
public:
    // prevent constructor by default
    BlockPartVisibilityDescription& operator=(BlockPartVisibilityDescription const&);
    BlockPartVisibilityDescription(BlockPartVisibilityDescription const&);
    BlockPartVisibilityDescription();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BlockPartVisibilityDescription() = default;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static std::string const& NameID();

    // NOLINTEND
};

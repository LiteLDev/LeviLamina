#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"
#include "mc/world/level/block/components/BlockComponentDescription.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct BlockCreativeGroupDescription : public ::BlockComponentDescription {
public:
    // prevent constructor by default
    BlockCreativeGroupDescription& operator=(BlockCreativeGroupDescription const&);
    BlockCreativeGroupDescription(BlockCreativeGroupDescription const&);
    BlockCreativeGroupDescription();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BlockCreativeGroupDescription() = default;

    // vIndex: 1
    virtual std::string const& getName() const;

    MCAPI static std::string const NameID;

    // NOLINTEND
};

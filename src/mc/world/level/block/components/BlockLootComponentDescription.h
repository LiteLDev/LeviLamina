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

struct BlockLootComponentDescription : public ::BlockComponentDescription {
public:
    // prevent constructor by default
    BlockLootComponentDescription& operator=(BlockLootComponentDescription const&);
    BlockLootComponentDescription(BlockLootComponentDescription const&);
    BlockLootComponentDescription();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BlockLootComponentDescription() = default;

    // vIndex: 1
    virtual std::string const& getName() const;

    // vIndex: 3
    virtual void initializeComponent(class BlockComponentStorage& blockComponentStorage) const;

    MCAPI static void bindType(struct cereal::ReflectionCtx& ctx);

    MCAPI static std::string const NameID;

    // NOLINTEND
};

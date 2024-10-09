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

struct BlockFlammableDescription : public ::BlockComponentDescription {
public:
    // prevent constructor by default
    BlockFlammableDescription& operator=(BlockFlammableDescription const&);
    BlockFlammableDescription(BlockFlammableDescription const&);
    BlockFlammableDescription();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BlockFlammableDescription() = default;

    // vIndex: 1
    virtual std::string const& getName() const;

    // vIndex: 3
    virtual void initializeComponent(class BlockComponentStorage& blockComponentStorage) const;

    MCAPI static void bindType(struct cereal::ReflectionCtx& ctx);

    MCAPI static int const CATCH_CHANCE_DEFAULT;

    MCAPI static int const DESTROY_CHANCE_DEFAULT;

    MCAPI static std::string const NameID;

    // NOLINTEND
};

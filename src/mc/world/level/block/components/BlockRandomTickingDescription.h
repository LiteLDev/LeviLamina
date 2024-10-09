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

struct BlockRandomTickingDescription : public ::BlockComponentDescription {
public:
    // prevent constructor by default
    BlockRandomTickingDescription& operator=(BlockRandomTickingDescription const&);
    BlockRandomTickingDescription(BlockRandomTickingDescription const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BlockRandomTickingDescription() = default;

    // vIndex: 1
    virtual std::string const& getName() const;

    // vIndex: 3
    virtual void initializeComponent(class BlockComponentStorage& blockComponentStorage) const;

    MCAPI BlockRandomTickingDescription();

    MCAPI static void bindType(struct cereal::ReflectionCtx& ctx);

    MCAPI static std::string const NameID;

    // NOLINTEND
};

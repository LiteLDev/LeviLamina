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

class BlockTickConfigurationComponentDescription : public ::BlockComponentDescription {
public:
    // prevent constructor by default
    BlockTickConfigurationComponentDescription& operator=(BlockTickConfigurationComponentDescription const&);
    BlockTickConfigurationComponentDescription(BlockTickConfigurationComponentDescription const&);
    BlockTickConfigurationComponentDescription();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BlockTickConfigurationComponentDescription() = default;

    // vIndex: 1
    virtual std::string const& getName() const;

    // vIndex: 3
    virtual void initializeComponent(class BlockComponentStorage&) const;

    MCAPI static void bindType(struct cereal::ReflectionCtx&);

    MCAPI static std::string const NameID;

    // NOLINTEND
};

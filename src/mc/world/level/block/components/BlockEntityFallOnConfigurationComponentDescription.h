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

class BlockEntityFallOnConfigurationComponentDescription : public ::BlockComponentDescription {
public:
    // prevent constructor by default
    BlockEntityFallOnConfigurationComponentDescription&
    operator=(BlockEntityFallOnConfigurationComponentDescription const&);
    BlockEntityFallOnConfigurationComponentDescription(BlockEntityFallOnConfigurationComponentDescription const&);
    BlockEntityFallOnConfigurationComponentDescription();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BlockEntityFallOnConfigurationComponentDescription() = default;

    // vIndex: 1
    virtual std::string const& getName() const;

    // vIndex: 3
    virtual void initializeComponent(class BlockComponentStorage& blockComponentStorage) const;

    MCAPI static void bindType(struct cereal::ReflectionCtx& ctx);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI std::string const& getName$() const;

    MCAPI void initializeComponent$(class BlockComponentStorage& blockComponentStorage) const;

    MCAPI static std::string const& NameID();

    // NOLINTEND
};

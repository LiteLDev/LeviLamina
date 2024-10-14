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

struct BlockPlacementFilterDescription : public ::BlockComponentDescription {
public:
    // prevent constructor by default
    BlockPlacementFilterDescription& operator=(BlockPlacementFilterDescription const&);
    BlockPlacementFilterDescription(BlockPlacementFilterDescription const&);
    BlockPlacementFilterDescription();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BlockPlacementFilterDescription() = default;

    // vIndex: 1
    virtual std::string const& getName() const;

    // vIndex: 3
    virtual void initializeComponent(class BlockComponentStorage& blockComponentStorage) const;

    // vIndex: 7
    virtual bool isNetworkComponent() const;

    // vIndex: 8
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag(struct cereal::ReflectionCtx const&) const;

    // vIndex: 9
    virtual void initializeFromNetwork(class CompoundTag const& tag, struct cereal::ReflectionCtx const&);

    MCAPI static void bindType(struct cereal::ReflectionCtx& ctx);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI std::unique_ptr<class CompoundTag> buildNetworkTag$(struct cereal::ReflectionCtx const&) const;

    MCAPI std::string const& getName$() const;

    MCAPI void initializeComponent$(class BlockComponentStorage& blockComponentStorage) const;

    MCAPI void initializeFromNetwork$(class CompoundTag const& tag, struct cereal::ReflectionCtx const&);

    MCAPI bool isNetworkComponent$() const;

    MCAPI static std::string const& NameID();

    // NOLINTEND
};

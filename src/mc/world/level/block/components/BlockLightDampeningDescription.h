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

struct BlockLightDampeningDescription : public ::BlockComponentDescription {
public:
    // prevent constructor by default
    BlockLightDampeningDescription& operator=(BlockLightDampeningDescription const&);
    BlockLightDampeningDescription(BlockLightDampeningDescription const&);
    BlockLightDampeningDescription();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BlockLightDampeningDescription() = default;

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

    MCAPI static std::string const NameID;

    // NOLINTEND
};

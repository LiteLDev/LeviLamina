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

struct BlockCollisionBoxDescription : public ::BlockComponentDescription {
public:
    // prevent constructor by default
    BlockCollisionBoxDescription& operator=(BlockCollisionBoxDescription const&);
    BlockCollisionBoxDescription(BlockCollisionBoxDescription const&);
    BlockCollisionBoxDescription();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BlockCollisionBoxDescription();

    // vIndex: 1
    virtual std::string const& getName() const;

    // vIndex: 3
    virtual void initializeComponent(class BlockComponentStorage&) const;

    // vIndex: 5
    virtual void initializeComponentFromCode(class BlockComponentStorage&) const;

    // vIndex: 7
    virtual bool isNetworkComponent() const;

    // vIndex: 8
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag(struct cereal::ReflectionCtx const&) const;

    // vIndex: 9
    virtual void initializeFromNetwork(class CompoundTag const&, struct cereal::ReflectionCtx const&);

    MCAPI explicit BlockCollisionBoxDescription(bool enabled);

    MCAPI BlockCollisionBoxDescription(class Vec3 const& origin, class Vec3 const& size);

    MCAPI static void bindType(struct cereal::ReflectionCtx&);

    MCAPI static std::string const NameID;

    // NOLINTEND
};

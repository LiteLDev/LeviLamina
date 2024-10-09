#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct BlockGeometryDescription {
public:
    // prevent constructor by default
    BlockGeometryDescription& operator=(BlockGeometryDescription const&);
    BlockGeometryDescription(BlockGeometryDescription const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BlockGeometryDescription();

    // vIndex: 1
    virtual std::string const& getName() const;

    // vIndex: 2
    virtual void initializeComponent(class EntityContext& entity) const;

    // vIndex: 3
    virtual void initializeComponent(class BlockComponentStorage& blockComponentStorage) const;

    // vIndex: 4
    virtual void initializeComponentFromCode(class EntityContext& entity) const;

    // vIndex: 5
    virtual void initializeComponentFromCode(class BlockComponentStorage& blockComponentStorage) const;

    // vIndex: 6
    virtual void buildSchema(
        std::shared_ptr<
            class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct BlockComponentGroupDescription>>&
                                           componentSchema,
        class BlockComponentFactory const& factory
    ) const;

    // vIndex: 7
    virtual bool isNetworkComponent() const;

    // vIndex: 8
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag(struct cereal::ReflectionCtx const& ctx) const;

    // vIndex: 9
    virtual void initializeFromNetwork(class CompoundTag const& tag, struct cereal::ReflectionCtx const& ctx);

    // vIndex: 10
    virtual void handleVersionBasedInitialization(class SemVersion const& originalJsonVersion);

    MCAPI BlockGeometryDescription();

    MCAPI explicit BlockGeometryDescription(class HashedString const& geometryName);

    MCAPI static void bindType(struct cereal::ReflectionCtx& ctx);

    MCAPI static class HashedString const CROSS_GEO_NAME;

    MCAPI static class HashedString const FULL_BLOCK_GEO_NAME;

    MCAPI static std::string const GEO_NAME_CONSTRAINT;

    MCAPI static std::string const NameID;

    // NOLINTEND
};

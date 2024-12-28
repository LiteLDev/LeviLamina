#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
class BlockComponentFactory;
class BlockComponentStorage;
class CerealSchemaUpgradeSet;
class CompoundTag;
class EntityContext;
class SemVersion;
struct BlockComponentGroupDescription;
namespace JsonUtil { class EmptyClass; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct BlockComponentDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnke3e67a;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockComponentDescription& operator=(BlockComponentDescription const&);
    BlockComponentDescription(BlockComponentDescription const&);
    BlockComponentDescription();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BlockComponentDescription();

    // vIndex: 1
    virtual ::std::string const& getName() const;

    // vIndex: 3
    virtual void initializeComponent(::EntityContext& entity) const;

    // vIndex: 2
    virtual void initializeComponent(::BlockComponentStorage& blockComponentStorage) const;

    // vIndex: 5
    virtual void initializeComponentFromCode(::EntityContext& entity) const;

    // vIndex: 4
    virtual void initializeComponentFromCode(::BlockComponentStorage& blockComponentStorage) const;

    // vIndex: 6
    virtual void buildSchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::BlockComponentGroupDescription>>&
                                       componentSchema,
        ::BlockComponentFactory const& factory
    ) const;

    // vIndex: 7
    virtual bool isNetworkComponent() const;

    // vIndex: 8
    virtual ::std::unique_ptr<::CompoundTag> buildNetworkTag(::cereal::ReflectionCtx const& ctx) const;

    // vIndex: 9
    virtual void initializeFromNetwork(::CompoundTag const& tag, ::cereal::ReflectionCtx const& ctx);

    // vIndex: 10
    virtual void handleVersionBasedInitialization(::SemVersion const& originalJsonVersion);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void registerVersionUpgrades(::CerealSchemaUpgradeSet& schemaUpgrades);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::string const& $getName() const;

    MCAPI void $initializeComponent(::EntityContext& entity) const;

    MCAPI void $initializeComponent(::BlockComponentStorage& blockComponentStorage) const;

    MCAPI void $initializeComponentFromCode(::EntityContext& entity) const;

    MCAPI void $initializeComponentFromCode(::BlockComponentStorage& blockComponentStorage) const;

    MCAPI void $buildSchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::BlockComponentGroupDescription>>&
                                       componentSchema,
        ::BlockComponentFactory const& factory
    ) const;

    MCAPI bool $isNetworkComponent() const;

    MCAPI ::std::unique_ptr<::CompoundTag> $buildNetworkTag(::cereal::ReflectionCtx const& ctx) const;

    MCAPI void $initializeFromNetwork(::CompoundTag const& tag, ::cereal::ReflectionCtx const& ctx);

    MCAPI void $handleVersionBasedInitialization(::SemVersion const& originalJsonVersion);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

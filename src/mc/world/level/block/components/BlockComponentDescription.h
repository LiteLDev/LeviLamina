#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
class BlockComponentFactory;
class BlockComponentStorage;
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
    virtual ~BlockComponentDescription();

    virtual ::std::string const& getName() const;

    virtual void initializeComponent(::EntityContext& entity) const;

    virtual void initializeComponent(::BlockComponentStorage& blockComponentStorage) const;

    virtual void initializeComponentFromCode(::EntityContext& entity) const;

    virtual void initializeComponentFromCode(::BlockComponentStorage& blockComponentStorage) const;

    virtual void buildSchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::BlockComponentGroupDescription>>&
                                       componentSchema,
        ::BlockComponentFactory const& factory
    ) const;

    virtual bool isNetworkComponent() const;

    virtual ::std::unique_ptr<::CompoundTag> buildNetworkTag(::cereal::ReflectionCtx const& ctx) const;

    virtual void initializeFromNetwork(::CompoundTag const& tag, ::cereal::ReflectionCtx const& ctx);

    virtual void handleVersionBasedInitialization(::SemVersion const& originalJsonVersion);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::string const& $getName() const;

    MCNAPI void $initializeComponent(::EntityContext& entity) const;

    MCNAPI void $initializeComponent(::BlockComponentStorage& blockComponentStorage) const;

    MCNAPI void $initializeComponentFromCode(::EntityContext& entity) const;

    MCNAPI void $initializeComponentFromCode(::BlockComponentStorage& blockComponentStorage) const;

    MCNAPI void $buildSchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::BlockComponentGroupDescription>>&
                                       componentSchema,
        ::BlockComponentFactory const& factory
    ) const;

    MCNAPI bool $isNetworkComponent() const;

    MCNAPI ::std::unique_ptr<::CompoundTag> $buildNetworkTag(::cereal::ReflectionCtx const& ctx) const;

    MCNAPI void $initializeFromNetwork(::CompoundTag const& tag, ::cereal::ReflectionCtx const& ctx);

    MCNAPI void $handleVersionBasedInitialization(::SemVersion const& originalJsonVersion);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
class BlockComponentFactory;
class BlockComponentStorage;
class BlockType;
class CompoundTag;
class SemVersion;
struct BlockComponentGroupDescription;
namespace JsonUtil { class EmptyClass; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct BlockComponentDescription {
public:
    // BlockComponentDescription inner types declare
    // clang-format off
    struct InitializationContext;
    // clang-format on

    // BlockComponentDescription inner types define
    struct InitializationContext {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::BlockComponentStorage&> mBlockComponentStorage;
        ::ll::TypedStorage<8, 8, ::BlockType&>             mBlockType;
        // NOLINTEND

    public:
        // prevent constructor by default
        InitializationContext& operator=(InitializationContext const&);
        InitializationContext(InitializationContext const&);
        InitializationContext();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mInitializedFromCode;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BlockComponentDescription() = default;

    virtual ::std::string const& getName() const;

    virtual void initializeComponent(::BlockComponentDescription::InitializationContext& context) const;

    virtual void initializeComponent(::BlockComponentStorage& blockComponentStorage) const;

    virtual void initializeComponentFromCode(::BlockComponentDescription::InitializationContext& context) const;

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
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::std::string const& $getName() const;

    MCAPI void $initializeComponent(::BlockComponentDescription::InitializationContext& context) const;

    MCFOLD void $initializeComponent(::BlockComponentStorage& blockComponentStorage) const;

    MCAPI void $initializeComponentFromCode(::BlockComponentDescription::InitializationContext& context) const;

    MCFOLD void $initializeComponentFromCode(::BlockComponentStorage& blockComponentStorage) const;

    MCFOLD void $buildSchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::BlockComponentGroupDescription>>&
                                       componentSchema,
        ::BlockComponentFactory const& factory
    ) const;

    MCFOLD bool $isNetworkComponent() const;

    MCFOLD ::std::unique_ptr<::CompoundTag> $buildNetworkTag(::cereal::ReflectionCtx const& ctx) const;

    MCFOLD void $initializeFromNetwork(::CompoundTag const& tag, ::cereal::ReflectionCtx const& ctx);

    MCFOLD void $handleVersionBasedInitialization(::SemVersion const& originalJsonVersion);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
